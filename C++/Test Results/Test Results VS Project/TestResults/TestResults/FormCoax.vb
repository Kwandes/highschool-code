'Form with settings for template Reach Rate ATT
'All Functions explained in FormShowTime

Imports System.IO
Imports Excel = Microsoft.Office.Interop.Excel

Public Class FormCoax
    Public Path As String
    Public DPU As String
    Public StopTone As String
    Public StarTone As String

    Private Sub BtnBack_Click(sender As Object, e As EventArgs) Handles BtnBack.Click
        Me.Close()
        FormMain.Show()
        FormMain.Activate()
    End Sub

    Private Sub BtnStart_Click(sender As Object, e As EventArgs) Handles BtnStart.Click
        If (Path = "") Or (DPU <> "504VG" And DPU <> "508G" And DPU <> "516G") Or StarTone = "none" Then
            MsgBox("Incomplete Settings!!", MsgBoxStyle.Exclamation, "Incomplete Settings!!")
        ElseIf CalculateResults() = 0 Then
            MsgBox("0 Results for chosen settings. No data will be displayed on the charts" &
            vbCrLf & "Change settings in order to show anything on the chart", MsgBoxStyle.Exclamation, "No Results!!")
        Else
            FormMain.Close()
            Dim ResourcePath As String = My.Application.Info.DirectoryPath &
                System.IO.Path.DirectorySeparatorChar & "Templates\Rate_Reach_Template_coax_ATT.xlsm"
            Dim objApp As Object
            Me.Hide()
            objApp = CreateObject("Excel.Application")
            objApp.Workbooks.Open(ResourcePath)
            objApp.visible = True
            objApp.Run("STARTNET", Path, DPU, StarTone, StopTone)
            Me.Close()
            Application.Exit()
        End If
    End Sub

    Private Sub BtnFolder_Click(sender As Object, e As EventArgs) Handles BtnFolder.Click
        Dim FolderBrowser As New FolderBrowserDialog With {
        .Description = "Choose folder with test results",
        .RootFolder = Environment.SpecialFolder.MyComputer,
        .ShowNewFolderButton = False
        }
        FolderBrowser.ShowDialog()
        If Windows.Forms.DialogResult.OK Then Path = FolderBrowser.SelectedPath
        Me.LblPath.Text = "Path: " & Path
        Reload()
    End Sub

    Public Function CalculateResults() As Integer
        Dim ResultsCounter As Integer = 0

        If Path <> "" And DPU <> "none" Then
            Dim Name As String = DPU & "*"
            Dim objDirectory As String()
            objDirectory = Directory.GetDirectories(Path, Name)
            Dim dir As String
            For Each dir In objDirectory
                If dir.Contains(StarTone) And dir.Contains(StopTone) Then
                    ResultsCounter = ResultsCounter + 1
                End If
            Next dir
        End If
        Return ResultsCounter
    End Function

    Public Sub Reload()
#Region "DPU check"
        Select Case CmDPU.SelectedItem
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
#Region "Tones"
        If (CmTones.SelectedItem IsNot Nothing) Then
            Dim Tones As String = CmTones.SelectedItem
            StarTone = Tones.Substring(0, 4)
            StopTone = Tones.Substring(5)
        Else
            StarTone = "none"
            StopTone = "none"
        End If
#End Region
#Region "Summary"

        Me.LblSummary.Text = "Summary:" & vbCrLf &
        "DPU: " & DPU & vbCrLf &
        "StarTone: " & StarTone & vbCrLf &
        "StopTone: " & StopTone & vbCrLf &
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
    Private Sub CmDPU_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CmDPU.SelectedIndexChanged
        Reload()
    End Sub

    Private Sub CmTones_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CmTones.SelectedIndexChanged
        Reload()
    End Sub

    Private Sub CmTDD_SelectedIndexChanged(sender As Object, e As EventArgs)
        Reload()
    End Sub

#End Region

End Class