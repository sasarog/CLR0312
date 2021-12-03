#pragma once

namespace CLR0312 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Zad1
	/// </summary>
	public ref class Zad1 : public System::Windows::Forms::Form
	{
	public:
		Zad1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Zad1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ SPID1;
	private: System::Windows::Forms::TextBox^ SPID2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ powerRanger;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ reshala;
	private: System::Windows::Forms::TextBox^ tbTime;
	private: System::Windows::Forms::Label^ label4;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Zad1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SPID1 = (gcnew System::Windows::Forms::TextBox());
			this->SPID2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->powerRanger = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->reshala = (gcnew System::Windows::Forms::Button());
			this->tbTime = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Скорость первой машины";
			// 
			// SPID1
			// 
			this->SPID1->Location = System::Drawing::Point(32, 59);
			this->SPID1->Name = L"SPID1";
			this->SPID1->Size = System::Drawing::Size(100, 22);
			this->SPID1->TabIndex = 1;
			// 
			// SPID2
			// 
			this->SPID2->Location = System::Drawing::Point(281, 59);
			this->SPID2->Name = L"SPID2";
			this->SPID2->Size = System::Drawing::Size(100, 22);
			this->SPID2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(278, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Скорость второй машины";
			// 
			// powerRanger
			// 
			this->powerRanger->Location = System::Drawing::Point(526, 59);
			this->powerRanger->Name = L"powerRanger";
			this->powerRanger->Size = System::Drawing::Size(100, 22);
			this->powerRanger->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(523, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Расстояние между ними";
			// 
			// reshala
			// 
			this->reshala->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reshala->Location = System::Drawing::Point(123, 132);
			this->reshala->Name = L"reshala";
			this->reshala->Size = System::Drawing::Size(473, 99);
			this->reshala->TabIndex = 6;
			this->reshala->Text = L"Решала";
			this->reshala->UseVisualStyleBackColor = true;
			this->reshala->Click += gcnew System::EventHandler(this, &Zad1::reshala_Click);
			// 
			// tbTime
			// 
			this->tbTime->Location = System::Drawing::Point(654, 165);
			this->tbTime->Name = L"tbTime";
			this->tbTime->Size = System::Drawing::Size(100, 22);
			this->tbTime->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(651, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(165, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Расстояние между ними";
			// 
			// Zad1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(850, 323);
			this->Controls->Add(this->tbTime);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->reshala);
			this->Controls->Add(this->powerRanger);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->SPID2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->SPID1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Zad1";
			this->Text = L"Zad1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void reshala_Click(System::Object^ sender, System::EventArgs^ e) {
		double spid1, spid2, rasst, time;
		try {
			spid1 = Convert::ToDouble(SPID1->Text);
			spid2 = Convert::ToDouble(SPID2->Text);
			rasst = Convert::ToDouble(powerRanger->Text);
			time = Convert::ToDouble(tbTime->Text);
		}
		catch (FormatException^ ex) {
			MessageBox::Show("You are DAWN!", "GOGOL");
			return ;
		}
		if (time >= 0) {
			rasst += spid1 * time + spid2 * time;
			powerRanger->Text = rasst.ToString();
		}
		else {
			MessageBox::Show("You are DAWN!\nВремя не может быть отрицательным", "GOGOL");
			return;
		}
	}
};
}
