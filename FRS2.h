#pragma once
#include "FRS3.h"
#include "FRS4.h"
#include "Class.h"



namespace FlightReservationSystem {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for FRS2
	/// </summary>
	public ref class FRS2 : public System::Windows::Forms::Form
	{
	public:
		FRS2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FRS2()
		{
			if (components)
			{
				delete components;
			}
		}

		String^ Airlines;
		String^ Payment;
		String^ Date;
		String^ CardNo;

	private: System::Windows::Forms::Label^ FRS2label2;
	protected:
	private: System::Windows::Forms::Label^ FRS2label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ FRS2DebitRb3;
	private: System::Windows::Forms::RadioButton^ FRS2CreditRb3;
	private: System::Windows::Forms::TextBox^ FRS2textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ FRS2PIARb2;

	private: System::Windows::Forms::RadioButton^ FRS2EmiratesRb1;

	private: System::Windows::Forms::Button^ FRS2Next;
	private: System::Windows::Forms::Label^ FRS2label3;
	private: System::Windows::Forms::Label^ FRS2label4;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ FRS2dateTimePicker1;
	private: System::Windows::Forms::RadioButton^ FRS2JinnahRb4;

	private: System::Windows::Forms::RadioButton^ FRS2SereneRb3;


	private: System::ComponentModel::IContainer^ components;

	private:


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FRS2::typeid));
			this->FRS2label2 = (gcnew System::Windows::Forms::Label());
			this->FRS2label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->FRS2DebitRb3 = (gcnew System::Windows::Forms::RadioButton());
			this->FRS2CreditRb3 = (gcnew System::Windows::Forms::RadioButton());
			this->FRS2textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->FRS2SereneRb3 = (gcnew System::Windows::Forms::RadioButton());
			this->FRS2JinnahRb4 = (gcnew System::Windows::Forms::RadioButton());
			this->FRS2PIARb2 = (gcnew System::Windows::Forms::RadioButton());
			this->FRS2EmiratesRb1 = (gcnew System::Windows::Forms::RadioButton());
			this->FRS2Next = (gcnew System::Windows::Forms::Button());
			this->FRS2label3 = (gcnew System::Windows::Forms::Label());
			this->FRS2label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->FRS2dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// FRS2label2
			// 
			this->FRS2label2->AutoSize = true;
			this->FRS2label2->BackColor = System::Drawing::Color::Transparent;
			this->FRS2label2->Font = (gcnew System::Drawing::Font(L"Calibri", 26.5F));
			this->FRS2label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS2label2->Location = System::Drawing::Point(59, 251);
			this->FRS2label2->Name = L"FRS2label2";
			this->FRS2label2->Size = System::Drawing::Size(350, 44);
			this->FRS2label2->TabIndex = 3;
			this->FRS2label2->Text = L"Select Date Of Journey";
			// 
			// FRS2label1
			// 
			this->FRS2label1->AutoSize = true;
			this->FRS2label1->BackColor = System::Drawing::Color::Transparent;
			this->FRS2label1->Font = (gcnew System::Drawing::Font(L"Calibri", 27));
			this->FRS2label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS2label1->Location = System::Drawing::Point(59, 41);
			this->FRS2label1->Name = L"FRS2label1";
			this->FRS2label1->Size = System::Drawing::Size(410, 44);
			this->FRS2label1->TabIndex = 1;
			this->FRS2label1->Text = L"Prefered Airlines For Flight";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->FRS2DebitRb3);
			this->groupBox2->Controls->Add(this->FRS2CreditRb3);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox2->ForeColor = System::Drawing::Color::Transparent;
			this->groupBox2->Location = System::Drawing::Point(79, 458);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(351, 116);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			// 
			// FRS2DebitRb3
			// 
			this->FRS2DebitRb3->AutoSize = true;
			this->FRS2DebitRb3->BackColor = System::Drawing::Color::Transparent;
			this->FRS2DebitRb3->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->FRS2DebitRb3->ForeColor = System::Drawing::Color::MintCream;
			this->FRS2DebitRb3->Location = System::Drawing::Point(6, 15);
			this->FRS2DebitRb3->Name = L"FRS2DebitRb3";
			this->FRS2DebitRb3->Size = System::Drawing::Size(164, 41);
			this->FRS2DebitRb3->TabIndex = 7;
			this->FRS2DebitRb3->TabStop = true;
			this->FRS2DebitRb3->Text = L"Debit Card";
			this->FRS2DebitRb3->UseVisualStyleBackColor = false;
			this->FRS2DebitRb3->CheckedChanged += gcnew System::EventHandler(this, &FRS2::FRS2DebitRb3_CheckedChanged);
			// 
			// FRS2CreditRb3
			// 
			this->FRS2CreditRb3->AutoSize = true;
			this->FRS2CreditRb3->BackColor = System::Drawing::Color::Transparent;
			this->FRS2CreditRb3->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->FRS2CreditRb3->ForeColor = System::Drawing::Color::MintCream;
			this->FRS2CreditRb3->Location = System::Drawing::Point(6, 64);
			this->FRS2CreditRb3->Name = L"FRS2CreditRb3";
			this->FRS2CreditRb3->Size = System::Drawing::Size(172, 41);
			this->FRS2CreditRb3->TabIndex = 8;
			this->FRS2CreditRb3->TabStop = true;
			this->FRS2CreditRb3->Text = L"Credit Card";
			this->FRS2CreditRb3->UseVisualStyleBackColor = false;
			this->FRS2CreditRb3->CheckedChanged += gcnew System::EventHandler(this, &FRS2::FRS2CreditRb3_CheckedChanged);
			// 
			// FRS2textBox1
			// 
			this->FRS2textBox1->BackColor = System::Drawing::Color::LightYellow;
			this->FRS2textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 20));
			this->FRS2textBox1->Location = System::Drawing::Point(488, 605);
			this->FRS2textBox1->MaxLength = 16;
			this->FRS2textBox1->Name = L"FRS2textBox1";
			this->FRS2textBox1->Size = System::Drawing::Size(292, 40);
			this->FRS2textBox1->TabIndex = 10;
			this->FRS2textBox1->TextChanged += gcnew System::EventHandler(this, &FRS2::FRS2textBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->FRS2SereneRb3);
			this->groupBox1->Controls->Add(this->FRS2JinnahRb4);
			this->groupBox1->Controls->Add(this->FRS2PIARb2);
			this->groupBox1->Controls->Add(this->FRS2EmiratesRb1);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox1->ForeColor = System::Drawing::Color::Transparent;
			this->groupBox1->Location = System::Drawing::Point(79, 104);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(525, 124);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &FRS2::groupBox1_Enter);
			// 
			// FRS2SereneRb3
			// 
			this->FRS2SereneRb3->AutoSize = true;
			this->FRS2SereneRb3->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS2SereneRb3->Location = System::Drawing::Point(310, 18);
			this->FRS2SereneRb3->Name = L"FRS2SereneRb3";
			this->FRS2SereneRb3->Size = System::Drawing::Size(126, 43);
			this->FRS2SereneRb3->TabIndex = 8;
			this->FRS2SereneRb3->TabStop = true;
			this->FRS2SereneRb3->Text = L"Serene";
			this->FRS2SereneRb3->UseVisualStyleBackColor = true;
			this->FRS2SereneRb3->CheckedChanged += gcnew System::EventHandler(this, &FRS2::FRS2SereneRb3_CheckedChanged);
			// 
			// FRS2JinnahRb4
			// 
			this->FRS2JinnahRb4->AutoSize = true;
			this->FRS2JinnahRb4->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS2JinnahRb4->Location = System::Drawing::Point(310, 67);
			this->FRS2JinnahRb4->Name = L"FRS2JinnahRb4";
			this->FRS2JinnahRb4->Size = System::Drawing::Size(118, 43);
			this->FRS2JinnahRb4->TabIndex = 7;
			this->FRS2JinnahRb4->TabStop = true;
			this->FRS2JinnahRb4->Text = L"Jinnah";
			this->FRS2JinnahRb4->UseVisualStyleBackColor = true;
			this->FRS2JinnahRb4->CheckedChanged += gcnew System::EventHandler(this, &FRS2::radioButton1_CheckedChanged);
			// 
			// FRS2PIARb2
			// 
			this->FRS2PIARb2->AutoSize = true;
			this->FRS2PIARb2->BackColor = System::Drawing::Color::Transparent;
			this->FRS2PIARb2->Font = (gcnew System::Drawing::Font(L"Calibri", 24));
			this->FRS2PIARb2->ForeColor = System::Drawing::Color::MintCream;
			this->FRS2PIARb2->Location = System::Drawing::Point(16, 67);
			this->FRS2PIARb2->Name = L"FRS2PIARb2";
			this->FRS2PIARb2->Size = System::Drawing::Size(79, 43);
			this->FRS2PIARb2->TabIndex = 6;
			this->FRS2PIARb2->TabStop = true;
			this->FRS2PIARb2->Text = L"PIA";
			this->FRS2PIARb2->UseVisualStyleBackColor = false;
			this->FRS2PIARb2->CheckedChanged += gcnew System::EventHandler(this, &FRS2::radioButton2_CheckedChanged);
			// 
			// FRS2EmiratesRb1
			// 
			this->FRS2EmiratesRb1->AutoSize = true;
			this->FRS2EmiratesRb1->BackColor = System::Drawing::Color::Transparent;
			this->FRS2EmiratesRb1->Font = (gcnew System::Drawing::Font(L"Calibri", 24));
			this->FRS2EmiratesRb1->ForeColor = System::Drawing::Color::MintCream;
			this->FRS2EmiratesRb1->Location = System::Drawing::Point(16, 18);
			this->FRS2EmiratesRb1->Name = L"FRS2EmiratesRb1";
			this->FRS2EmiratesRb1->Size = System::Drawing::Size(149, 43);
			this->FRS2EmiratesRb1->TabIndex = 5;
			this->FRS2EmiratesRb1->TabStop = true;
			this->FRS2EmiratesRb1->Text = L"Emirates";
			this->FRS2EmiratesRb1->UseVisualStyleBackColor = false;
			this->FRS2EmiratesRb1->CheckedChanged += gcnew System::EventHandler(this, &FRS2::FRS2DomesticRb1_CheckedChanged);
			// 
			// FRS2Next
			// 
			this->FRS2Next->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->FRS2Next->AutoSize = true;
			this->FRS2Next->BackColor = System::Drawing::Color::YellowGreen;
			this->FRS2Next->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FRS2Next->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FRS2Next->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS2Next->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FRS2Next->Location = System::Drawing::Point(908, 644);
			this->FRS2Next->Name = L"FRS2Next";
			this->FRS2Next->Size = System::Drawing::Size(155, 49);
			this->FRS2Next->TabIndex = 11;
			this->FRS2Next->Text = L"NEXT";
			this->FRS2Next->UseVisualStyleBackColor = false;
			this->FRS2Next->Click += gcnew System::EventHandler(this, &FRS2::button2_Click);
			// 
			// FRS2label3
			// 
			this->FRS2label3->AutoSize = true;
			this->FRS2label3->BackColor = System::Drawing::Color::Transparent;
			this->FRS2label3->Font = (gcnew System::Drawing::Font(L"Calibri", 27));
			this->FRS2label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS2label3->Location = System::Drawing::Point(59, 398);
			this->FRS2label3->Name = L"FRS2label3";
			this->FRS2label3->Size = System::Drawing::Size(389, 44);
			this->FRS2label3->TabIndex = 2;
			this->FRS2label3->Text = L"Choose Payment Method";
			// 
			// FRS2label4
			// 
			this->FRS2label4->AutoSize = true;
			this->FRS2label4->BackColor = System::Drawing::Color::Transparent;
			this->FRS2label4->Font = (gcnew System::Drawing::Font(L"Calibri", 27));
			this->FRS2label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS2label4->Location = System::Drawing::Point(59, 605);
			this->FRS2label4->Name = L"FRS2label4";
			this->FRS2label4->Size = System::Drawing::Size(0, 44);
			this->FRS2label4->TabIndex = 4;
			this->FRS2label4->Click += gcnew System::EventHandler(this, &FRS2::FRS2label4_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::LemonChiffon;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1027, 765);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"NEXT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FRS2::button1_Click);
			// 
			// FRS2dateTimePicker1
			// 
			this->FRS2dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->FRS2dateTimePicker1->Location = System::Drawing::Point(95, 319);
			this->FRS2dateTimePicker1->MaxDate = System::DateTime(2022, 8, 31, 0, 0, 0, 0);
			this->FRS2dateTimePicker1->MinDate = System::DateTime(2022, 8, 1, 0, 0, 0, 0);
			this->FRS2dateTimePicker1->Name = L"FRS2dateTimePicker1";
			this->FRS2dateTimePicker1->Size = System::Drawing::Size(432, 43);
			this->FRS2dateTimePicker1->TabIndex = 9;
			this->FRS2dateTimePicker1->Value = System::DateTime(2022, 8, 1, 0, 0, 0, 0);
			this->FRS2dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &FRS2::FRS2dateTimePicker1_ValueChanged_1);
			// 
			// FRS2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1226, 749);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->FRS2Next);
			this->Controls->Add(this->FRS2textBox1);
			this->Controls->Add(this->FRS2dateTimePicker1);
			this->Controls->Add(this->FRS2label4);
			this->Controls->Add(this->FRS2label2);
			this->Controls->Add(this->FRS2label3);
			this->Controls->Add(this->FRS2label1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FRS2";
			this->Text = L"FRS2";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FRS2::FRS2_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FRS2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}


