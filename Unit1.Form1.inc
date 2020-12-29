procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.button1 := new System.Windows.Forms.Button();
        self.checkedListBox1 := new System.Windows.Forms.CheckedListBox();
        self.button2 := new System.Windows.Forms.Button();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.button3 := new System.Windows.Forms.Button();
        self.button4 := new System.Windows.Forms.Button();
        self.toolTip1 := new System.Windows.Forms.ToolTip(self.components);
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.button6 := new System.Windows.Forms.Button();
        self.folderBrowserDialog1 := new System.Windows.Forms.FolderBrowserDialog();
        self.label2 := new System.Windows.Forms.Label();
        self.contextMenuStrip1 := new System.Windows.Forms.ContextMenuStrip(self.components);
        self.toolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.contextMenuStrip1.SuspendLayout();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.BackgroundImage := (System.Drawing.Image(resources.GetObject('button1.BackgroundImage')));
        self.button1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.None;
        self.button1.ForeColor := System.Drawing.SystemColors.ControlText;
        self.button1.Location := new System.Drawing.Point(425, 215);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(92, 35);
        self.button1.TabIndex := 0;
        self.button1.Text := 'Download';
        self.button1.TextAlign := System.Drawing.ContentAlignment.MiddleRight;
        self.toolTip1.SetToolTip(self.button1, 'Download Selected File!');
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // checkedListBox1
        // 
        self.checkedListBox1.FormattingEnabled := true;
        self.checkedListBox1.Location := new System.Drawing.Point(9, 81);
        self.checkedListBox1.Name := 'checkedListBox1';
        self.checkedListBox1.Size := new System.Drawing.Size(306, 169);
        self.checkedListBox1.TabIndex := 1;
        self.checkedListBox1.ThreeDCheckBoxes := true;
        self.toolTip1.SetToolTip(self.checkedListBox1, 'Here list of files on FTP server');
        self.checkedListBox1.SelectedIndexChanged += checkedListBox1_SelectedIndexChanged;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(327, 215);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(92, 35);
        self.button2.TabIndex := 2;
        self.button2.Text := 'Resume!';
        self.toolTip1.SetToolTip(self.button2, 'Resume downloading a file that is not fully downloaded');
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // pictureBox1
        // 
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(475, 12);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(42, 39);
        self.pictureBox1.TabIndex := 3;
        self.pictureBox1.TabStop := false;
        self.toolTip1.SetToolTip(self.pictureBox1, resources.GetString('pictureBox1.ToolTip'));
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(269, 6);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(75, 23);
        self.button3.TabIndex := 4;
        self.button3.Text := 'Connect';
        self.toolTip1.SetToolTip(self.button3, 'Connect to server');
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(350, 7);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(75, 23);
        self.button4.TabIndex := 5;
        self.button4.Text := 'Disconnect';
        self.toolTip1.SetToolTip(self.button4, 'Disconnect from server');
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // toolTip1
        // 
        self.toolTip1.AutoPopDelay := 5000;
        self.toolTip1.InitialDelay := 500;
        self.toolTip1.IsBalloon := true;
        self.toolTip1.ReshowDelay := 1;
        self.toolTip1.ToolTipIcon := System.Windows.Forms.ToolTipIcon.Info;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(118, 9);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(145, 20);
        self.textBox1.TabIndex := 6;
        self.textBox1.Text := 'ftp://speedtest.tele2.net';
        self.toolTip1.SetToolTip(self.textBox1, 'Address of FTP server');
        // 
        // textBox3
        // 
        self.textBox3.AutoCompleteMode := System.Windows.Forms.AutoCompleteMode.Suggest;
        self.textBox3.AutoCompleteSource := System.Windows.Forms.AutoCompleteSource.FileSystemDirectories;
        self.textBox3.Location := new System.Drawing.Point(180, 35);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(145, 20);
        self.textBox3.TabIndex := 10;
        self.toolTip1.SetToolTip(self.textBox3, 'Select a location to store the downloaded files');
        self.textBox3.TextChanged += textBox3_TextChanged;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Arial', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(0)));
        self.label1.Location := new System.Drawing.Point(12, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(100, 20);
        self.label1.TabIndex := 7;
        self.label1.Text := 'FTP Adress';
        self.label1.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // button6
        // 
        self.button6.Location := new System.Drawing.Point(327, 34);
        self.button6.Name := 'button6';
        self.button6.Size := new System.Drawing.Size(28, 20);
        self.button6.TabIndex := 11;
        self.button6.Text := '...';
        self.button6.UseVisualStyleBackColor := true;
        self.button6.Click += button6_Click;
        // 
        // folderBrowserDialog1
        // 
        self.folderBrowserDialog1.HelpRequest += folderBrowserDialog1_HelpRequest;
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Arial', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(0)));
        self.label2.Location := new System.Drawing.Point(3, 35);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(177, 23);
        self.label2.TabIndex := 12;
        self.label2.Text := 'Location for downloaded files';
        self.label2.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // contextMenuStrip1
        // 
        self.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem1));
        self.contextMenuStrip1.Name := 'contextMenuStrip1';
        self.contextMenuStrip1.RenderMode := System.Windows.Forms.ToolStripRenderMode.Professional;
        self.contextMenuStrip1.Size := new System.Drawing.Size(100, 26);
        // 
        // toolStripMenuItem1
        // 
        self.toolStripMenuItem1.Name := 'toolStripMenuItem1';
        self.toolStripMenuItem1.Size := new System.Drawing.Size(99, 22);
        self.toolStripMenuItem1.Text := 'Help';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(529, 262);
        self.ContextMenuStrip := self.contextMenuStrip1;
        self.Controls.Add(self.label2);
        self.Controls.Add(self.button6);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.button4);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.pictureBox1);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.checkedListBox1);
        self.Controls.Add(self.button1);
        self.HelpButton := true;
        self.Name := 'Form1';
        self.Text := 'FTP';
        self.Load += Form1_Load;
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.contextMenuStrip1.ResumeLayout(false);
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
