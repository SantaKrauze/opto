#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::IO;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ wavelenght;
	protected:

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	protected:

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ProgressBar^ progressBar;

	private: System::Windows::Forms::Button^ getButton;

	private: System::Windows::Forms::GroupBox^ lambdaBox;
	private: System::Windows::Forms::GroupBox^ meterBox;


	private: System::Windows::Forms::TextBox^ valueBox;
	private: System::Windows::Forms::Button^ measureButoon;


	private: System::Windows::Forms::GroupBox^ parametersBox;
	private: System::Windows::Forms::TextBox^ deltaLambda;


	private: System::Windows::Forms::TextBox^ lambdaEnd;

	private: System::Windows::Forms::TextBox^ lambdaStart;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->wavelenght = (gcnew System::Windows::Forms::NumericUpDown());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->getButton = (gcnew System::Windows::Forms::Button());
			this->lambdaBox = (gcnew System::Windows::Forms::GroupBox());
			this->meterBox = (gcnew System::Windows::Forms::GroupBox());
			this->valueBox = (gcnew System::Windows::Forms::TextBox());
			this->measureButoon = (gcnew System::Windows::Forms::Button());
			this->parametersBox = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->deltaLambda = (gcnew System::Windows::Forms::TextBox());
			this->lambdaEnd = (gcnew System::Windows::Forms::TextBox());
			this->lambdaStart = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wavelenght))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->lambdaBox->SuspendLayout();
			this->meterBox->SuspendLayout();
			this->parametersBox->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// wavelenght
			// 
			this->wavelenght->Location = System::Drawing::Point(28, 43);
			this->wavelenght->Name = L"wavelenght";
			this->wavelenght->Size = System::Drawing::Size(120, 20);
			this->wavelenght->TabIndex = 0;
			this->wavelenght->ValueChanged += gcnew System::EventHandler(this, &Form1::wavelenght_ValueChanged);
			// 
			// chart
			// 
			this->chart->BackColor = System::Drawing::Color::Transparent;
			this->chart->BackSecondaryColor = System::Drawing::Color::White;
			this->chart->BorderlineColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(6, 22);
			this->chart->Name = L"chart";
			this->chart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart->Series->Add(series1);
			this->chart->Size = System::Drawing::Size(387, 371);
			this->chart->TabIndex = 1;
			this->chart->Text = L"chart1";
			this->chart->Click += gcnew System::EventHandler(this, &Form1::chart1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// progressBar
			// 
			this->progressBar->Location = System::Drawing::Point(424, 362);
			this->progressBar->Maximum = 20;
			this->progressBar->Name = L"progressBar";
			this->progressBar->Size = System::Drawing::Size(200, 25);
			this->progressBar->TabIndex = 2;
			this->progressBar->Click += gcnew System::EventHandler(this, &Form1::progressBar_Click);
			// 
			// getButton
			// 
			this->getButton->Location = System::Drawing::Point(28, 54);
			this->getButton->Name = L"getButton";
			this->getButton->Size = System::Drawing::Size(75, 23);
			this->getButton->TabIndex = 3;
			this->getButton->Text = L"Get";
			this->getButton->UseVisualStyleBackColor = true;
			this->getButton->Click += gcnew System::EventHandler(this, &Form1::getButton_Click);
			// 
			// lambdaBox
			// 
			this->lambdaBox->Controls->Add(this->wavelenght);
			this->lambdaBox->Location = System::Drawing::Point(424, 27);
			this->lambdaBox->Name = L"lambdaBox";
			this->lambdaBox->Size = System::Drawing::Size(200, 100);
			this->lambdaBox->TabIndex = 4;
			this->lambdaBox->TabStop = false;
			this->lambdaBox->Text = L"Set wavelenght";
			this->lambdaBox->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// meterBox
			// 
			this->meterBox->Controls->Add(this->valueBox);
			this->meterBox->Controls->Add(this->getButton);
			this->meterBox->Location = System::Drawing::Point(425, 133);
			this->meterBox->Name = L"meterBox";
			this->meterBox->Size = System::Drawing::Size(200, 96);
			this->meterBox->TabIndex = 5;
			this->meterBox->TabStop = false;
			this->meterBox->Text = L"Readout";
			this->meterBox->Enter += gcnew System::EventHandler(this, &Form1::groupBox2_Enter);
			// 
			// valueBox
			// 
			this->valueBox->Location = System::Drawing::Point(28, 28);
			this->valueBox->Name = L"valueBox";
			this->valueBox->ReadOnly = true;
			this->valueBox->Size = System::Drawing::Size(100, 20);
			this->valueBox->TabIndex = 0;
			this->valueBox->TextChanged += gcnew System::EventHandler(this, &Form1::valueBox_TextChanged);
			// 
			// measureButoon
			// 
			this->measureButoon->Location = System::Drawing::Point(424, 397);
			this->measureButoon->Name = L"measureButoon";
			this->measureButoon->Size = System::Drawing::Size(75, 23);
			this->measureButoon->TabIndex = 6;
			this->measureButoon->Text = L"Measure";
			this->measureButoon->UseVisualStyleBackColor = true;
			this->measureButoon->Click += gcnew System::EventHandler(this, &Form1::measureButoon_Click);
			// 
			// parametersBox
			// 
			this->parametersBox->Controls->Add(this->label3);
			this->parametersBox->Controls->Add(this->label2);
			this->parametersBox->Controls->Add(this->label1);
			this->parametersBox->Controls->Add(this->deltaLambda);
			this->parametersBox->Controls->Add(this->lambdaEnd);
			this->parametersBox->Controls->Add(this->lambdaStart);
			this->parametersBox->Location = System::Drawing::Point(426, 235);
			this->parametersBox->Name = L"parametersBox";
			this->parametersBox->Size = System::Drawing::Size(199, 121);
			this->parametersBox->TabIndex = 7;
			this->parametersBox->TabStop = false;
			this->parametersBox->Text = L"Parameters";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(139, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Delta";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(139, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Lambda 2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(139, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Lambda 1";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// deltaLambda
			// 
			this->deltaLambda->Location = System::Drawing::Point(28, 84);
			this->deltaLambda->Name = L"deltaLambda";
			this->deltaLambda->Size = System::Drawing::Size(100, 20);
			this->deltaLambda->TabIndex = 2;
			// 
			// lambdaEnd
			// 
			this->lambdaEnd->Location = System::Drawing::Point(28, 57);
			this->lambdaEnd->Name = L"lambdaEnd";
			this->lambdaEnd->Size = System::Drawing::Size(100, 20);
			this->lambdaEnd->TabIndex = 1;
			// 
			// lambdaStart
			// 
			this->lambdaStart->Location = System::Drawing::Point(28, 30);
			this->lambdaStart->Name = L"lambdaStart";
			this->lambdaStart->Size = System::Drawing::Size(100, 20);
			this->lambdaStart->TabIndex = 0;
			this->lambdaStart->TextChanged += gcnew System::EventHandler(this, &Form1::lambdaStart_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chart);
			this->groupBox1->Location = System::Drawing::Point(14, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(399, 399);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Graph";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(664, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->saveToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(664, 451);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->measureButoon);
			this->Controls->Add(this->parametersBox);
			this->Controls->Add(this->meterBox);
			this->Controls->Add(this->lambdaBox);
			this->Controls->Add(this->progressBar);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Laser ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wavelenght))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->lambdaBox->ResumeLayout(false);
			this->meterBox->ResumeLayout(false);
			this->meterBox->PerformLayout();
			this->parametersBox->ResumeLayout(false);
			this->parametersBox->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: SerialPort^ MonochromatorPort = nullptr;
	public: SerialPort^ MetexPort = nullptr;
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		MetexPort = gcnew SerialPort("COM5", 1200, Parity::None, 7, StopBits::Two);
		MetexPort->Open();
		MetexPort->DtrEnable = true;
		MetexPort->RtsEnable = false;
		MetexPort->ReadTimeout = 2000;
		MonochromatorPort = gcnew SerialPort("COM2", 9600, Parity::None, 8, StopBits::One);
		MonochromatorPort->Open();
		MonochromatorPort->DtrEnable = true;
		MonochromatorPort->RtsEnable = true;
	}

	private: System::Void setWave(int wave) {
		unsigned int m_lGotoWL = wave;
		unsigned char HiB = (m_lGotoWL & 0xFF00) >> 8;
		unsigned char LoB = m_lGotoWL & 0xFF;
		array<unsigned char>^ buffer = gcnew array<unsigned char, 1> {16, HiB, LoB};
		MonochromatorPort->Write(buffer, 0, buffer->GetLength(0));
	}
	private: float getValue() {
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
	private: System::Void getButton_Click(System::Object^ sender, System::EventArgs^ e) {
		float val = getValue();
		valueBox->Text = Convert::ToString(val);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (progressBar->Value < progressBar->Maximum) {
			float arg = progressBar->Value;
			setWave(arg);
			float value = getValue();
			chart->Series["Series1"]->Points->AddXY(arg, value);
			progressBar->Value += Convert::ToInt32(deltaLambda->Text, 10);
		}
		else {
			timer1->Enabled = false;
			progressBar->Value = 0;
		}
	}
	private: System::Void wavelenght_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		setWave((int)wavelenght->Value);
	}
	private: System::Void measureButoon_Click(System::Object^ sender, System::EventArgs^ e) {
		chart->Series["Series1"]->Points->Clear();
		progressBar->Value = Convert::ToInt32(lambdaStart->Text,10);
		progressBar->Maximum = Convert::ToInt32(lambdaEnd->Text, 10);
		timer1->Enabled = true;
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Filter = "Text files (*.txt) | *.txt";
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			StreamWriter^ pt = gcnew StreamWriter(saveFileDialog1->FileName, 0, System::Text::Encoding::Default);
			DataVisualization::Charting::DataPoint^ wPoint;
			for (int i = 1; i < chart->Series["Series1"]->Points->Count; i++){
				wPoint = chart->Series["Series1"]->Points[i];
				pt->Write((wPoint->XValue).ToString() + ";" + (wPoint->YValues[0]).ToString() + System::Environment::NewLine);
			}
			pt->Close();
		}
	}
	private: System::Void progressBar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lambdaStart_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void valueBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
