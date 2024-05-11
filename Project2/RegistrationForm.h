#pragma once
#include <string>

#include "User.h"
#include "FileManager.h"

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
	private: System::Windows::Forms::GroupBox^ RegistrationForm_registrationGrpBox;
	private: System::Windows::Forms::TextBox^ RegistrationForm_loginTxtBox;
	private: System::Windows::Forms::Button^ RegistrationForm_registrationButton;
	protected:


	protected:


	private: System::Windows::Forms::Label^ RegistrationForm_passwordLabel;

	private: System::Windows::Forms::Label^ RegistrationForm_loginLabel;
	private: System::Windows::Forms::TextBox^ RegistrationForm_passwordTxtBox;
	private: System::Windows::Forms::TextBox^ RegistrationForm_passwordCheckTxtBox;



	private: System::Windows::Forms::Label^ RegistrationForm_checkPasswordLabel;




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
			this->RegistrationForm_registrationGrpBox = (gcnew System::Windows::Forms::GroupBox());
			this->RegistrationForm_passwordCheckTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->RegistrationForm_checkPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->RegistrationForm_passwordLabel = (gcnew System::Windows::Forms::Label());
			this->RegistrationForm_loginLabel = (gcnew System::Windows::Forms::Label());
			this->RegistrationForm_passwordTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->RegistrationForm_loginTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->RegistrationForm_registrationButton = (gcnew System::Windows::Forms::Button());
			this->RegistrationForm_registrationGrpBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// RegistrationForm_registrationGrpBox
			// 
			this->RegistrationForm_registrationGrpBox->Controls->Add(this->RegistrationForm_passwordCheckTxtBox);
			this->RegistrationForm_registrationGrpBox->Controls->Add(this->RegistrationForm_checkPasswordLabel);
			this->RegistrationForm_registrationGrpBox->Controls->Add(this->RegistrationForm_passwordLabel);
			this->RegistrationForm_registrationGrpBox->Controls->Add(this->RegistrationForm_loginLabel);
			this->RegistrationForm_registrationGrpBox->Controls->Add(this->RegistrationForm_passwordTxtBox);
			this->RegistrationForm_registrationGrpBox->Controls->Add(this->RegistrationForm_loginTxtBox);
			this->RegistrationForm_registrationGrpBox->Controls->Add(this->RegistrationForm_registrationButton);
			this->RegistrationForm_registrationGrpBox->Location = System::Drawing::Point(90, 81);
			this->RegistrationForm_registrationGrpBox->Name = L"RegistrationForm_registrationGrpBox";
			this->RegistrationForm_registrationGrpBox->Size = System::Drawing::Size(311, 450);
			this->RegistrationForm_registrationGrpBox->TabIndex = 0;
			this->RegistrationForm_registrationGrpBox->TabStop = false;
			this->RegistrationForm_registrationGrpBox->Text = L"Регистрация";
			// 
			// RegistrationForm_passwordCheckTxtBox
			// 
			this->RegistrationForm_passwordCheckTxtBox->Location = System::Drawing::Point(55, 276);
			this->RegistrationForm_passwordCheckTxtBox->Multiline = true;
			this->RegistrationForm_passwordCheckTxtBox->Name = L"RegistrationForm_passwordCheckTxtBox";
			this->RegistrationForm_passwordCheckTxtBox->Size = System::Drawing::Size(187, 30);
			this->RegistrationForm_passwordCheckTxtBox->TabIndex = 6;
			// 
			// RegistrationForm_checkPasswordLabel
			// 
			this->RegistrationForm_checkPasswordLabel->AutoSize = true;
			this->RegistrationForm_checkPasswordLabel->Location = System::Drawing::Point(52, 260);
			this->RegistrationForm_checkPasswordLabel->Name = L"RegistrationForm_checkPasswordLabel";
			this->RegistrationForm_checkPasswordLabel->Size = System::Drawing::Size(103, 13);
			this->RegistrationForm_checkPasswordLabel->TabIndex = 5;
			this->RegistrationForm_checkPasswordLabel->Text = L"Повторите пароль:";
			// 
			// RegistrationForm_passwordLabel
			// 
			this->RegistrationForm_passwordLabel->AutoSize = true;
			this->RegistrationForm_passwordLabel->Location = System::Drawing::Point(52, 201);
			this->RegistrationForm_passwordLabel->Name = L"RegistrationForm_passwordLabel";
			this->RegistrationForm_passwordLabel->Size = System::Drawing::Size(48, 13);
			this->RegistrationForm_passwordLabel->TabIndex = 4;
			this->RegistrationForm_passwordLabel->Text = L"Пароль:";
			// 
			// RegistrationForm_loginLabel
			// 
			this->RegistrationForm_loginLabel->AutoSize = true;
			this->RegistrationForm_loginLabel->Location = System::Drawing::Point(52, 108);
			this->RegistrationForm_loginLabel->Name = L"RegistrationForm_loginLabel";
			this->RegistrationForm_loginLabel->Size = System::Drawing::Size(41, 13);
			this->RegistrationForm_loginLabel->TabIndex = 3;
			this->RegistrationForm_loginLabel->Text = L"Логин:";
			// 
			// RegistrationForm_passwordTxtBox
			// 
			this->RegistrationForm_passwordTxtBox->Location = System::Drawing::Point(55, 217);
			this->RegistrationForm_passwordTxtBox->Multiline = true;
			this->RegistrationForm_passwordTxtBox->Name = L"RegistrationForm_passwordTxtBox";
			this->RegistrationForm_passwordTxtBox->Size = System::Drawing::Size(187, 30);
			this->RegistrationForm_passwordTxtBox->TabIndex = 2;
			// 
			// RegistrationForm_loginTxtBox
			// 
			this->RegistrationForm_loginTxtBox->Location = System::Drawing::Point(55, 124);
			this->RegistrationForm_loginTxtBox->Multiline = true;
			this->RegistrationForm_loginTxtBox->Name = L"RegistrationForm_loginTxtBox";
			this->RegistrationForm_loginTxtBox->Size = System::Drawing::Size(187, 30);
			this->RegistrationForm_loginTxtBox->TabIndex = 1;
			// 
			// RegistrationForm_registrationButton
			// 
			this->RegistrationForm_registrationButton->Location = System::Drawing::Point(55, 370);
			this->RegistrationForm_registrationButton->Name = L"RegistrationForm_registrationButton";
			this->RegistrationForm_registrationButton->Size = System::Drawing::Size(187, 30);
			this->RegistrationForm_registrationButton->TabIndex = 0;
			this->RegistrationForm_registrationButton->Text = L"Зарегистрироваться";
			this->RegistrationForm_registrationButton->UseVisualStyleBackColor = true;
			this->RegistrationForm_registrationButton->Click += gcnew System::EventHandler(this, &RegistrationForm::RegistrationForm_registrationButton_Click);
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(510, 617);
			this->Controls->Add(this->RegistrationForm_registrationGrpBox);
			this->Name = L"RegistrationForm";
			this->Text = L"RegistrationForm";
			this->RegistrationForm_registrationGrpBox->ResumeLayout(false);
			this->RegistrationForm_registrationGrpBox->PerformLayout();
			this->ResumeLayout(false);

		}
private: System::Void RegistrationForm_registrationButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		string username = msclr::interop::marshal_as<std::string>(RegistrationForm_loginTxtBox->Text);
		string password = msclr::interop::marshal_as<std::string>(RegistrationForm_passwordTxtBox->Text);
		string check_password = msclr::interop::marshal_as<std::string>(RegistrationForm_passwordCheckTxtBox->Text);

		User newUser;
		string result = newUser.registerUser(username, password, check_password, "client");
		if (result == "success")
		{
			MessageBox::Show("Пользователь успешно зарегистрирован!");
			RegistrationForm_loginTxtBox->Clear();
			RegistrationForm_passwordTxtBox->Clear();
			RegistrationForm_passwordCheckTxtBox->Clear();
		}
		else
		{
			MessageBox::Show(msclr::interop::marshal_as<System::String^>(result));
		}
	}
};
}
