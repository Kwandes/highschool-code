'Main Menu where User chooses what template he wants to use
'FormShowtime,FormBasic and FormATT functions are explained in FormShowtime code as it is the 'richest'
'More detailed descriptions of diffrent templates need to be added

Public Class FormMain

    Private Sub BtnCancel_Click(sender As Object, e As EventArgs) Handles BtnCancel.Click
        Me.Close()
        Application.Exit()
    End Sub

    Private Sub BtnATTTemp_Click(sender As Object, e As EventArgs) Handles BtnATTTemp.Click
        Me.Hide()
        FormATT.Show()
    End Sub

    Private Sub BtnBasicTemp_Click(sender As Object, e As EventArgs) Handles BtnBasicTemp.Click
        Me.Hide()
        FormBasic.Show()
    End Sub

    Private Sub BtnShowTemp_Click(sender As Object, e As EventArgs) Handles BtnShowTemp.Click
        Me.Hide()
        FormShowtime.Show()
    End Sub

    Private Sub BtnCoaxTemp_Click(sender As Object, e As EventArgs) Handles BtnCoaxTemp.Click
        Me.Hide()
        FormCoax.Show()
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

End Class
