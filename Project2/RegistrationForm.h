#pragma once
#include <string>
#include "User.h"
#include <msclr/marshal_cppstd.h>


using namespace std;

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RegistrationForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
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
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ login_txtBox;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ password_txtBox;
	private: System::Windows::Forms::TextBox^ passwordCheck_txtBox;


	private: System::Windows::Forms::Label^ label3;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->passwordCheck_txtBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->password_txtBox = (gcnew System::Windows::Forms::TextBox());
			this->login_txtBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->passwordCheck_txtBox);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->password_txtBox);
			this->groupBox1->Controls->Add(this->login_txtBox);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(90, 81);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(311, 450);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Регистрация";
			// 
			// passwordCheck_txtBox
			// 
			this->passwordCheck_txtBox->Location = System::Drawing::Point(55, 276);
			this->passwordCheck_txtBox->Multiline = true;
			this->passwordCheck_txtBox->Name = L"passwordCheck_txtBox";
			this->passwordCheck_txtBox->Size = System::Drawing::Size(187, 30);
			this->passwordCheck_txtBox->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Повторите пароль:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 201);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Пароль:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Логин:";
			// 
			// password_txtBox
			// 
			this->password_txtBox->Location = System::Drawing::Point(55, 217);
			this->password_txtBox->Multiline = true;
			this->password_txtBox->Name = L"password_txtBox";
			this->password_txtBox->Size = System::Drawing::Size(187, 30);
			this->password_txtBox->TabIndex = 2;
			// 
			// login_txtBox
			// 
			this->login_txtBox->Location = System::Drawing::Point(55, 124);
			this->login_txtBox->Multiline = true;
			this->login_txtBox->Name = L"login_txtBox";
			this->login_txtBox->Size = System::Drawing::Size(187, 30);
			this->login_txtBox->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(55, 370);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Зарегистрироваться";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegistrationForm::button1_Click);
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(510, 617);
			this->Controls->Add(this->groupBox1);
			this->Name = L"RegistrationForm";
			this->Text = L"RegistrationForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		string username = msclr::interop::marshal_as<std::string>(login_txtBox->Text);
		string password = msclr::interop::marshal_as<std::string>(password_txtBox->Text);
		string check_password = msclr::interop::marshal_as<std::string>(passwordCheck_txtBox->Text);

		User newUser(username, password, "client");

		if (newUser.registerUser(username, password, check_password, "client"))
		{
			MessageBox::Show("Пользователь успешно зарегистрирован!");
			login_txtBox->Clear();
			password_txtBox->Clear();
			passwordCheck_txtBox->Clear();
		}
		else
		{
			MessageBox::Show("Пароли не совпадают!");
		}
	}
};
}
