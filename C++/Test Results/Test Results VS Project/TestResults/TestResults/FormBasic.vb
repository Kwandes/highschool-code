'Form with settings for template Reach Rate Basic
'All Functions except DPU explained in FormShowTime

Imports System.IO
Imports Excel = Microsoft.Office.Interop.Excel

Public Class FormBasic
    Public PathDPU508 As String
    Public PathDPU516 As String
    Public FM As String
    Public StopTone As String
    Public StarTone As String

    Private Sub BtnBack_Click(sender As Object, e As EventArgs) Handles BtnBack.Click
        Me.Close()
        FormMain.Show()
        FormMain.Activate()
    End Sub

    Private Sub BtnStart_Click(sender As Object, e As EventArgs) Handles BtnStart.Click
        If (PathDPU508 = "") And (PathDPU516 = "") Or (StarTone = "none") Then
            MsgBox("Incomplete Settings!!", MsgBoxStyle.Exclamation, "Incomplete Settings!!")
        ElseIf CalculateResults(PathDPU508, "508G") = 0 And CalculateResults(PathDPU516, "516G") = 0 Then
            MsgBox("0 Results for chosen settings. No data will be displayed on the charts" &
            vbCrLf & "Change settings in order to show anything on the chart", MsgBoxStyle.Exclamation, "No Results!!")
        Else
            FormMain.Close()
            Dim ResourcePath As String = My.Application.Info.DirectoryPath &
                System.IO.Path.DirectorySeparatorChar & "Templates\Rate_Reach_Basic.xlsm"
            Dim objApp As Object
            Me.Hide()
            objApp = CreateObject("Excel.Application")
            objApp.WorkBooks.Open(ResourcePath)
            objApp.visible = True
            'These IFs check the combinations of used DPUs to ensure the variables passed to the template are correct
            If CalculateResults(PathDPU508, "508G") <> 0 Then
                If CalculateResults(PathDPU516, "516G") <> 0 Then
                    objApp.Run("STARTNET", PathDPU508, PathDPU516, FM, StarTone, StopTone)
                ElseIf CalculateResults(PathDPU516, "516G") = 0 Then
                    objApp.Run("STARTNET", PathDPU508, "", FM, StarTone, StopTone)
                End If
            ElseIf CalculateResults(PathDPU516, "516G") <> 0 Then
                objApp.Run("STARTNET", "", PathDPU516, FM, StarTone, StopTone)
            End If
            Me.Close()
            Application.Exit()
        End If
    End Sub

    Private Sub BtnFolder508_Click(sender As Object, e As EventArgs) Handles BtnFolder508.Click
        Dim FolderBrowser As New FolderBrowserDialog With {
        .Description = "Choose folder with test results for DPU 508G",
        .RootFolder = Environment.SpecialFolder.MyComputer,
        .ShowNewFolderButton = False
        }
        FolderBrowser.ShowDialog()
        If Windows.Forms.DialogResult.OK Then PathDPU508 = FolderBrowser.SelectedPath
        Me.LblPath508.Text = "Path: " & PathDPU508
        Reload()
    End Sub

    Private Sub BtnFolder516_Click(sender As Object, e As EventArgs) Handles BtnFolder516.Click
        Dim FolderBrowser As New FolderBrowserDialog With {
        .Description = "Choose folder with test results for DPU 516G",
        .RootFolder = Environment.SpecialFolder.MyComputer,
        .ShowNewFolderButton = False
        }
        FolderBrowser.ShowDialog()
        If Windows.Forms.DialogResult.OK Then PathDPU516 = FolderBrowser.SelectedPath
        Me.LblPath516.Text = "Path: " & PathDPU516
        Reload()
    End Sub

    Public Function CalculateResults(Path As String, DPU As String) As Integer
        Dim ResultsCounter As Integer = 0
        If Path <> "" Then
            Dim Name As String = DPU & "*"
            Dim objDirectory As String()
            objDirectory = Directory.GetDirectories(Path, Name)
            Dim dir As String
            For Each dir In objDirectory
                If dir.Contains(StarTone) And dir.Contains(StopTone) Then
                    If FM = "ON" Then
                        If dir.Contains("FM") Then ResultsCounter = ResultsCounter + 1
                    Else ResultsCounter = ResultsCounter + 1
                    End If
                End If
            Next dir
        End If
        Return ResultsCounter
    End Function

    Public Sub Reload()
#Region "FM check"
        Select Case Me.ChFM.Checked
            Case True
                FM = "ON"
            Case False
                FM = "OFF"
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
        "FM protection: " & FM & vbCrLf &
        "StarTone: " & StarTone & vbCrLf &
        "StopTone: " & StopTone & vbCrLf &
        "Results for chosen settings for DPU 508: " & CalculateResults(PathDPU508, "508G") & vbCrLf &
        "Results for chosen settings for DPU 516: " & CalculateResults(PathDPU516, "516G")

#End Region
    End Sub

#Region "Code for moving the form"
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
    Private Sub ChFM_CheckedChanged(sender As Object, e As EventArgs) Handles ChFM.CheckedChanged
        Reload()
    End Sub

    Private Sub CmTones_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CmTones.SelectedIndexChanged
        Reload()
    End Sub
#End Region

End Class