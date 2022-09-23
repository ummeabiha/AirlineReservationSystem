#pragma once
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
	/// Summary for CancelFRS
	/// </summary>
	public ref class CancelFRS : public System::Windows::Forms::Form
	{
	public:
		CancelFRS(void)
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
		~CancelFRS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ FRS6NoteLabel;


	protected:

	private: System::Windows::Forms::Label^ FRS6FlightNoLabel;
	private: System::Windows::Forms::Label^ FRS6CNICLabel;
	private: System::Windows::Forms::Button^ FRS6CancelTicketsBtn;




	private: System::Windows::Forms::Label^ FRS6EmailLabel;
	private: System::Windows::Forms::Label^ FRS6EnterLabel;
	private: System::Windows::Forms::TextBox^ FRStextBox1;



	private: System::Windows::Forms::TextBox^ PassporttextBox2;
	private: System::Windows::Forms::TextBox^ EmailtextBox3;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CancelFRS::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FRS6NoteLabel = (gcnew System::Windows::Forms::Label());
			this->FRS6FlightNoLabel = (gcnew System::Windows::Forms::Label());
			this->FRS6CNICLabel = (gcnew System::Windows::Forms::Label());
			this->FRS6CancelTicketsBtn = (gcnew System::Windows::Forms::Button());
			this->FRS6EmailLabel = (gcnew System::Windows::Forms::Label());
			this->FRS6EnterLabel = (gcnew System::Windows::Forms::Label());
			this->FRStextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->PassporttextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->EmailtextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(201, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(393, 49);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FLIGHT CANCELLATION";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// FRS6NoteLabel
			// 
			this->FRS6NoteLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FRS6NoteLabel->AutoSize = true;
			this->FRS6NoteLabel->BackColor = System::Drawing::Color::WhiteSmoke;
			this->FRS6NoteLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS6NoteLabel->ForeColor = System::Drawing::Color::IndianRed;
			this->FRS6NoteLabel->Location = System::Drawing::Point(102, 56);
			this->FRS6NoteLabel->Name = L"FRS6NoteLabel";
			this->FRS6NoteLabel->Size = System::Drawing::Size(583, 36);
			this->FRS6NoteLabel->TabIndex = 1;
			this->FRS6NoteLabel->Text = L"NOTE: ONLY 50% AMOUNT WILL BE REFUNDED!";
			// 
			// FRS6FlightNoLabel
			// 
			this->FRS6FlightNoLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FRS6FlightNoLabel->AutoSize = true;
			this->FRS6FlightNoLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS6FlightNoLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS6FlightNoLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS6FlightNoLabel->Location = System::Drawing::Point(27, 275);
			this->FRS6FlightNoLabel->Name = L"FRS6FlightNoLabel";
			this->FRS6FlightNoLabel->Size = System::Drawing::Size(280, 29);
			this->FRS6FlightNoLabel->TabIndex = 2;
			this->FRS6FlightNoLabel->Text = L"FLIGHT REGISTERATION NO";
			// 
			// FRS6CNICLabel
			// 
			this->FRS6CNICLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FRS6CNICLabel->AutoSize = true;
			this->FRS6CNICLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS6CNICLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS6CNICLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS6CNICLabel->Location = System::Drawing::Point(27, 338);
			this->FRS6CNICLabel->Name = L"FRS6CNICLabel";
			this->FRS6CNICLabel->Size = System::Drawing::Size(207, 29);
			this->FRS6CNICLabel->TabIndex = 3;
			this->FRS6CNICLabel->Text = L"PASSPORT NUMBER";
			// 
			// FRS6CancelTicketsBtn
			// 
			this->FRS6CancelTicketsBtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FRS6CancelTicketsBtn->BackColor = System::Drawing::Color::Azure;
			this->FRS6CancelTicketsBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FRS6CancelTicketsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FRS6CancelTicketsBtn->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS6CancelTicketsBtn->Location = System::Drawing::Point(300, 485);
			this->FRS6CancelTicketsBtn->Name = L"FRS6CancelTicketsBtn";
			this->FRS6CancelTicketsBtn->Size = System::Drawing::Size(192, 49);
			this->FRS6CancelTicketsBtn->TabIndex = 4;
			this->FRS6CancelTicketsBtn->Text = L"CANCEL TICKETS";
			this->FRS6CancelTicketsBtn->UseVisualStyleBackColor = false;
			this->FRS6CancelTicketsBtn->Click += gcnew System::EventHandler(this, &CancelFRS::FRS6CancelTicketsBtn_Click);
			// 
			// FRS6EmailLabel
			// 
			this->FRS6EmailLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FRS6EmailLabel->AutoSize = true;
			this->FRS6EmailLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS6EmailLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS6EmailLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS6EmailLabel->Location = System::Drawing::Point(27, 395);
			this->FRS6EmailLabel->Name = L"FRS6EmailLabel";
			this->FRS6EmailLabel->Size = System::Drawing::Size(172, 29);
			this->FRS6EmailLabel->TabIndex = 5;
			this->FRS6EmailLabel->Text = L"EMAIL ADDRESS";
			// 
			// FRS6EnterLabel
			// 
			this->FRS6EnterLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FRS6EnterLabel->AutoSize = true;
			this->FRS6EnterLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS6EnterLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS6EnterLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS6EnterLabel->Location = System::Drawing::Point(26, 177);
			this->FRS6EnterLabel->Name = L"FRS6EnterLabel";
			this->FRS6EnterLabel->Size = System::Drawing::Size(488, 36);
			this->FRS6EnterLabel->TabIndex = 6;
			this->FRS6EnterLabel->Text = L"PLEASE ENTER THE FOLLOWING DETAILS";
			// 
			// FRStextBox1
			// 
			this->FRStextBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FRStextBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRStextBox1->Location = System::Drawing::Point(348, 272);
			this->FRStextBox1->MaxLength = 6;
			this->FRStextBox1->Name = L"FRStextBox1";
			this->FRStextBox1->Size = System::Drawing::Size(261, 37);
			this->FRStextBox1->TabIndex = 7;
			// 
			// PassporttextBox2
			// 
			this->PassporttextBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->PassporttextBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PassporttextBox2->Location = System::Drawing::Point(348, 330);
			this->PassporttextBox2->MaxLength = 11;
			this->PassporttextBox2->Name = L"PassporttextBox2";
			this->PassporttextBox2->Size = System::Drawing::Size(261, 37);
			this->PassporttextBox2->TabIndex = 8;
			this->PassporttextBox2->TextChanged += gcnew System::EventHandler(this, &CancelFRS::PassporttextBox2_TextChanged);
			// 
			// EmailtextBox3
			// 
			this->EmailtextBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->EmailtextBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmailtextBox3->Location = System::Drawing::Point(348, 387);
			this->EmailtextBox3->MaxLength = 100;
			this->EmailtextBox3->Name = L"EmailtextBox3";
			this->EmailtextBox3->Size = System::Drawing::Size(261, 37);
			this->EmailtextBox3->TabIndex = 9;
			// 
			// CancelFRS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(777, 546);
			this->Controls->Add(this->EmailtextBox3);
			this->Controls->Add(this->PassporttextBox2);
			this->Controls->Add(this->FRStextBox1);
			this->Controls->Add(this->FRS6EnterLabel);
			this->Controls->Add(this->FRS6EmailLabel);
			this->Controls->Add(this->FRS6CancelTicketsBtn);
			this->Controls->Add(this->FRS6CNICLabel);
			this->Controls->Add(this->FRS6FlightNoLabel);
			this->Controls->Add(this->FRS6NoteLabel);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CancelFRS";
			this->Text = L"CancelFRS";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void FRS6CancelTicketsBtn_Click(System::Object^ sender, System::EventArgs^ e)
{

	String^ passport = PassporttextBox2->Text;

	
	AirlineTickets ticketscancel;
	ticketscancel.CancelTickets(passport);

	


	/*
	
		if ((File::Exists(PassporttextBox2->Text + ".txt")) && (File::Exists(PassporttextBox2->Text + ".txt"))) {
			File::Delete(PassporttextBox2->Text + ".txt");
			MessageBox::Show("Data has been deleted.", "Notification",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else if (!File::Exists(PassporttextBox2->Text + ".txt"))
			MessageBox::Show("Data not found", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
	
	*/
}

private: System::Void PassporttextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
