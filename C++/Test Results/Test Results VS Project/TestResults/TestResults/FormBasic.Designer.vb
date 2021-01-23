<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class FormBasic
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()>
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
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        Me.components = New System.ComponentModel.Container()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(FormBasic))
        Me.BtnStart = New System.Windows.Forms.Button()
        Me.LblSummary = New System.Windows.Forms.Label()
        Me.ChFM = New System.Windows.Forms.CheckBox()
        Me.BtnFolder508 = New System.Windows.Forms.Button()
        Me.LblPath508 = New System.Windows.Forms.Label()
        Me.LblName = New System.Windows.Forms.Label()
        Me.BtnBack = New System.Windows.Forms.Button()
        Me.CmTones = New System.Windows.Forms.ComboBox()
        Me.Tip = New System.Windows.Forms.ToolTip(Me.components)
        Me.BtnFolder516 = New System.Windows.Forms.Button()
        Me.LblPath516 = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'BtnStart
        '
        Me.BtnStart.BackColor = System.Drawing.Color.Transparent
        Me.BtnStart.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnStart.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnStart.Font = New System.Drawing.Font("Tahoma", 12.0!, CType((System.Drawing.FontStyle.Bold Or System.Drawing.FontStyle.Italic), System.Drawing.FontStyle), System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnStart.Location = New System.Drawing.Point(68, 282)
        Me.BtnStart.Name = "BtnStart"
        Me.BtnStart.Size = New System.Drawing.Size(354, 56)
        Me.BtnStart.TabIndex = 15
        Me.BtnStart.Text = "START"
        Me.Tip.SetToolTip(Me.BtnStart, "Opens up excel template with test results displayed in charts")
        Me.BtnStart.UseVisualStyleBackColor = False
        '
        'LblSummary
        '
        Me.LblSummary.AutoSize = True
        Me.LblSummary.BackColor = System.Drawing.Color.Transparent
        Me.LblSummary.Font = New System.Drawing.Font("Tahoma", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblSummary.Location = New System.Drawing.Point(165, 160)
        Me.LblSummary.Name = "LblSummary"
        Me.LblSummary.Size = New System.Drawing.Size(243, 114)
        Me.LblSummary.TabIndex = 14
        Me.LblSummary.Text = "Summary:" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "DPU: none" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "FM protection: off" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "StartTone: none" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "StopTone: none" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "Results" &
    " for chosen settings: none"
        '
        'ChFM
        '
        Me.ChFM.AutoSize = True
        Me.ChFM.BackColor = System.Drawing.Color.Transparent
        Me.ChFM.Cursor = System.Windows.Forms.Cursors.Hand
        Me.ChFM.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.ChFM.Location = New System.Drawing.Point(17, 160)
        Me.ChFM.Name = "ChFM"
        Me.ChFM.Size = New System.Drawing.Size(105, 20)
        Me.ChFM.TabIndex = 13
        Me.ChFM.Text = "FM Protection"
        Me.Tip.SetToolTip(Me.ChFM, "FM Protection - either On or OFF")
        Me.ChFM.UseVisualStyleBackColor = False
        '
        'BtnFolder508
        '
        Me.BtnFolder508.BackColor = System.Drawing.Color.Transparent
        Me.BtnFolder508.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnFolder508.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnFolder508.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnFolder508.Location = New System.Drawing.Point(17, 52)
        Me.BtnFolder508.Name = "BtnFolder508"
        Me.BtnFolder508.Size = New System.Drawing.Size(139, 48)
        Me.BtnFolder508.TabIndex = 11
        Me.BtnFolder508.Text = "Choose Results Folder for DPU 508G"
        Me.Tip.SetToolTip(Me.BtnFolder508, "Choose Folder with Test results")
        Me.BtnFolder508.UseVisualStyleBackColor = False
        '
        'LblPath508
        '
        Me.LblPath508.BackColor = System.Drawing.Color.Transparent
        Me.LblPath508.Font = New System.Drawing.Font("Tahoma", 8.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblPath508.Location = New System.Drawing.Point(166, 52)
        Me.LblPath508.Name = "LblPath508"
        Me.LblPath508.Size = New System.Drawing.Size(347, 48)
        Me.LblPath508.TabIndex = 10
        Me.LblPath508.Text = "Path: \"
        '
        'LblName
        '
        Me.LblName.AutoSize = True
        Me.LblName.BackColor = System.Drawing.Color.Transparent
        Me.LblName.Font = New System.Drawing.Font("Tahoma", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblName.Location = New System.Drawing.Point(12, 12)
        Me.LblName.Name = "LblName"
        Me.LblName.Size = New System.Drawing.Size(231, 25)
        Me.LblName.TabIndex = 9
        Me.LblName.Text = "Rate Reach Basic Menu"
        '
        'BtnBack
        '
        Me.BtnBack.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnBack.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnBack.Font = New System.Drawing.Font("Tahoma", 12.0!, CType((System.Drawing.FontStyle.Bold Or System.Drawing.FontStyle.Italic), System.Drawing.FontStyle), System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnBack.Location = New System.Drawing.Point(249, 12)
        Me.BtnBack.Name = "BtnBack"
        Me.BtnBack.Size = New System.Drawing.Size(224, 32)
        Me.BtnBack.TabIndex = 8
        Me.BtnBack.Text = "Back to Main Menu"
        Me.BtnBack.UseVisualStyleBackColor = True
        '
        'CmTones
        '
        Me.CmTones.FormattingEnabled = True
        Me.CmTones.Items.AddRange(New Object() {"0043x2047", "0043x4095", "0207x2047", "0207x4095", "0367x2047", "0367x4095", "0407x2047", "0407x4095", "0443x2047", "0443x4095", "0667x2047", "0677x4095", "0773x2047", "0773x4095"})
        Me.CmTones.Location = New System.Drawing.Point(17, 186)
        Me.CmTones.Name = "CmTones"
        Me.CmTones.Size = New System.Drawing.Size(139, 21)
        Me.CmTones.TabIndex = 17
        Me.CmTones.Text = "Choose Tones set"
        Me.Tip.SetToolTip(Me.CmTones, "Choose StarTone and StopTone combo of the test" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "Example: ...MDS18_0043_2047_... h" &
        "as StopTone 0043 and StarTone 2047")
        '
        'BtnFolder516
        '
        Me.BtnFolder516.BackColor = System.Drawing.Color.Transparent
        Me.BtnFolder516.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnFolder516.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnFolder516.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnFolder516.Location = New System.Drawing.Point(17, 106)
        Me.BtnFolder516.Name = "BtnFolder516"
        Me.BtnFolder516.Size = New System.Drawing.Size(139, 48)
        Me.BtnFolder516.TabIndex = 19
        Me.BtnFolder516.Text = "Choose Results Folder for DPU 516G"
        Me.Tip.SetToolTip(Me.BtnFolder516, "Choose Folder with Test results")
        Me.BtnFolder516.UseVisualStyleBackColor = False
        '
        'LblPath516
        '
        Me.LblPath516.BackColor = System.Drawing.Color.Transparent
        Me.LblPath516.Font = New System.Drawing.Font("Tahoma", 8.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblPath516.Location = New System.Drawing.Point(166, 106)
        Me.LblPath516.Name = "LblPath516"
        Me.LblPath516.Size = New System.Drawing.Size(347, 48)
        Me.LblPath516.TabIndex = 18
        Me.LblPath516.Text = "Path: \"
        '
        'FormBasic
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackgroundImage = Global.TestResults.My.Resources.Resources.Background
        Me.ClientSize = New System.Drawing.Size(525, 350)
        Me.Controls.Add(Me.BtnFolder516)
        Me.Controls.Add(Me.LblPath516)
        Me.Controls.Add(Me.CmTones)
        Me.Controls.Add(Me.BtnStart)
        Me.Controls.Add(Me.LblSummary)
        Me.Controls.Add(Me.ChFM)
        Me.Controls.Add(Me.BtnFolder508)
        Me.Controls.Add(Me.LblPath508)
        Me.Controls.Add(Me.LblName)
        Me.Controls.Add(Me.BtnBack)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None
        Me.Icon = CType(resources.GetObject("$this.Icon"), System.Drawing.Icon)
        Me.Name = "FormBasic"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "FormBasic"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents BtnStart As Button
    Friend WithEvents LblSummary As Label
    Friend WithEvents ChFM As CheckBox
    Friend WithEvents BtnFolder508 As Button
    Friend WithEvents LblPath508 As Label
    Friend WithEvents LblName As Label
    Friend WithEvents BtnBack As Button
    Friend WithEvents CmTones As ComboBox
    Friend WithEvents Tip As ToolTip
    Friend WithEvents BtnFolder516 As Button
    Friend WithEvents LblPath516 As Label
End Class
