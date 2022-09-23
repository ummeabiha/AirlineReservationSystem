#pragma once
#include"FRS4.h"
#include "Class.h"
#include <string>

namespace FlightReservationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	
	/// <summary>
	/// Summary for FRS3
	/// </summary>
	public ref class FRS3 : public System::Windows::Forms::Form
	{
	public:
		FRS3(void)
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
		~FRS3()
		{
			if (components)
			{
				delete components;
			}
		}

		String^ Gender;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ FRS3NameLabel;
	protected:

	private: System::Windows::Forms::Label^ FRS3ContactLabel;

	private: System::Windows::Forms::Label^ FRS3EmailLabel;

	private: System::Windows::Forms::Label^ FRS3GenderLabel;

	private: System::Windows::Forms::Button^ FRS3Next;


	private: System::Windows::Forms::TextBox^ FRS3NameTextBox;
	private: System::Windows::Forms::TextBox^ FRS3ContactTextBox;
	private: System::Windows::Forms::TextBox^ FRS3EmailTextBox;


	private: System::Windows::Forms::Label^ FRS3TicketsLabel;
	private: System::Windows::Forms::TextBox^ FRS3AgeTextBox;

	private: System::Windows::Forms::Label^ FRS3PassportLabel;



	private: System::Windows::Forms::TextBox^ FRS3PassportTextBox;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ FRS3FemaleRb;
	private: System::Windows::Forms::RadioButton^ FRS3MaleRb;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FRS3::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FRS3NameLabel = (gcnew System::Windows::Forms::Label());
			this->FRS3ContactLabel = (gcnew System::Windows::Forms::Label());
			this->FRS3EmailLabel = (gcnew System::Windows::Forms::Label());
			this->FRS3GenderLabel = (gcnew System::Windows::Forms::Label());
			this->FRS3Next = (gcnew System::Windows::Forms::Button());
			this->FRS3NameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FRS3ContactTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FRS3EmailTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FRS3TicketsLabel = (gcnew System::Windows::Forms::Label());
			this->FRS3AgeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FRS3PassportLabel = (gcnew System::Windows::Forms::Label());
			this->FRS3PassportTextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->FRS3FemaleRb = (gcnew System::Windows::Forms::RadioButton());
			this->FRS3MaleRb = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(145, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(895, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PROVIDE THE FOLLOWING INFORMATION FOR TICKET GENERATION";
			// 
			// FRS3NameLabel
			// 
			this->FRS3NameLabel->AutoSize = true;
			this->FRS3NameLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS3NameLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS3NameLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS3NameLabel->Location = System::Drawing::Point(326, 141);
			this->FRS3NameLabel->Name = L"FRS3NameLabel";
			this->FRS3NameLabel->Size = System::Drawing::Size(84, 33);
			this->FRS3NameLabel->TabIndex = 1;
			this->FRS3NameLabel->Text = L"NAME";
			// 
			// FRS3ContactLabel
			// 
			this->FRS3ContactLabel->AutoSize = true;
			this->FRS3ContactLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS3ContactLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 20));
			this->FRS3ContactLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS3ContactLabel->Location = System::Drawing::Point(326, 225);
			this->FRS3ContactLabel->Name = L"FRS3ContactLabel";
			this->FRS3ContactLabel->Size = System::Drawing::Size(124, 33);
			this->FRS3ContactLabel->TabIndex = 2;
			this->FRS3ContactLabel->Text = L"CONTACT ";
			// 
			// FRS3EmailLabel
			// 
			this->FRS3EmailLabel->AutoSize = true;
			this->FRS3EmailLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS3EmailLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS3EmailLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS3EmailLabel->Location = System::Drawing::Point(326, 377);
			this->FRS3EmailLabel->Name = L"FRS3EmailLabel";
			this->FRS3EmailLabel->Size = System::Drawing::Size(115, 33);
			this->FRS3EmailLabel->TabIndex = 3;
			this->FRS3EmailLabel->Text = L"EMAIL ID";
			// 
			// FRS3GenderLabel
			// 
			this->FRS3GenderLabel->AutoSize = true;
			this->FRS3GenderLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS3GenderLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS3GenderLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS3GenderLabel->Location = System::Drawing::Point(326, 538);
			this->FRS3GenderLabel->Name = L"FRS3GenderLabel";
			this->FRS3GenderLabel->Size = System::Drawing::Size(107, 33);
			this->FRS3GenderLabel->TabIndex = 4;
			this->FRS3GenderLabel->Text = L"GENDER";
			// 
			// FRS3Next
			// 
			this->FRS3Next->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->FRS3Next->AutoSize = true;
			this->FRS3Next->BackColor = System::Drawing::Color::PapayaWhip;
			this->FRS3Next->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FRS3Next->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FRS3Next->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS3Next->Location = System::Drawing::Point(856, 579);
			this->FRS3Next->Name = L"FRS3Next";
			this->FRS3Next->Size = System::Drawing::Size(180, 54);
			this->FRS3Next->TabIndex = 6;
			this->FRS3Next->Text = L"NEXT";
			this->FRS3Next->UseVisualStyleBackColor = false;
			this->FRS3Next->Click += gcnew System::EventHandler(this, &FRS3::button2_Click);
			// 
			// FRS3NameTextBox
			// 
			this->FRS3NameTextBox->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS3NameTextBox->Location = System::Drawing::Point(545, 141);
			this->FRS3NameTextBox->Name = L"FRS3NameTextBox";
			this->FRS3NameTextBox->Size = System::Drawing::Size(371, 37);
			this->FRS3NameTextBox->TabIndex = 9;
			this->FRS3NameTextBox->TextChanged += gcnew System::EventHandler(this, &FRS3::FRS3NameTextBox_TextChanged);
			// 
			// FRS3ContactTextBox
			// 
			this->FRS3ContactTextBox->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS3ContactTextBox->Location = System::Drawing::Point(545, 225);
			this->FRS3ContactTextBox->MaxLength = 11;
			this->FRS3ContactTextBox->Name = L"FRS3ContactTextBox";
			this->FRS3ContactTextBox->Size = System::Drawing::Size(371, 37);
			this->FRS3ContactTextBox->TabIndex = 10;
			this->FRS3ContactTextBox->TextChanged += gcnew System::EventHandler(this, &FRS3::FRS3ContactTextBox_TextChanged);
			// 
			// FRS3EmailTextBox
			// 
			this->FRS3EmailTextBox->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS3EmailTextBox->Location = System::Drawing::Point(545, 377);
			this->FRS3EmailTextBox->Name = L"FRS3EmailTextBox";
			this->FRS3EmailTextBox->Size = System::Drawing::Size(371, 37);
			this->FRS3EmailTextBox->TabIndex = 11;
			// 
			// FRS3TicketsLabel
			// 
			this->FRS3TicketsLabel->AutoSize = true;
			this->FRS3TicketsLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS3TicketsLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS3TicketsLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS3TicketsLabel->Location = System::Drawing::Point(326, 457);
			this->FRS3TicketsLabel->Name = L"FRS3TicketsLabel";
			this->FRS3TicketsLabel->Size = System::Drawing::Size(61, 33);
			this->FRS3TicketsLabel->TabIndex = 12;
			this->FRS3TicketsLabel->Text = L"AGE";
			this->FRS3TicketsLabel->Click += gcnew System::EventHandler(this, &FRS3::FRS3TicketsLabel_Click);
			// 
			// FRS3AgeTextBox
			// 
			this->FRS3AgeTextBox->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS3AgeTextBox->Location = System::Drawing::Point(545, 457);
			this->FRS3AgeTextBox->MaxLength = 3;
			this->FRS3AgeTextBox->Name = L"FRS3AgeTextBox";
			this->FRS3AgeTextBox->Size = System::Drawing::Size(371, 37);
			this->FRS3AgeTextBox->TabIndex = 13;
			// 
			// FRS3PassportLabel
			// 
			this->FRS3PassportLabel->AutoSize = true;
			this->FRS3PassportLabel->BackColor = System::Drawing::Color::Transparent;
			this->FRS3PassportLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS3PassportLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS3PassportLabel->Location = System::Drawing::Point(326, 300);
			this->FRS3PassportLabel->Name = L"FRS3PassportLabel";
			this->FRS3PassportLabel->Size = System::Drawing::Size(168, 33);
			this->FRS3PassportLabel->TabIndex = 14;
			this->FRS3PassportLabel->Text = L"PASSPORT NO";
			// 
			// FRS3PassportTextBox
			// 
			this->FRS3PassportTextBox->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS3PassportTextBox->Location = System::Drawing::Point(545, 300);
			this->FRS3PassportTextBox->MaxLength = 11;
			this->FRS3PassportTextBox->Name = L"FRS3PassportTextBox";
			this->FRS3PassportTextBox->Size = System::Drawing::Size(371, 37);
			this->FRS3PassportTextBox->TabIndex = 15;
			this->FRS3PassportTextBox->TextChanged += gcnew System::EventHandler(this, &FRS3::FRS3PassportTextBox_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->FRS3FemaleRb);
			this->groupBox1->Controls->Add(this->FRS3MaleRb);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(545, 525);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(371, 60);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			// 
			// FRS3FemaleRb
			// 
			this->FRS3FemaleRb->AutoSize = true;
			this->FRS3FemaleRb->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS3FemaleRb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS3FemaleRb->Location = System::Drawing::Point(224, 13);
			this->FRS3FemaleRb->Name = L"FRS3FemaleRb";
			this->FRS3FemaleRb->Size = System::Drawing::Size(121, 37);
			this->FRS3FemaleRb->TabIndex = 1;
			this->FRS3FemaleRb->Text = L"FEMALE";
			this->FRS3FemaleRb->UseVisualStyleBackColor = false;
			this->FRS3FemaleRb->CheckedChanged += gcnew System::EventHandler(this, &FRS3::FRS3FemaleRb_CheckedChanged);
			// 
			// FRS3MaleRb
			// 
			this->FRS3MaleRb->AutoSize = true;
			this->FRS3MaleRb->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FRS3MaleRb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FRS3MaleRb->Location = System::Drawing::Point(38, 13);
			this->FRS3MaleRb->Name = L"FRS3MaleRb";
			this->FRS3MaleRb->Size = System::Drawing::Size(96, 37);
			this->FRS3MaleRb->TabIndex = 1;
			this->FRS3MaleRb->Text = L"MALE";
			this->FRS3MaleRb->UseVisualStyleBackColor = false;
			this->FRS3MaleRb->CheckedChanged += gcnew System::EventHandler(this, &FRS3::FRS3MaleRb_CheckedChanged);
			// 
			// FRS3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1190, 658);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->FRS3PassportTextBox);
			this->Controls->Add(this->FRS3PassportLabel);
			this->Controls->Add(this->FRS3AgeTextBox);
			this->Controls->Add(this->FRS3TicketsLabel);
			this->Controls->Add(this->FRS3EmailTextBox);
			this->Controls->Add(this->FRS3ContactTextBox);
			this->Controls->Add(this->FRS3NameTextBox);
			this->Controls->Add(this->FRS3Next);
			this->Controls->Add(this->FRS3GenderLabel);
			this->Controls->Add(this->FRS3EmailLabel);
			this->Controls->Add(this->FRS3ContactLabel);
			this->Controls->Add(this->FRS3NameLabel);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->Name = L"FRS3";
			this->Text = L"FRS3";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FRS3::FRS3_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FRS3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		//Getting Values from text box
		String^ Name = FRS3NameTextBox->Text;
		String^ Email = FRS3EmailTextBox->Text;
		String^ Passport = FRS3PassportTextBox->Text;
		String^ Contact = FRS3ContactTextBox->Text;
		String^ Age = FRS3AgeTextBox->Text;
		
		
		if (Name == "" || Email == "" || Passport == "" || Contact == "" || Age == "" || Gender == "")
		{
			MessageBox::Show("Enter All The Fields!", "Error");
		}

		else if (Passport->Length != 11 || Contact->Length != 11)
		{
		MessageBox::Show("Enter a Valid Passport or Contact No!", "Error");
		}

		else
		{
			
			AirlineTickets addDataToFile;
			
			//Add User Data Into The File (Object Calling)
			addDataToFile.AddFields(Name, Contact, Passport, Age, Email, Gender);
			
			
			//Open FRS4
			this->Hide();
			FRS4^ Frs4 = gcnew FRS4();
			Frs4->ShowDialog();	

			
		}	
		
	}
private: System::Void FRS3MaleRb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Gender = "Male";
}
private: System::Void FRS3FemaleRb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Gender = "Female";
}
private: System::Void FRS3ContactTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void FRS3PassportTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FRS3NameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void FRS3TicketsLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
