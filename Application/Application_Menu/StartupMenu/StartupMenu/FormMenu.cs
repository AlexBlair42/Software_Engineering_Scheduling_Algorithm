using System;
using System.Windows.Forms;

namespace StartupMenu
{
    public partial class FormMenu : Form
    {
        public FormMenu()
        {
            InitializeComponent();
        }

        private void btnImport_Click(object sender, EventArgs e)
        {
            //opens the loader form
            Excel_Loader_Application.Form1 Import = new Excel_Loader_Application.Form1();
            Import.Show();
        }

        private void btnDirectory_Click(object sender, EventArgs e)
        {

        }

        private void btnMaster_Click(object sender, EventArgs e)
        {

        }
    }
}
