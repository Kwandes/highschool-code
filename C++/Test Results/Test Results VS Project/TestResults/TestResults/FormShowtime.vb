'Form with settings for template ShowTime
'Other template Forms follow same pattern

Imports System.IO                                   'Used for folder name sorting etc
Imports Excel = Microsoft.Office.Interop.Excel      'Used to open VBA macro

Public Class FormShowtime
    'Set of public variables that hold settings. They are passed to VBA macro after pressing START button
    Public Path As String
    Public DPU As String
    Public Frequency As String
    Public TDD As String
    Public Length As String

    Private Sub BtnBack_Click(sender As Object, e As EventArgs) Handles BtnBack.Click
        'goes back to Main Menu
        Me.Close()
        FormMain.Show()
        FormMain.Activate() 'brings main form into focus
    End Sub

    Private Sub BtnStart_Click(sender As Object, e As EventArgs) Handles BtnStart.Click
        'After pressing Start It checks if all settings are chosen
        If (Path = "") Or (DPU <> "504VG" And DPU <> "508G" And DPU <> "516G") Or Length = "none" Or TDD = "none" Then
            MsgBox("Incomplete Settings!!", MsgBoxStyle.Exclamation, "Incomplete Settings!!")   'If something is missing it gives an error message
        ElseIf CalculateResults() = 0 Then  'If there are no results for chosen settings it gives an error message
            MsgBox("0 Results for chosen settings. No data will be displayed on the charts" &
            vbCrLf & "Change settings in order to show anything on the chart", MsgBoxStyle.Exclamation, "No Results!!")
        Else    'If all settings are chosen and there are results:
            FormMain.Close()                            'Main form won't be used anymore so we close it
            'We get the path to the resource so it's independant from program location
            Dim ResourcePath As String = My.Application.Info.DirectoryPath &
                System.IO.Path.DirectorySeparatorChar & "Templates\Showtime.xlsm"
            Dim objApp As Object                        'Excel object
            Me.Hide()                                   'Hides the settings form to make everything look neat
            objApp = CreateObject("Excel.Application")  'creates excel instance and assigns it to objApp
            objApp.Workbooks.Open(ResourcePath)    'opens excel sheet from the directory
            objApp.visible = True                                                       'Excel sheet becomes visible
            objApp.Run("STARTNET", Path, DPU.Substring(0, 3), Frequency, Length, TDD)   'Opens Macro in VBA and passes settings to it
            Me.Close()                                  'After vars are passed, the form is closed
            Application.Exit()
        End If
    End Sub

    Private Sub BtnFolder_Click(sender As Object, e As EventArgs) Handles BtnFolder.Click
        'After pressing 'Choose Folder' button it open a dialog for choosing results folder
        Dim FolderBrowser As New FolderBrowserDialog With { 'we save some space by using 'with...' system
        .Description = "Choose folder with test results",   'also gets rid of annoying message
        .RootFolder = Environment.SpecialFolder.MyComputer,
        .ShowNewFolderButton = False
        }
        FolderBrowser.ShowDialog()
        If Windows.Forms.DialogResult.OK Then Path = FolderBrowser.SelectedPath 'Checks if everything is okay and assign chosen path to Path variable
        Me.LblPath.Text = "Path: " & Path                   'displays Path on the form
        Reload()                                            'Function that reloads all vars and summary
    End Sub

    Public Function CalculateResults() As Integer
        'Called in 'Reload()' sub. Checks chosen folder for any subfolders matching current settings
        Dim ResultsCounter As Integer = 0       'Counter for results

        If Path <> "" And DPU <> "" Then        'Doesn't begin checking if selected settings are wrong
            Dim Name As String = DPU & "*"      'We add * to DPU to search for every name starting with DPU
            Dim objDirectory As String()        'All matching subfolders are saved in there
            objDirectory = Directory.GetDirectories(Path, Name) 'Checks Folder names and saves them to objDirectory
            Dim dir As String                   'used to cycle thru directories
            For Each dir In objDirectory        'cycles thru
                'Checks subFolder Name for settings, if name misses any it won't be included in the results(the counter doesn't go up)
                If dir.Contains(TDD) And dir.Contains(Length) And dir.Contains(Frequency) Then ResultsCounter = ResultsCounter + 1 'If everything matches, the counter goes up by one
            Next dir
        End If
        Return ResultsCounter                   'Returns the sum of results with chosen settings
    End Function

    Public Sub Reload()
        'Reloads all public vars and summary. Called on ecery change event
#Region "DPU check"
        'In FormBasic it's diffrent as all DPUs can be chosen, check there
        Select Case CmDPU.SelectedItem  'Combo Box on the Form
            Case "DPU 504VG"
                DPU = "504VG"
            Case "DPU 508G"
                DPU = "508G"
            Case "DPU 516G"
                DPU = "516G"
            Case Else
                DPU = "none"
        End Select
#End Region
#Region "Frequency check"
        Select Case CmFrequency.SelectedItem    'Combo Box on the Form
            Case "106 Mhz"
                Frequency = "2047"
            Case "212 Mhz"
                Frequency = "4095"
            Case Else
                Frequency = "none"
        End Select
#End Region
#Region "Length Selection"
        Select Case Me.CmLength.SelectedItem    'ComboBox on the Form
            Case "000m"
                Length = "000"
            Case "025m"
                Length = "025"
            Case "050m"
                Length = "050"
            Case "075m"
                Length = "075"
            Case "100m"
                Length = "100"
            Case "150m"
                Length = "150"
            Case "200m"
                Length = "200"
            Case "250m"
                Length = "250"
            Case "300m"
                Length = "300"
            Case "350m"
                Length = "350"
            Case "400m"
                Length = "400"
            Case "450m"
                Length = "450"
            Case "500m"
                Length = "500"
            Case "525m"
                Length = "525"
            Case Else
                Length = "none"
        End Select
#End Region
#Region "TDD selection"
        Select Case CmTDD.SelectedItem  'ComboBox on the Form
            Case "18"
                TDD = "18"
            Case "28"
                TDD = "28"
            Case "29"
                TDD = "29"
            Case "32"
                TDD = "32"
            Case Else
                TDD = "none"
        End Select
#End Region
#Region "Summary"
        'FrequencySummary is a var used to display Frequency on the summary. The code itself needs 2047 or 4095 variants
        Dim FrequencySummary As String
        Select Case Frequency
            Case Frequency = "2047"
                FrequencySummary = "106 Mhz"
            Case Frequency = "4095"
                FrequencySummary = "212 Mhz"
            Case Else
                FrequencySummary = "none"
        End Select
        'Summary of all settings
        Me.LblSummary.Text = "Summary:" & vbCrLf &
        "DPU: " & DPU & vbCrLf &
        "Frequency: " & FrequencySummary & vbCrLf &
        "Length: " & Length & "m" & vbCrLf &
        "TDD: " & TDD & vbCrLf &
        "Results for chosen settings: " & CalculateResults()

#End Region
    End Sub

#Region "Code for moving the form"
    'This code is neccessary if we want to allow the User to move the Form window around.
    'The Form has no border so there is nothing to grab to move it around
    Dim drag As Boolean
    Dim mousex As Integer
    Dim mousey As Integer
    Private Sub Form1_MouseDown(ByVal sender As Object,
    ByVal e As System.Windows.Forms.MouseEventArgs) Handles Me.MouseDown
        drag = True
        mousex = Windows.Forms.Cursor.Position.X - Me.Left
        mousey = Windows.Forms.Cursor.Position.Y - Me.Top
    End Sub
    Private Sub Form1_MouseMove(ByVal sender As Object,
    ByVal e As System.Windows.Forms.MouseEventArgs) Handles Me.MouseMove
        If drag Then
            Me.Top = Windows.Forms.Cursor.Position.Y - mousey
            Me.Left = Windows.Forms.Cursor.Position.X - mousex
        End If
    End Sub
    Private Sub Form1_MouseUp(ByVal sender As Object,
    ByVal e As System.Windows.Forms.MouseEventArgs) Handles Me.MouseUp
        drag = False
    End Sub
#End Region

#Region "OnChanged events"
    'When something is changed, like DPU, Reload() is called
    Private Sub CmDPU_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CmDPU.SelectedIndexChanged
        Reload()
    End Sub

    Private Sub CmFrequency_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CmFrequency.SelectedIndexChanged
        Reload()
    End Sub

    Private Sub CmLength_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CmLength.SelectedIndexChanged
        Reload()
    End Sub

    Private Sub CmTDD_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CmTDD.SelectedIndexChanged
        Reload()
    End Sub
#End Region

End Class