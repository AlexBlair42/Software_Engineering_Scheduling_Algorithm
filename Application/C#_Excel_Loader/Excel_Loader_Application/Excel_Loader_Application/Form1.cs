using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using ExcelDataReader;

namespace Excel_Loader_Application
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        DataSet result;

        private void button1_Click(object sender, EventArgs e)
        {
            using (OpenFileDialog ofd = new OpenFileDialog() {Filter = "TestExcel1|*.xlsx", ValidateNames = true})
            {
                if (ofd.ShowDialog() == DialogResult.OK)
                {
                    FileStream fs = File.Open(ofd.FileName, FileMode.Open, FileAccess.Read);
                    IExcelDataReader reader= ExcelReaderFactory.CreateReader(fs);
                    var conf = new ExcelDataSetConfiguration
                    {
                        ConfigureDataTable = _ => new ExcelDataTableConfiguration
                        {
                            UseHeaderRow = true
                        }
                    };
                    result = reader.AsDataSet();
                    cboSheet.Items.Clear();
                    foreach (DataTable dt in result.Tables)
                    {
                        cboSheet.Items.Add(dt.TableName);
                        reader.Close();
                    }
                }
            }
        }

        private void cboSheet_SelectedIndexChanged(object sender, EventArgs e)
        {
            dataGridView1.DataSource = result.Tables[cboSheet.SelectedIndex];

        }
    }
}
