unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure checkedListBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure TopToolStripPanel_Click(sender: Object; e: EventArgs);
    procedure button5_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure folderBrowserDialog1_HelpRequest(sender: Object; e: EventArgs);
    procedure button6_Click(sender: Object; e: EventArgs);
    procedure textBox3_TextChanged(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    checkedListBox1: CheckedListBox;
    button2: Button;
    pictureBox1: PictureBox;
    button3: Button;
    button4: Button;
    toolTip1: ToolTip;
    components: System.ComponentModel.IContainer;
    textBox1: TextBox;
    label1: &Label;
    textBox3: TextBox;
    button6: Button;
    folderBrowserDialog1: FolderBrowserDialog;
    label2: &Label;
    contextMenuStrip1: System.Windows.Forms.ContextMenuStrip;
    toolStripMenuItem1: ToolStripMenuItem;
    button1: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

var
  ftp := KellermanSoftware.NetFtpLibrary.FTP.Create;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  button4.Enabled := false;
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  if not ftp.IsConnected then 
  begin
    MessageBox.Show('You are not connected! Connect first', 'Error', MessageBoxButtons.OK, MessageBoxIcon.Error);
    exit; 
  end
  else
  begin
    var items := checkedListBox1.CheckedItems.Item[0].ToString;
    if textBox3.Text = '' then 
    begin
      MessageBox.Show('You should select directory name before start downloading', 'Error', MessageBoxButtons.OK, MessageBoxIcon.Error);
      exit
    end
    else
      ftp.DownloadFileAsync(textBox3.Text + items, items);
    
  end;
end;

procedure Form1.checkedListBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.button3_Click(sender: Object; e: EventArgs);
begin
  button3.Enabled := false;
  button4.Enabled := true;
  ftp.HostAddress := textBox1.Text;
  ftp.UserName := 'anonymous';
  ftp.Connect;
  if ftp.IsConnected = true then pictureBox1.ImageLocation := 'C:\PABCWork.NET\Project2\green.ico';
  foreach var item: KellermanSoftware.NetFtpLibrary.FTPFileInfo in ftp.GetDirectoryListing do 
    checkedListBox1.Items.Add(item.FileName);
end;

procedure Form1.button4_Click(sender: Object; e: EventArgs);
begin
  button4.Enabled := false;
  button3.Enabled := true;
  ftp.Disconnect;
  if not ftp.Isconnected then pictureBox1.ImageLocation := 'C:\PABCWork.NET\Project2\red.ico';
end;

procedure Form1.TopToolStripPanel_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.button5_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  
  ftp.ResumeDownloadFileAsync(textBox3.Text + checkedListBox1.CheckedItems.Item[0].ToString, checkedListBox1.CheckedItems.Item[0].ToString);
end;

procedure Form1.folderBrowserDialog1_HelpRequest(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.button6_Click(sender: Object; e: EventArgs);
begin
  folderBrowserDialog1.ShowDialog;
  folderBrowserDialog1.ShowNewFolderButton := true; 
  textBox3.Text := FolderBrowserDialog1.SelectedPath;
end;

procedure Form1.textBox3_TextChanged(sender: Object; e: EventArgs);
begin
  
end;
end.
