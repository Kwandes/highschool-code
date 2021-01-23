<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class FormCoax
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
        Me.CmDPU = New System.Windows.Forms.ComboBox()
        Me.BtnStart = New System.Windows.Forms.Button()
        Me.LblSummary = New System.Windows.Forms.Label()
        Me.BtnFolder = New System.Windows.Forms.Button()
        Me.LblPath = New System.Windows.Forms.Label()
        Me.LblName = New System.Windows.Forms.Label()
        Me.BtnBack = New System.Windows.Forms.Button()
        Me.CmTones = New System.Windows.Forms.ComboBox()
        Me.SuspendLayout()
        '
        'CmDPU
        '
        Me.CmDPU.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.CmDPU.FormattingEnabled = True
        Me.CmDPU.Items.AddRange(New Object() {"DPU 504VG", "DPU 508G", "DPU 516G"})
        Me.CmDPU.Location = New System.Drawing.Point(17, 87)
        Me.CmDPU.MaxDropDownItems = 3
        Me.CmDPU.Name = "CmDPU"
        Me.CmDPU.Size = New System.Drawing.Size(140, 24)
        Me.CmDPU.TabIndex = 39
        Me.CmDPU.Text = "Choose DPU"
        '
        'BtnStart
        '
        Me.BtnStart.BackColor = System.Drawing.Color.Transparent
        Me.BtnStart.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnStart.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnStart.Font = New System.Drawing.Font("Tahoma", 12.0!, CType((System.Drawing.FontStyle.Bold Or System.Drawing.FontStyle.Italic), System.Drawing.FontStyle), System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnStart.Location = New System.Drawing.Point(68, 279)
        Me.BtnStart.Name = "BtnStart"
        Me.BtnStart.Size = New System.Drawing.Size(354, 56)
        Me.BtnStart.TabIndex = 37
        Me.BtnStart.Text = "START"
        Me.BtnStart.UseVisualStyleBackColor = False
        '
        'LblSummary
        '
        Me.LblSummary.AutoSize = True
        Me.LblSummary.BackColor = System.Drawing.Color.Transparent
        Me.LblSummary.Font = New System.Drawing.Font("Tahoma", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblSummary.Location = New System.Drawing.Point(14, 144)
        Me.LblSummary.Name = "LblSummary"
        Me.LblSummary.Size = New System.Drawing.Size(243, 95)
        Me.LblSummary.TabIndex = 36
        Me.LblSummary.Text = "Summary:" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "DPU: none" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "StarTone: none" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "StopTone: none" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "Results for chosen settings:" &
    " none"
        '
        'BtnFolder
        '
        Me.BtnFolder.BackColor = System.Drawing.Color.Transparent
        Me.BtnFolder.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnFolder.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnFolder.Font = New System.Drawing.Font("Tahoma", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnFolder.Location = New System.Drawing.Point(17, 49)
        Me.BtnFolder.Name = "BtnFolder"
        Me.BtnFolder.Size = New System.Drawing.Size(140, 32)
        Me.BtnFolder.TabIndex = 35
        Me.BtnFolder.Text = "Choose Folder"
        Me.BtnFolder.UseVisualStyleBackColor = False
        '
        'LblPath
        '
        Me.LblPath.BackColor = System.Drawing.Color.Transparent
        Me.LblPath.Font = New System.Drawing.Font("Tahoma", 8.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblPath.Location = New System.Drawing.Point(163, 49)
        Me.LblPath.Name = "LblPath"
        Me.LblPath.Size = New System.Drawing.Size(350, 74)
        Me.LblPath.TabIndex = 34
        Me.LblPath.Text = "Path: \"
        '
        'LblName
        '
        Me.LblName.AutoSize = True
        Me.LblName.BackColor = System.Drawing.Color.Transparent
        Me.LblName.Font = New System.Drawing.Font("Tahoma", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblName.Location = New System.Drawing.Point(12, 9)
        Me.LblName.Name = "LblName"
        Me.LblName.Size = New System.Drawing.Size(223, 25)
        Me.LblName.TabIndex = 33
        Me.LblName.Text = "Rate reach Coax Menu" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10)
        '
        'BtnBack
        '
        Me.BtnBack.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnBack.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnBack.Font = New System.Drawing.Font("Tahoma", 12.0!, CType((System.Drawing.FontStyle.Bold Or System.Drawing.FontStyle.Italic), System.Drawing.FontStyle), System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnBack.Location = New System.Drawing.Point(239, 9)
        Me.BtnBack.Name = "BtnBack"
        Me.BtnBack.Size = New System.Drawing.Size(224, 32)
        Me.BtnBack.TabIndex = 32
        Me.BtnBack.Text = "Back to Main Menu"
        Me.BtnBack.UseVisualStyleBackColor = True
        '
        'CmTones
        '
        Me.CmTones.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.CmTones.FormattingEnabled = True
        Me.CmTones.Items.AddRange(New Object() {"0043x2047", "0043x4095", "0207x2047", "0207x4095", "0367x2047", "0367x4095", "0407x2047", "0407x4095", "0443x2047", "0443x4095", "0667x2047", "0677x4095", "0773x2047", "0773x4095"})
        Me.CmTones.Location = New System.Drawing.Point(18, 117)
        Me.CmTones.Name = "CmTones"
        Me.CmTones.Size = New System.Drawing.Size(139, 24)
        Me.CmTones.TabIndex = 41
        Me.CmTones.Text = "Choose Tones set"
        '
        'FormCoax
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackgroundImage = Global.TestResults.My.Resources.Resources.Background
        Me.ClientSize = New System.Drawing.Size(525, 350)
        Me.Controls.Add(Me.CmTones)
        Me.Controls.Add(Me.CmDPU)
        Me.Controls.Add(Me.BtnStart)
        Me.Controls.Add(Me.LblSummary)
        Me.Controls.Add(Me.BtnFolder)
        Me.Controls.Add(Me.LblPath)
        Me.Controls.Add(Me.LblName)
        Me.Controls.Add(Me.BtnBack)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None
        Me.Name = "FormCoax"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "FormCoax"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents CmDPU As ComboBox
    Friend WithEvents BtnStart As Button
    Friend WithEvents LblSummary As Label
    Friend WithEvents BtnFolder As Button
    Friend WithEvents LblPath As Label
    Friend WithEvents LblName As Label
    Friend WithEvents BtnBack As Button
    Friend WithEvents CmTones As ComboBox
End Class
