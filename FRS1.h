#pragma once
#include "FRS2.h"
#include "CancelFRS.h"

namespace FlightReservationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FRS1
	/// </summary>
	public ref class FRS1 : public System::Windows::Forms::Form
	{
	public:
		FRS1(void)
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
		~FRS1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BookFRS1;
	private: System::Windows::Forms::Button^ CancelFRS1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FRS1::typeid));
			this->BookFRS1 = (gcnew System::Windows::Forms::Button());
			this->CancelFRS1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BookFRS1
			// 
			this->BookFRS1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->BookFRS1->AutoSize = true;
			this->BookFRS1->BackColor = System::Drawing::Color::LemonChiffon;
			this->BookFRS1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BookFRS1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BookFRS1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookFRS1->Location = System::Drawing::Point(600, 340);
			this->BookFRS1->Name = L"BookFRS1";
			this->BookFRS1->Size = System::Drawing::Size(174, 77);
			this->BookFRS1->TabIndex = 1;
			this->BookFRS1->Text = L"BOOK TICKETS";
			this->BookFRS1->UseVisualStyleBackColor = false;
			this->BookFRS1->Click += gcnew System::EventHandler(this, &FRS1::BookFRS1_Click);
			// 
			// CancelFRS1
			// 
			this->CancelFRS1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->CancelFRS1->AutoSize = true;
			this->CancelFRS1->BackColor = System::Drawing::Color::LemonChiffon;
			this->CancelFRS1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CancelFRS1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CancelFRS1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelFRS1->Location = System::Drawing::Point(600, 444);
			this->CancelFRS1->Name = L"CancelFRS1";
			this->CancelFRS1->Size = System::Drawing::Size(174, 77);
			this->CancelFRS1->TabIndex = 2;
			this->CancelFRS1->Text = L"CANCEL TICKETS";
			this->CancelFRS1->UseVisualStyleBackColor = false;
			this->CancelFRS1->Click += gcnew System::EventHandler(this, &FRS1::button1_Click);
			// 
			// FRS1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(787, 497);
			this->Controls->Add(this->CancelFRS1);
			this->Controls->Add(this->BookFRS1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FRS1";
			this->Text = L"FRS1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BookFRS1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		FRS2^ Frs2 = gcnew FRS2();
		Frs2->ShowDialog();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		CancelFRS^ CancelFrs = gcnew CancelFRS();
		CancelFrs->ShowDialog();
	}
};
}