private: System::Void FRS2DomesticRb1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Airlines = "Emirates";
}

private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Airlines = "PIA";
}

private: System::Void FRS2SereneRb3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Airlines = "Serene";
}

private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Airlines = "Jinnah";
}
	   
	   
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	CardNo = FRS2textBox1->Text;

	if ((Airlines == "") || (Payment == "") || (Date == "") || (CardNo==""))
	{
		MessageBox::Show("Please Enter All The Fields!", "ERROR!");
	}

	else if (CardNo->Length != 16)
	{
		MessageBox::Show("Enter Valid Card No", "ERROR!");
	}
		
	else
	{
		//Single Inheritance
		//Derived Class(Airline Tickets) is calling the Function Of Base Class (Airlines) to add data.
		AirlineTickets addData;
		addData.AddChoices(Airlines, Date, Payment, CardNo);

		this->Hide();
		FRS3^ Frs3 = gcnew FRS3();
		Frs3->ShowDialog();
				
	}	
}
	  
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void FRS2DebitRb3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Payment = "Debit";
	FRS2label4->Text = ("Enter Debit Card Number");
}
private: System::Void FRS2CreditRb3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Payment = "Credit";
	FRS2label4->Text = ("Enter Credit Card Number");
}
private: System::Void FRS2label4_Click(System::Object^ sender, System::EventArgs^ e) {
	FRS2label4->Text = ("Enter Credit Card Number");
}
private: System::Void FRS2textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void FRSlabel4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FRS2label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FRS2label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FRS2label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FRS2dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FRSlabel4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FRS2dateTimePicker1_ValueChanged_1(System::Object^ sender, System::EventArgs^ e) {
	Date = FRS2dateTimePicker1->Text;
}


};
}
