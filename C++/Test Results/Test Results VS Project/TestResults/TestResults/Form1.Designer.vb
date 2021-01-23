<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class FormMain
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(FormMain))
        Me.LblMainTop = New System.Windows.Forms.Label()
        Me.LblATTDesc = New System.Windows.Forms.Label()
        Me.LblBasicDesc = New System.Windows.Forms.Label()
        Me.LblShowDesc = New System.Windows.Forms.Label()
        Me.BtnShowTemp = New System.Windows.Forms.Button()
        Me.BtnCancel = New System.Windows.Forms.Button()
        Me.BtnATTTemp = New System.Windows.Forms.Button()
        Me.BtnBasicTemp = New System.Windows.Forms.Button()
        Me.LblCoaxDesc = New System.Windows.Forms.Label()
        Me.BtnCoaxTemp = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'LblMainTop
        '
        Me.LblMainTop.AutoSize = True
        Me.LblMainTop.BackColor = System.Drawing.Color.Transparent
        Me.LblMainTop.Font = New System.Drawing.Font("Tahoma", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblMainTop.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.LblMainTop.Location = New System.Drawing.Point(12, 9)
        Me.LblMainTop.Name = "LblMainTop"
        Me.LblMainTop.Size = New System.Drawing.Size(423, 50)
        Me.LblMainTop.TabIndex = 0
        Me.LblMainTop.Text = "Welcome User" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "What result template would you like to see?"
        '
        'LblATTDesc
        '
        Me.LblATTDesc.BackColor = System.Drawing.Color.Transparent
        Me.LblATTDesc.Font = New System.Drawing.Font("Tahoma", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblATTDesc.Location = New System.Drawing.Point(128, 74)
        Me.LblATTDesc.Name = "LblATTDesc"
        Me.LblATTDesc.Size = New System.Drawing.Size(372, 45)
        Me.LblATTDesc.TabIndex = 2
        Me.LblATTDesc.Text = "This template shows rate reach ATT."
        '
        'LblBasicDesc
        '
        Me.LblBasicDesc.BackColor = System.Drawing.Color.Transparent
        Me.LblBasicDesc.Font = New System.Drawing.Font("Tahoma", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblBasicDesc.Location = New System.Drawing.Point(128, 125)
        Me.LblBasicDesc.Name = "LblBasicDesc"
        Me.LblBasicDesc.Size = New System.Drawing.Size(379, 45)
        Me.LblBasicDesc.TabIndex = 4
        Me.LblBasicDesc.Text = "This template shows rate reach Basic."
        '
        'LblShowDesc
        '
        Me.LblShowDesc.BackColor = System.Drawing.Color.Transparent
        Me.LblShowDesc.Font = New System.Drawing.Font("Tahoma", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblShowDesc.Location = New System.Drawing.Point(128, 176)
        Me.LblShowDesc.Name = "LblShowDesc"
        Me.LblShowDesc.Size = New System.Drawing.Size(379, 45)
        Me.LblShowDesc.TabIndex = 6
        Me.LblShowDesc.Text = "This template shows Showtime."
        '
        'BtnShowTemp
        '
        Me.BtnShowTemp.BackColor = System.Drawing.Color.Transparent
        Me.BtnShowTemp.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnShowTemp.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnShowTemp.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnShowTemp.Location = New System.Drawing.Point(12, 176)
        Me.BtnShowTemp.Name = "BtnShowTemp"
        Me.BtnShowTemp.Size = New System.Drawing.Size(110, 45)
        Me.BtnShowTemp.TabIndex = 4
        Me.BtnShowTemp.Text = "ShowTime"
        Me.BtnShowTemp.UseVisualStyleBackColor = False
        '
        'BtnCancel
        '
        Me.BtnCancel.BackColor = System.Drawing.Color.Transparent
        Me.BtnCancel.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnCancel.Font = New System.Drawing.Font("Tahoma", 15.75!, CType((System.Drawing.FontStyle.Bold Or System.Drawing.FontStyle.Italic), System.Drawing.FontStyle), System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnCancel.Location = New System.Drawing.Point(26, 279)
        Me.BtnCancel.Name = "BtnCancel"
        Me.BtnCancel.Size = New System.Drawing.Size(481, 59)
        Me.BtnCancel.TabIndex = 1
        Me.BtnCancel.Text = "Close"
        Me.BtnCancel.UseVisualStyleBackColor = False
        '
        'BtnATTTemp
        '
        Me.BtnATTTemp.BackColor = System.Drawing.Color.Transparent
        Me.BtnATTTemp.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnATTTemp.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnATTTemp.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnATTTemp.Location = New System.Drawing.Point(12, 74)
        Me.BtnATTTemp.Name = "BtnATTTemp"
        Me.BtnATTTemp.Size = New System.Drawing.Size(110, 45)
        Me.BtnATTTemp.TabIndex = 2
        Me.BtnATTTemp.Text = "Rate Reach ATT"
        Me.BtnATTTemp.UseVisualStyleBackColor = False
        '
        'BtnBasicTemp
        '
        Me.BtnBasicTemp.BackColor = System.Drawing.Color.Transparent
        Me.BtnBasicTemp.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnBasicTemp.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnBasicTemp.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnBasicTemp.Location = New System.Drawing.Point(12, 125)
        Me.BtnBasicTemp.Name = "BtnBasicTemp"
        Me.BtnBasicTemp.Size = New System.Drawing.Size(110, 45)
        Me.BtnBasicTemp.TabIndex = 3
        Me.BtnBasicTemp.Text = "Rate Reach Basic"
        Me.BtnBasicTemp.UseVisualStyleBackColor = False
        '
        'LblCoaxDesc
        '
        Me.LblCoaxDesc.BackColor = System.Drawing.Color.Transparent
        Me.LblCoaxDesc.Font = New System.Drawing.Font("Tahoma", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblCoaxDesc.Location = New System.Drawing.Point(128, 227)
        Me.LblCoaxDesc.Name = "LblCoaxDesc"
        Me.LblCoaxDesc.Size = New System.Drawing.Size(379, 45)
        Me.LblCoaxDesc.TabIndex = 8
        Me.LblCoaxDesc.Text = "This template shows Rate Reach Coax"
        '
        'BtnCoaxTemp
        '
        Me.BtnCoaxTemp.BackColor = System.Drawing.Color.Transparent
        Me.BtnCoaxTemp.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnCoaxTemp.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnCoaxTemp.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnCoaxTemp.Location = New System.Drawing.Point(12, 227)
        Me.BtnCoaxTemp.Name = "BtnCoaxTemp"
        Me.BtnCoaxTemp.Size = New System.Drawing.Size(110, 45)
        Me.BtnCoaxTemp.TabIndex = 7
        Me.BtnCoaxTemp.Text = "Rate reach Coax"
        Me.BtnCoaxTemp.UseVisualStyleBackColor = False
        '
        'FormMain
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackgroundImage = Global.TestResults.My.Resources.Resources.Background
        Me.ClientSize = New System.Drawing.Size(525, 350)
        Me.Controls.Add(Me.LblCoaxDesc)
        Me.Controls.Add(Me.BtnCoaxTemp)
        Me.Controls.Add(Me.BtnBasicTemp)
        Me.Controls.Add(Me.BtnATTTemp)
        Me.Controls.Add(Me.BtnCancel)
        Me.Controls.Add(Me.LblShowDesc)
        Me.Controls.Add(Me.BtnShowTemp)
        Me.Controls.Add(Me.LblBasicDesc)
        Me.Controls.Add(Me.LblATTDesc)
        Me.Controls.Add(Me.LblMainTop)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None
        Me.Icon = CType(resources.GetObject("$this.Icon"), System.Drawing.Icon)
        Me.Name = "FormMain"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Main Menu"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents LblMainTop As Label
    Friend WithEvents LblATTDesc As Label
    Friend WithEvents LblBasicDesc As Label
    Friend WithEvents LblShowDesc As Label
    Friend WithEvents BtnShowTemp As Button
    Friend WithEvents BtnCancel As Button
    Friend WithEvents BtnATTTemp As Button
    Friend WithEvents BtnBasicTemp As Button
    Friend WithEvents LblCoaxDesc As Label
    Friend WithEvents BtnCoaxTemp As Button
End Class
