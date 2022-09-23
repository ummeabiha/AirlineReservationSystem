#pragma once
#include "Class.h"
#include "FRS5.h"

namespace FlightReservationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for FRS4
	/// </summary>
	public ref class FRS4 : public System::Windows::Forms::Form
	{
	public:
		FRS4(void)
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
		~FRS4()
		{
			if (components)
			{
				delete components;
			}
		}
		
		//Variable Declarations
		String^ Flight;
		String^ Number;
		float price;
	
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ FRS4SelectLabel;
	private: System::Windows::Forms::RadioButton^ FRS4DomesticRb1;
	private: System::Windows::Forms::RadioButton^ FRS4InternationalRb2;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;


	private:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FRS4::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FRS4SelectLabel = (gcnew System::Windows::Forms::Label());
			this->FRS4DomesticRb1 = (gcnew System::Windows::Forms::RadioButton());
			this->FRS4InternationalRb2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::LemonChiffon;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(975, 561);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 54);
			this->button1->TabIndex = 9;
			this->button1->Text = L"BOOK TICKETS";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FRS4::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(447, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(307, 45);
			this->label1->TabIndex = 10;
			this->label1->Text = L"AIRLINE BOOKINGS";
			// 
			// FRS4SelectLabel
			// 
			this->FRS4SelectLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->FRS4SelectLabel->AutoSize = true;
			this->FRS4SelectLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS4SelectLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 23.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS4SelectLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS4SelectLabel->Location = System::Drawing::Point(92, 116);
			this->FRS4SelectLabel->Name = L"FRS4SelectLabel";
			this->FRS4SelectLabel->Size = System::Drawing::Size(418, 38);
			this->FRS4SelectLabel->TabIndex = 11;
			this->FRS4SelectLabel->Text = L"Please Select The Type Of Flight:";
			this->FRS4SelectLabel->Click += gcnew System::EventHandler(this, &FRS4::FRS4SelectLabel_Click);
			// 
			// FRS4DomesticRb1
			// 
			this->FRS4DomesticRb1->AutoSize = true;
			this->FRS4DomesticRb1->BackColor = System::Drawing::Color::Transparent;
			this->FRS4DomesticRb1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FRS4DomesticRb1->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS4DomesticRb1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS4DomesticRb1->Location = System::Drawing::Point(582, 126);
			this->FRS4DomesticRb1->Name = L"FRS4DomesticRb1";
			this->FRS4DomesticRb1->Size = System::Drawing::Size(226, 40);
			this->FRS4DomesticRb1->TabIndex = 12;
			this->FRS4DomesticRb1->TabStop = true;
			this->FRS4DomesticRb1->Text = L"Domestic Flights";
			this->FRS4DomesticRb1->UseVisualStyleBackColor = false;
			this->FRS4DomesticRb1->CheckedChanged += gcnew System::EventHandler(this, &FRS4::FRS4DomesticRb1_CheckedChanged);
			// 
			// FRS4InternationalRb2
			// 
			this->FRS4InternationalRb2->AutoSize = true;
			this->FRS4InternationalRb2->BackColor = System::Drawing::Color::Transparent;
			this->FRS4InternationalRb2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FRS4InternationalRb2->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS4InternationalRb2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS4InternationalRb2->Location = System::Drawing::Point(297, 13);
			this->FRS4InternationalRb2->Name = L"FRS4InternationalRb2";
			this->FRS4InternationalRb2->Size = System::Drawing::Size(269, 40);
			this->FRS4InternationalRb2->TabIndex = 13;
			this->FRS4InternationalRb2->TabStop = true;
			this->FRS4InternationalRb2->Text = L"International Flights";
			this->FRS4InternationalRb2->UseVisualStyleBackColor = false;
			this->FRS4InternationalRb2->CheckedChanged += gcnew System::EventHandler(this, &FRS4::FRS4InternationalRb2_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->FRS4InternationalRb2);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox1->ForeColor = System::Drawing::Color::Transparent;
			this->groupBox1->Location = System::Drawing::Point(571, 116);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(572, 59);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(344, 262);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 36);
			this->label2->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(314, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 36);
			this->label3->TabIndex = 16;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 18.75F));
			this->textBox1->Location = System::Drawing::Point(659, 598);
			this->textBox1->MaxLength = 1;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 38);
			this->textBox1->TabIndex = 17;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FRS4::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 22));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(313, 599);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(243, 37);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Select Your Choice";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(314, 544);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(171, 36);
			this->label5->TabIndex = 19;
			this->label5->Text = L"No Of Tickets";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(659, 544);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 37);
			this->textBox2->TabIndex = 20;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &FRS4::textBox2_TextChanged);
			// 
			// FRS4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1166, 665);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FRS4DomesticRb1);
			this->Controls->Add(this->FRS4SelectLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FRS4";
			this->Text = L"FRS4";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FRS4::FRS4_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		AirlineTickets choice;
		String^ choiceForTickets = textBox1->Text;
		choice.BookTickets(choiceForTickets,Flight);


		if (textBox1->Text == "1" && Flight == "Domestic")
		{
			price = 10000;
			String^ NoOfTickets = textBox2->Text;
			float tickets = (float)(Convert::ToDouble(NoOfTickets));
			AirlineTickets ticketPrice(price);
			AirlineTickets totalTickets(tickets);
			AirlineTickets cost;
			cost = ticketPrice * totalTickets;

			cost.TotalCost();

			this->Hide();
			FRS5^ Frs5 = gcnew FRS5();
			Frs5->ShowDialog();

		}
		else if (textBox1->Text == "2" && Flight == "Domestic")
		{
			price = 20000;
			String^ NoOfTickets = textBox2->Text;
			float tickets = (float)(Convert::ToDouble(NoOfTickets));
			AirlineTickets ticketPrice(price);
			AirlineTickets totalTickets(tickets);
			AirlineTickets cost;
			cost = ticketPrice * totalTickets;

			cost.TotalCost();

			this->Hide();
			FRS5^ Frs5 = gcnew FRS5();
			Frs5->ShowDialog();
		}

		else if (textBox1->Text == "3" && Flight == "Domestic")
		{
			price = 20000;
			String^ NoOfTickets = textBox2->Text;
			float tickets = (float)(Convert::ToDouble(NoOfTickets));
			AirlineTickets ticketPrice(price);
			AirlineTickets totalTickets(tickets);
			AirlineTickets cost;
			cost = ticketPrice * totalTickets;


			cost.TotalCost();

			this->Hide();
			FRS5^ Frs5 = gcnew FRS5();
			Frs5->ShowDialog();

		}

		else if (textBox1->Text == "4" && Flight == "Domestic")
		{
			price = 10000;
			String^ NoOfTickets = textBox2->Text;
			float tickets = (float)(Convert::ToDouble(NoOfTickets));
			AirlineTickets ticketPrice(price);
			AirlineTickets totalTickets(tickets);
			AirlineTickets cost;
			cost = ticketPrice * totalTickets;


			cost.TotalCost();

			this->Hide();
			FRS5^ Frs5 = gcnew FRS5();
			Frs5->ShowDialog();

		}

		else if (textBox1->Text == "5" && Flight == "Domestic")
		{
			price = 15000;
			String^ NoOfTickets = textBox2->Text;
			float tickets = (float)(Convert::ToDouble(NoOfTickets));
			AirlineTickets ticketPrice(price);
			AirlineTickets totalTickets(tickets);
			AirlineTickets cost;
			cost = ticketPrice * totalTickets;


			cost.TotalCost();

			this->Hide();
			FRS5^ Frs5 = gcnew FRS5();
			Frs5->ShowDialog();

		}

		else if (textBox1->Text == "1" && Flight == "International")
		{
			price = 100000;
			String^ NoOfTickets = textBox2->Text;
			float tickets = (float)(Convert::ToDouble(NoOfTickets));
			AirlineTickets ticketPrice(price);
			AirlineTickets totalTickets(tickets);
			AirlineTickets cost;
			cost = ticketPrice * totalTickets;


			cost.TotalCost();

			this->Hide();
			FRS5^ Frs5 = gcnew FRS5();
			Frs5->ShowDialog();
		}

		else if (textBox1->Text == "2" && Flight == "International")
		{
			price = 150000;
			String^ NoOfTickets = textBox2->Text;
			AirlineTickets ticketPrice(price);
			AirlineTickets totalTickets(2);
			AirlineTickets cost;
			cost = ticketPrice * totalTickets;


			cost.TotalCost();

			this->Hide();
			FRS5^ Frs5 = gcnew FRS5();
			Frs5->ShowDialog();

		}

		else if (textBox1->Text == "3" && Flight == "International")
		{
			price = 200000;
			String^ NoOfTickets = textBox2->Text;
			float tickets = (float)(Convert::ToDouble(NoOfTickets));
			AirlineTickets ticketPrice(price);
			AirlineTickets totalTickets(tickets);
			AirlineTickets cost;
			cost = ticketPrice * totalTickets;


			cost.TotalCost();

			this->Hide();
			FRS5^ Frs5 = gcnew FRS5();
			Frs5->ShowDialog();

		}

		else if (textBox1->Text == "4" && Flight == "International")
		{

			price = 80000;
			String^ NoOfTickets = textBox2->Text;
			float tickets = (float)(Convert::ToDouble(NoOfTickets));
			AirlineTickets ticketPrice(price);
			AirlineTickets totalTickets(tickets);
			AirlineTickets cost;
			cost = ticketPrice * totalTickets;


			cost.TotalCost();

			this->Hide();
			FRS5^ Frs5 = gcnew FRS5();
			Frs5->ShowDialog();

		}

		else if (textBox1->Text == "5" && Flight == "International")
		{

			price = 300000;
			String^ NoOfTickets = textBox2->Text;
			float tickets = (float)(Convert::ToDouble(NoOfTickets));
			AirlineTickets ticketPrice(price);
			AirlineTickets totalTickets(tickets);
			AirlineTickets cost;
			cost = ticketPrice * totalTickets;

			cost.TotalCost();

			this->Hide();
			FRS5^ Frs5 = gcnew FRS5();
			Frs5->ShowDialog();

		}

		else
		{
			MessageBox::Show("Invalid Choice", "Error");
		}


	}


private: System::Void FRS4DomesticRb1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Flight = "Domestic";

	Airlines domestic;
	domestic.Domesticflight(label3);

}
private: System::Void FRS4InternationalRb2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Flight = "International";
	
	Airlines international;
	international.Internationalflight(label3);
	
}


private: System::Void FRS4SelectLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   
private: System::Void FRS4_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

