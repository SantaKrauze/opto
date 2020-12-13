#pragma once
#include <windows.h>
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::IO::Ports;
	//using namespace sdUSART1;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ dUBox;

	private: System::Windows::Forms::TextBox^ U2Box;

	private: System::Windows::Forms::TextBox^ U1Box;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ measureI;


	private: System::Windows::Forms::TextBox^ IBox;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ start;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;


	private:


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dUBox = (gcnew System::Windows::Forms::TextBox());
			this->U2Box = (gcnew System::Windows::Forms::TextBox());
			this->U1Box = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->measureI = (gcnew System::Windows::Forms::Button());
			this->IBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->start = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->dUBox);
			this->groupBox1->Controls->Add(this->U2Box);
			this->groupBox1->Controls->Add(this->U1Box);
			this->groupBox1->Location = System::Drawing::Point(480, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(239, 121);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Set U";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(133, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"dU";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(133, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"U2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(133, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"U1";
			// 
			// dUBox
			// 
			this->dUBox->Location = System::Drawing::Point(27, 71);
			this->dUBox->Name = L"dUBox";
			this->dUBox->Size = System::Drawing::Size(100, 20);
			this->dUBox->TabIndex = 2;
			// 
			// U2Box
			// 
			this->U2Box->Location = System::Drawing::Point(27, 45);
			this->U2Box->Name = L"U2Box";
			this->U2Box->Size = System::Drawing::Size(100, 20);
			this->U2Box->TabIndex = 1;
			// 
			// U1Box
			// 
			this->U1Box->Location = System::Drawing::Point(27, 19);
			this->U1Box->Name = L"U1Box";
			this->U1Box->Size = System::Drawing::Size(100, 20);
			this->U1Box->TabIndex = 0;
			this->U1Box->TextChanged += gcnew System::EventHandler(this, &Form1::U1Box_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->measureI);
			this->groupBox2->Controls->Add(this->IBox);
			this->groupBox2->Location = System::Drawing::Point(480, 190);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(239, 120);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Get I";
			// 
			// measureI
			// 
			this->measureI->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->measureI->Location = System::Drawing::Point(27, 69);
			this->measureI->Name = L"measureI";
			this->measureI->Size = System::Drawing::Size(75, 23);
			this->measureI->TabIndex = 1;
			this->measureI->Text = L"Measure";
			this->measureI->UseVisualStyleBackColor = true;
			this->measureI->Click += gcnew System::EventHandler(this, &Form1::getI_Click);
			// 
			// IBox
			// 
			this->IBox->Location = System::Drawing::Point(27, 31);
			this->IBox->Name = L"IBox";
			this->IBox->ReadOnly = true;
			this->IBox->Size = System::Drawing::Size(100, 20);
			this->IBox->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->chart1);
			this->groupBox3->Location = System::Drawing::Point(30, 36);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(426, 364);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Chart";
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			this->chart1->BorderlineColor = System::Drawing::Color::Transparent;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Location = System::Drawing::Point(6, 19);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(414, 339);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &Form1::chart1_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(480, 328);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(239, 23);
			this->progressBar1->TabIndex = 3;
			// 
			// start
			// 
			this->start->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->start->Location = System::Drawing::Point(480, 357);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(75, 23);
			this->start->TabIndex = 4;
			this->start->Text = L"Start";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &Form1::start_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::saveFileDialog1_FileOk);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->saveToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(764, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 431);
			this->Controls->Add(this->start);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Current-voltage characteristic";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	//nothing
}
private: System::Void getI_Click(System::Object^ sender, System::EventArgs^ e) {
	IBox->Text = Convert::ToString(getI());
}
private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();
	progressBar1->Value = Convert::ToInt32(U1Box->Text, 10);
	progressBar1->Maximum = Convert::ToInt32(U2Box->Text, 10);
	timer1->Enabled = true;
}
private: System::Void U1Box_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//nothing
}
public: SerialPort^ MetexPort = nullptr;
public: SerialPort^ AX3005Port = nullptr;
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	MetexPort = gcnew SerialPort("COM1", 1200, Parity::None, 7, StopBits::Two);
	MetexPort->Open();
	if (MetexPort->IsOpen) {
		MetexPort->DtrEnable = true;
		MetexPort->RtsEnable = false;
		MetexPort->ReadTimeout = 2000;
	}
	AX3005Port = gcnew SerialPort("COM2", 9600, Parity::None, 8, StopBits::One);
	AX3005Port->Open();
}
private: System::Void setU(int U) {
	AX3005Port->Write("VSET1:" + U.ToString() + ",0\\r\\n");
}
private: float getU() {
	AX3005Port->Write("VOUT1?\\r\\n");
	//get U
	return 0;
}
private: float getI() {
	array<unsigned char>^ buffer = gcnew array<unsigned char, 1> {'D'};
	MetexPort->Write(buffer, 0, buffer->GetLength(0));
	System::Threading::Thread::Sleep(500);
	array<unsigned char, 1>^ buf = gcnew array<unsigned char, 1>(14);
	MetexPort->Read(buf, 0, 14);
	if (buf[13] != 13) {
		return 0;
	}
	int sign = 1;
	if (buf[3] == '-') sign = -1;
	char str[6];
	for (int i = 0; i < 5; i++) {
		str[i] = buf[4 + i];
	}
	str[5] = '\0';
	String^ str_val = gcnew String(str);
	str_val = str_val->Replace(".", ",");
	double m = 1;
	if (buf[9] == 'M') m = 1e6;
	if (buf[9] == 'K') m = 1e3;
	if (buf[11] == 'm') m = 1e-3;
	if (buf[11] == 'u') m = 1e-6;
	return sign * Convert::ToSingle(str_val) * m;
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (progressBar1->Value < progressBar1->Maximum) {
		float arg = progressBar1->Value;
		setU(arg);
		chart1->Series["Series1"]->Points->AddXY(getU(), getI());
		progressBar1->Value += Convert::ToInt32(dUBox->Text, 10);
	}
}
private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Filter = "Text files (*.txt) | *.txt";
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamWriter^ pt = gcnew StreamWriter(saveFileDialog1->FileName, 0, System::Text::Encoding::Default);
		DataVisualization::Charting::DataPoint^ wPoint;
		for (int i = 1; i < chart1->Series["Series1"]->Points->Count; i++) {
			wPoint = chart1->Series["Series1"]->Points[i];
			pt->Write((wPoint->XValue).ToString() + ";" + (wPoint->YValues[0]).ToString() + System::Environment::NewLine);
		}
		pt->Close();
	}
}
};
}
