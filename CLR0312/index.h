#pragma once
#include "Zad1.h"
#include "zad2.h"
namespace CLR0312 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для index
	/// </summary>
	public ref class index : public System::Windows::Forms::Form
	{
	public:
		index(void)
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
		~index()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ bz2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(index::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bz2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(43, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 74);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Задание 1...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &index::button1_Click);
			// 
			// bz2
			// 
			this->bz2->Location = System::Drawing::Point(43, 131);
			this->bz2->Name = L"bz2";
			this->bz2->Size = System::Drawing::Size(182, 83);
			this->bz2->TabIndex = 1;
			this->bz2->Text = L"Задание 2";
			this->bz2->UseVisualStyleBackColor = true;
			this->bz2->Click += gcnew System::EventHandler(this, &index::bz2_Click);
			// 
			// index
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(661, 537);
			this->Controls->Add(this->bz2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"index";
			this->Text = L"Главное окно";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Zad1 eva;
		eva.ShowDialog();
	}
	private: System::Void bz2_Click(System::Object^ sender, System::EventArgs^ e) {
		zad2 z2;
		z2.ShowDialog();
	}
	};
}
