#pragma once
#include "Class.h"

namespace FlightReservationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FRS5
	/// </summary>
	public ref class FRS5 : public System::Windows::Forms::Form
	{
	public:
		FRS5(void)
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
		~FRS5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ FRS5TicketsLabel;
	protected:

	private: System::Windows::Forms::Label^ FRS5FlightNoLabel;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ FRS5NameLabel;
	private: System::Windows::Forms::Label^ FRS5AmountPaid;




	private: System::Windows::Forms::Label^ FRS5DepartureLabel;


	private: System::Windows::Forms::Label^ FRS5CountryLabel;

	private: System::Windows::Forms::Label^ FRS5AirlinesLabel;

	private: System::Windows::Forms::Button^ FRS5CloseButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FRS5::typeid));
			this->FRS5TicketsLabel = (gcnew System::Windows::Forms::Label());
			this->FRS5FlightNoLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->FRS5NameLabel = (gcnew System::Windows::Forms::Label());
			this->FRS5AmountPaid = (gcnew System::Windows::Forms::Label());
			this->FRS5DepartureLabel = (gcnew System::Windows::Forms::Label());
			this->FRS5CountryLabel = (gcnew System::Windows::Forms::Label());
			this->FRS5AirlinesLabel = (gcnew System::Windows::Forms::Label());
			this->FRS5CloseButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// FRS5TicketsLabel
			// 
			this->FRS5TicketsLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->FRS5TicketsLabel->AutoSize = true;
			this->FRS5TicketsLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS5TicketsLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS5TicketsLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS5TicketsLabel->Location = System::Drawing::Point(205, 49);
			this->FRS5TicketsLabel->Name = L"FRS5TicketsLabel";
			this->FRS5TicketsLabel->Size = System::Drawing::Size(489, 45);
			this->FRS5TicketsLabel->TabIndex = 0;
			this->FRS5TicketsLabel->Text = L"TICKETS BOOKED SUCCESFULLY";
			// 
			// FRS5FlightNoLabel
			// 
			this->FRS5FlightNoLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FRS5FlightNoLabel->AutoSize = true;
			this->FRS5FlightNoLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS5FlightNoLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS5FlightNoLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS5FlightNoLabel->Location = System::Drawing::Point(117, 170);
			this->FRS5FlightNoLabel->Name = L"FRS5FlightNoLabel";
			this->FRS5FlightNoLabel->Size = System::Drawing::Size(144, 29);
			this->FRS5FlightNoLabel->TabIndex = 1;
			this->FRS5FlightNoLabel->Text = L"CONTACT NO";
			this->FRS5FlightNoLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(436, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 29);
			this->label3->TabIndex = 2;
			// 
			// FRS5NameLabel
			// 
			this->FRS5NameLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FRS5NameLabel->AutoSize = true;
			this->FRS5NameLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS5NameLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS5NameLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS5NameLabel->Location = System::Drawing::Point(117, 114);
			this->FRS5NameLabel->Name = L"FRS5NameLabel";
			this->FRS5NameLabel->Size = System::Drawing::Size(76, 29);
			this->FRS5NameLabel->TabIndex = 3;
			this->FRS5NameLabel->Text = L"NAME";
			this->FRS5NameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// FRS5AmountPaid
			// 
			this->FRS5AmountPaid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FRS5AmountPaid->AutoSize = true;
			this->FRS5AmountPaid->BackColor = System::Drawing::Color::Transparent;
			this->FRS5AmountPaid->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS5AmountPaid->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS5AmountPaid->Location = System::Drawing::Point(117, 388);
			this->FRS5AmountPaid->Name = L"FRS5AmountPaid";
			this->FRS5AmountPaid->Size = System::Drawing::Size(157, 29);
			this->FRS5AmountPaid->TabIndex = 4;
			this->FRS5AmountPaid->Text = L"AMOUNT PAID";
			this->FRS5AmountPaid->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->FRS5AmountPaid->Click += gcnew System::EventHandler(this, &FRS5::FRS5ArrivalLabel_Click);
			// 
			// FRS5DepartureLabel
			// 
			this->FRS5DepartureLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FRS5DepartureLabel->AutoSize = true;
			this->FRS5DepartureLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS5DepartureLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS5DepartureLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS5DepartureLabel->Location = System::Drawing::Point(117, 228);
			this->FRS5DepartureLabel->Name = L"FRS5DepartureLabel";
			this->FRS5DepartureLabel->Size = System::Drawing::Size(129, 29);
			this->FRS5DepartureLabel->TabIndex = 5;
			this->FRS5DepartureLabel->Text = L"DEPARTURE";
			this->FRS5DepartureLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// FRS5CountryLabel
			// 
			this->FRS5CountryLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FRS5CountryLabel->AutoSize = true;
			this->FRS5CountryLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS5CountryLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS5CountryLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS5CountryLabel->Location = System::Drawing::Point(117, 286);
			this->FRS5CountryLabel->Name = L"FRS5CountryLabel";
			this->FRS5CountryLabel->Size = System::Drawing::Size(96, 29);
			this->FRS5CountryLabel->TabIndex = 6;
			this->FRS5CountryLabel->Text = L"ARRIVAL";
			this->FRS5CountryLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// FRS5AirlinesLabel
			// 
			this->FRS5AirlinesLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FRS5AirlinesLabel->AutoSize = true;
			this->FRS5AirlinesLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS5AirlinesLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS5AirlinesLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS5AirlinesLabel->Location = System::Drawing::Point(117, 339);
			this->FRS5AirlinesLabel->Name = L"FRS5AirlinesLabel";
			this->FRS5AirlinesLabel->Size = System::Drawing::Size(101, 29);
			this->FRS5AirlinesLabel->TabIndex = 7;
			this->FRS5AirlinesLabel->Text = L"AIRLINES";
			this->FRS5AirlinesLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// FRS5CloseButton
			// 
			this->FRS5CloseButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->FRS5CloseButton->BackColor = System::Drawing::Color::PaleTurquoise;
			this->FRS5CloseButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FRS5CloseButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FRS5CloseButton->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS5CloseButton->Location = System::Drawing::Point(380, 430);
			this->FRS5CloseButton->Name = L"FRS5CloseButton";
			this->FRS5CloseButton->Size = System::Drawing::Size(133, 62);
			this->FRS5CloseButton->TabIndex = 8;
			this->FRS5CloseButton->Text = L"CLOSE";
			this->FRS5CloseButton->UseVisualStyleBackColor = false;
			this->FRS5CloseButton->Click += gcnew System::EventHandler(this, &FRS5::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(489, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 29);
			this->label1->TabIndex = 9;
			this->label1->Click += gcnew System::EventHandler(this, &FRS5::label1_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(148, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 62);
			this->button1->TabIndex = 10;
			this->button1->Text = L"GENERATE TICKETS";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FRS5::button1_Click_1);
			// 
			// FRS5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(846, 529);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->FRS5CloseButton);
			this->Controls->Add(this->FRS5AirlinesLabel);
			this->Controls->Add(this->FRS5CountryLabel);
			this->Controls->Add(this->FRS5DepartureLabel);
			this->Controls->Add(this->FRS5AmountPaid);
			this->Controls->Add(this->FRS5NameLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->FRS5FlightNoLabel);
			this->Controls->Add(this->FRS5TicketsLabel);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FRS5";
			this->Text = L"FRS5";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void FRS5ArrivalLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
public: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	AirlineTickets generate;
	generate.TicketGeneration(label1);
}
};

}
