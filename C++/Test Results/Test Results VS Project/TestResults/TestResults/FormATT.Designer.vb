<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class FormATT
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
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(FormATT))
        Me.BtnBack = New System.Windows.Forms.Button()
        Me.LblName = New System.Windows.Forms.Label()
        Me.LblPath = New System.Windows.Forms.Label()
        Me.BtnFolder = New System.Windows.Forms.Button()
        Me.CmDPU = New System.Windows.Forms.ComboBox()
        Me.ChFM = New System.Windows.Forms.CheckBox()
        Me.LblSummary = New System.Windows.Forms.Label()
        Me.BtnStart = New System.Windows.Forms.Button()
        Me.FolderBrowserATT = New System.Windows.Forms.FolderBrowserDialog()
        Me.Tip = New System.Windows.Forms.ToolTip(Me.components)
        Me.SuspendLayout()
        '
        'BtnBack
        '
        Me.BtnBack.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnBack.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnBack.Font = New System.Drawing.Font("Tahoma", 12.0!, CType((System.Drawing.FontStyle.Bold Or System.Drawing.FontStyle.Italic), System.Drawing.FontStyle), System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnBack.Location = New System.Drawing.Point(238, 12)
        Me.BtnBack.Name = "BtnBack"
        Me.BtnBack.Size = New System.Drawing.Size(224, 32)
        Me.BtnBack.TabIndex = 0
        Me.BtnBack.Text = "Back to Main Menu"
        Me.BtnBack.UseVisualStyleBackColor = True
        '
        'LblName
        '
        Me.LblName.AutoSize = True
        Me.LblName.BackColor = System.Drawing.Color.Transparent
        Me.LblName.Font = New System.Drawing.Font("Tahoma", 15.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblName.Location = New System.Drawing.Point(12, 12)
        Me.LblName.Name = "LblName"
        Me.LblName.Size = New System.Drawing.Size(220, 25)
        Me.LblName.TabIndex = 1
        Me.LblName.Text = "Rate Reach ATT Menu"
        '
        'LblPath
        '
        Me.LblPath.BackColor = System.Drawing.Color.Transparent
        Me.LblPath.Font = New System.Drawing.Font("Tahoma", 8.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblPath.Location = New System.Drawing.Point(148, 62)
        Me.LblPath.Name = "LblPath"
        Me.LblPath.Size = New System.Drawing.Size(365, 74)
        Me.LblPath.TabIndex = 2
        Me.LblPath.Text = "Path: \"
        '
        'BtnFolder
        '
        Me.BtnFolder.BackColor = System.Drawing.Color.Transparent
        Me.BtnFolder.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnFolder.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnFolder.Font = New System.Drawing.Font("Tahoma", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnFolder.Location = New System.Drawing.Point(17, 62)
        Me.BtnFolder.Name = "BtnFolder"
        Me.BtnFolder.Size = New System.Drawing.Size(125, 32)
        Me.BtnFolder.TabIndex = 3
        Me.BtnFolder.Text = "Choose Folder"
        Me.Tip.SetToolTip(Me.BtnFolder, "Choose Folder with Test results")
        Me.BtnFolder.UseVisualStyleBackColor = False
        '
        'CmDPU
        '
        Me.CmDPU.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.CmDPU.FormattingEnabled = True
        Me.CmDPU.Items.AddRange(New Object() {"DPU 504VG", "DPU 508G", "DPU 516G"})
        Me.CmDPU.Location = New System.Drawing.Point(17, 100)
        Me.CmDPU.MaxDropDownItems = 3
        Me.CmDPU.Name = "CmDPU"
        Me.CmDPU.Size = New System.Drawing.Size(125, 24)
        Me.CmDPU.TabIndex = 4
        Me.CmDPU.Text = "Choose DPU"
        Me.Tip.SetToolTip(Me.CmDPU, "Choose DPU used in the test")
        '
        'ChFM
        '
        Me.ChFM.AutoSize = True
        Me.ChFM.BackColor = System.Drawing.Color.Transparent
        Me.ChFM.Cursor = System.Windows.Forms.Cursors.Hand
        Me.ChFM.Font = New System.Drawing.Font("Tahoma", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.ChFM.Location = New System.Drawing.Point(17, 130)
        Me.ChFM.Name = "ChFM"
        Me.ChFM.Size = New System.Drawing.Size(105, 20)
        Me.ChFM.TabIndex = 5
        Me.ChFM.Text = "FM Protection"
        Me.Tip.SetToolTip(Me.ChFM, "FM Protection - either On or OFF")
        Me.ChFM.UseVisualStyleBackColor = False
        '
        'LblSummary
        '
        Me.LblSummary.AutoSize = True
        Me.LblSummary.BackColor = System.Drawing.Color.Transparent
        Me.LblSummary.Font = New System.Drawing.Font("Tahoma", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LblSummary.Location = New System.Drawing.Point(13, 153)
        Me.LblSummary.Name = "LblSummary"
        Me.LblSummary.Size = New System.Drawing.Size(243, 76)
        Me.LblSummary.TabIndex = 6
        Me.LblSummary.Text = "Summary:" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "DPU: none" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "FM protection: off" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "Results for chosen settings: none"
        '
        'BtnStart
        '
        Me.BtnStart.BackColor = System.Drawing.Color.Transparent
        Me.BtnStart.Cursor = System.Windows.Forms.Cursors.Hand
        Me.BtnStart.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.BtnStart.Font = New System.Drawing.Font("Tahoma", 12.0!, CType((System.Drawing.FontStyle.Bold Or System.Drawing.FontStyle.Italic), System.Drawing.FontStyle), System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnStart.Location = New System.Drawing.Point(68, 274)
        Me.BtnStart.Name = "BtnStart"
        Me.BtnStart.Size = New System.Drawing.Size(354, 64)
        Me.BtnStart.TabIndex = 7
        Me.BtnStart.Text = "START"
        Me.Tip.SetToolTip(Me.BtnStart, "Opens up excel template with test results displayed in charts" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "and tables")
        Me.BtnStart.UseVisualStyleBackColor = False
        '
        'FolderBrowserATT
        '
        Me.FolderBrowserATT.Description = "Choose Folder with the results"
        Me.FolderBrowserATT.ShowNewFolderButton = False
        '
        'FormATT
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackgroundImage = Global.TestResults.My.Resources.Resources.Background
        Me.ClientSize = New System.Drawing.Size(525, 350)
        Me.Controls.Add(Me.BtnStart)
        Me.Controls.Add(Me.LblSummary)
        Me.Controls.Add(Me.ChFM)
        Me.Controls.Add(Me.CmDPU)
        Me.Controls.Add(Me.BtnFolder)
        Me.Controls.Add(Me.LblPath)
        Me.Controls.Add(Me.LblName)
        Me.Controls.Add(Me.BtnBack)
        Me.Font = New System.Drawing.Font("Tahoma", 8.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None
        Me.Icon = CType(resources.GetObject("$this.Icon"), System.Drawing.Icon)
        Me.Name = "FormATT"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "FormATT"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents BtnBack As Button
    Friend WithEvents LblName As Label
    Friend WithEvents LblPath As Label
    Friend WithEvents BtnFolder As Button
    Friend WithEvents CmDPU As ComboBox
    Friend WithEvents ChFM As CheckBox
    Friend WithEvents LblSummary As Label
    Friend WithEvents BtnStart As Button
    Friend WithEvents FolderBrowserATT As FolderBrowserDialog
    Friend WithEvents Tip As ToolTip
End Class
