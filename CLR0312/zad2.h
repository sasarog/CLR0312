#pragma once

namespace CLR0312 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ zad2
	/// </summary>
	public ref class zad2 : public System::Windows::Forms::Form
	{
	public:
		zad2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~zad2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lс1;
	protected:
	private: System::Windows::Forms::Button^ bReshenie;
	private: System::Windows::Forms::TextBox^ tb1;
	private: System::Windows::Forms::TextBox^ tb2;
	private: System::Windows::Forms::Label^ lc2;
	private: System::Windows::Forms::Label^ lResult;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lс1 = (gcnew System::Windows::Forms::Label());
			this->bReshenie = (gcnew System::Windows::Forms::Button());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->tb2 = (gcnew System::Windows::Forms::TextBox());
			this->lc2 = (gcnew System::Windows::Forms::Label());
			this->lResult = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lс1
			// 
			this->lс1->AutoSize = true;
			this->lс1->Location = System::Drawing::Point(47, 41);
			this->lс1->Name = L"lс1";
			this->lс1->Size = System::Drawing::Size(57, 16);
			this->lс1->TabIndex = 0;
			this->lс1->Text = L"„исло 1";
			// 
			// bReshenie
			// 
			this->bReshenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bReshenie->Location = System::Drawing::Point(50, 125);
			this->bReshenie->Name = L"bReshenie";
			this->bReshenie->Size = System::Drawing::Size(412, 62);
			this->bReshenie->TabIndex = 1;
			this->bReshenie->Text = L"«рабиць";
			this->bReshenie->UseVisualStyleBackColor = true;
			this->bReshenie->Click += gcnew System::EventHandler(this, &zad2::bReshenie_Click);
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(50, 61);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(100, 22);
			this->tb1->TabIndex = 2;
			// 
			// tb2
			// 
			this->tb2->Location = System::Drawing::Point(254, 61);
			this->tb2->Name = L"tb2";
			this->tb2->Size = System::Drawing::Size(100, 22);
			this->tb2->TabIndex = 4;
			// 
			// lc2
			// 
			this->lc2->AutoSize = true;
			this->lc2->Location = System::Drawing::Point(251, 41);
			this->lc2->Name = L"lc2";
			this->lc2->Size = System::Drawing::Size(57, 16);
			this->lc2->TabIndex = 3;
			this->lc2->Text = L"„исло 2";
			// 
			// lResult
			// 
			this->lResult->AutoSize = true;
			this->lResult->Location = System::Drawing::Point(50, 209);
			this->lResult->Name = L"lResult";
			this->lResult->Size = System::Drawing::Size(0, 16);
			this->lResult->TabIndex = 5;
			// 
			// zad2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 315);
			this->Controls->Add(this->lResult);
			this->Controls->Add(this->tb2);
			this->Controls->Add(this->lc2);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->bReshenie);
			this->Controls->Add(this->lс1);
			this->Name = L"zad2";
			this->Text = L"zad2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bReshenie_Click(System::Object^ sender, System::EventArgs^ e) {
		double c1 = Convert::ToDouble(tb1->Text);
		double c2 = Convert::ToDouble(tb2->Text);


	}
};
}
