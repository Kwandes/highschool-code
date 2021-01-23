<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class FormShowtime
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
        Me.components = New System.ComponentModel.Container()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(FormShowtime))
        Me.CmLength = New System.Windows.Forms.ComboBox()
        Me.BtnStart = New System.Windows.Forms.Button()
        Me.LblSummary = New System.Windows.Forms.Label()
        Me.BtnFolder = New System.Windows.Forms.Button()
        Me.LblPath = New System.Windows.Forms.Label()
        Me.LblName = New System.Windows.Forms.Label()
        Me.BtnBack = New System.Windows.Forms.Button()
        Me.CmDPU = New System.Windows.Forms.ComboBox()
        Me.CmTDD = New System.Windows.Forms.ComboBox()
        Me.CmFrequency = New System.Windows.Forms.ComboBox()
        Me.Tip = New System.Windows.Forms.ToolTip(Me.components)
        Me.SuspendLayout()
        '
        'CmLength
        '
        Me.CmLength.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.CmLength.FormattingEnabled = True
        Me.CmLength.Items.AddRange(New Object() {"000m", "025m", "050m", "075m", "100m", "150m", "200m", "250m", "300m", "350m", "400m", "450m", "500m", "525m"})
        Me.CmLength.Location = New System.Drawing.Point(17, 147)
        Me.CmLength.Name = "CmLength"
        Me.CmLength.Size = New System.Drawing.Size(140, 24)
        Me.CmLength.TabIndex = 28
        Me.CmLength.Text = "Choose Length"
        Me.Tip.SetToolTip(Me.CmLength, "Choose Loop Length of the test")
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
        Me.BtnStart.TabIndex = 27
        Me.BtnStart.Text = "START"
        Me.Tip.SetToolTip(Me.BtnStart, "Opens up excel template with test results displayed in charts")
        Me.BtnStart.UseVisualStyleBackColor = False
        '
        'LblSummary
        '
        Me.LblSummary.AutoSize = True
        Me.LblSummary.BackColor = System.Drawing.Color.Transparent
        Me.LblSummary.Font = New System.Drawing.Font("Tahoma", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblSummary.Location = New System.Drawing.Point(179, 133)
        Me.LblSummary.Name = "LblSummary"
        Me.LblSummary.Size = New System.Drawing.Size(243, 114)
        Me.LblSummary.TabIndex = 26
        Me.LblSummary.Text = "Summary:" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "DPU: none" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "Frequency: none" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "Length: none" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "TDD: none" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "Results for chosen" &
    " settings: none"
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
        Me.BtnFolder.TabIndex = 24
        Me.BtnFolder.Text = "Choose Folder"
        Me.Tip.SetToolTip(Me.BtnFolder, "Choose Folder with Test results")
        Me.BtnFolder.UseVisualStyleBackColor = False
        '
        'LblPath
        '
        Me.LblPath.BackColor = System.Drawing.Color.Transparent
        Me.LblPath.Font = New System.Drawing.Font("Tahoma", 8.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblPath.Location = New System.Drawing.Point(163, 49)
        Me.LblPath.Name = "LblPath"
        Me.LblPath.Size = New System.Drawing.Size(350, 74)
        Me.LblPath.TabIndex = 23
        Me.LblPath.Text = "Path: \"
        '
        'LblName
        '
        Me.LblName.AutoSize = True
        Me.LblName.BackColor = System.Drawing.Color.Transparent
        Me.LblName.Font = New System.Drawing.Font("Tahoma", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblName.Location = New System.Drawing.Point(12, 9)
        Me.LblName.Name = "LblName"
        Me.LblName.Size = New System.Drawing.Size(167, 25)
        Me.LblName.TabIndex = 22
        Me.LblName.Text = "ShowTime Menu"
        '
        'BtnBack
        '
        Me.BtnBack.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnBack.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnBack.Font = New System.Drawing.Font("Tahoma", 12.0!, CType((System.Drawing.FontStyle.Bold Or System.Drawing.FontStyle.Italic), System.Drawing.FontStyle), System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnBack.Location = New System.Drawing.Point(239, 9)
        Me.BtnBack.Name = "BtnBack"
        Me.BtnBack.Size = New System.Drawing.Size(224, 32)
        Me.BtnBack.TabIndex = 21
        Me.BtnBack.Text = "Back to Main Menu"
        Me.BtnBack.UseVisualStyleBackColor = True
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
        Me.CmDPU.TabIndex = 29
        Me.CmDPU.Text = "Choose DPU"
        Me.Tip.SetToolTip(Me.CmDPU, "Choose DPU used in the test")
        '
        'CmTDD
        '
        Me.CmTDD.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.CmTDD.FormattingEnabled = True
        Me.CmTDD.Items.AddRange(New Object() {"18", "28", "29", "32"})
        Me.CmTDD.Location = New System.Drawing.Point(17, 177)
        Me.CmTDD.Name = "CmTDD"
        Me.CmTDD.Size = New System.Drawing.Size(140, 24)
        Me.CmTDD.TabIndex = 30
        Me.CmTDD.Text = "Choose TDD"
        Me.Tip.SetToolTip(Me.CmTDD, "Choose TDD of the test" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "For example: TDD of 508G_MD18_XYZ is 18")
        '
        'CmFrequency
        '
        Me.CmFrequency.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.CmFrequency.FormattingEnabled = True
        Me.CmFrequency.Items.AddRange(New Object() {"106 Mhz", "212 Mhz"})
        Me.CmFrequency.Location = New System.Drawing.Point(17, 117)
        Me.CmFrequency.MaxDropDownItems = 3
        Me.CmFrequency.Name = "CmFrequency"
        Me.CmFrequency.Size = New System.Drawing.Size(140, 24)
        Me.CmFrequency.TabIndex = 31
        Me.CmFrequency.Text = "Choose Frequency"
        Me.Tip.SetToolTip(Me.CmFrequency, "Choose the Frequency of the test" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "2047 - 106Mhz" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "4095 - 212Mhz")
        '
        'FormShowtime
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackgroundImage = Global.TestResults.My.Resources.Resources.Background
        Me.ClientSize = New System.Drawing.Size(525, 350)
        Me.Controls.Add(Me.CmFrequency)
        Me.Controls.Add(Me.CmTDD)
        Me.Controls.Add(Me.CmDPU)
        Me.Controls.Add(Me.CmLength)
        Me.Controls.Add(Me.BtnStart)
        Me.Controls.Add(Me.LblSummary)
        Me.Controls.Add(Me.BtnFolder)
        Me.Controls.Add(Me.LblPath)
        Me.Controls.Add(Me.LblName)
        Me.Controls.Add(Me.BtnBack)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None
        Me.Icon = CType(resources.GetObject("$this.Icon"), System.Drawing.Icon)
        Me.Name = "FormShowtime"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "FormShowtime"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents CmLength As ComboBox
    Friend WithEvents BtnStart As Button
    Friend WithEvents LblSummary As Label
    Friend WithEvents BtnFolder As Button
    Friend WithEvents LblPath As Label
    Friend WithEvents LblName As Label
    Friend WithEvents BtnBack As Button
    Friend WithEvents CmDPU As ComboBox
    Friend WithEvents CmTDD As ComboBox
    Friend WithEvents CmFrequency As ComboBox
    Friend WithEvents Tip As ToolTip
End Class
