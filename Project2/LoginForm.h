#pragma once
#include "RegistrationForm.h"
#include "ServiceForm.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ LoginForm_AuthorizationGrpBox;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ LoginForm_textBoxPassword;
	protected:

	private: System::Windows::Forms::TextBox^ LoginForm_textBoxLogin;
	private: System::Windows::Forms::Button^ LoginForm_loginButton;
	private: System::Windows::Forms::Label^ LoginForm_passwordLabel;




	private: System::Windows::Forms::Label^ LoginForm_loginLable;

	private: System::Windows::Forms::Button^ LoginForm_registrationButton;



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
			this->LoginForm_AuthorizationGrpBox = (gcnew System::Windows::Forms::GroupBox());
			this->LoginForm_registrationButton = (gcnew System::Windows::Forms::Button());
			this->LoginForm_textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->LoginForm_textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->LoginForm_loginButton = (gcnew System::Windows::Forms::Button());
			this->LoginForm_passwordLabel = (gcnew System::Windows::Forms::Label());
			this->LoginForm_loginLable = (gcnew System::Windows::Forms::Label());
			this->LoginForm_AuthorizationGrpBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// LoginForm_AuthorizationGrpBox
			// 
			this->LoginForm_AuthorizationGrpBox->Controls->Add(this->LoginForm_registrationButton);
			this->LoginForm_AuthorizationGrpBox->Controls->Add(this->LoginForm_textBoxPassword);
			this->LoginForm_AuthorizationGrpBox->Controls->Add(this->LoginForm_textBoxLogin);
			this->LoginForm_AuthorizationGrpBox->Controls->Add(this->LoginForm_loginButton);
			this->LoginForm_AuthorizationGrpBox->Controls->Add(this->LoginForm_passwordLabel);
			this->LoginForm_AuthorizationGrpBox->Controls->Add(this->LoginForm_loginLable);
			this->LoginForm_AuthorizationGrpBox->Location = System::Drawing::Point(244, 118);
			this->LoginForm_AuthorizationGrpBox->Name = L"LoginForm_AuthorizationGrpBox";
			this->LoginForm_AuthorizationGrpBox->Size = System::Drawing::Size(388, 286);
			this->LoginForm_AuthorizationGrpBox->TabIndex = 0;
			this->LoginForm_AuthorizationGrpBox->TabStop = false;
			this->LoginForm_AuthorizationGrpBox->Text = L"Авторизация";
			// 
			// LoginForm_registrationButton
			// 
			this->LoginForm_registrationButton->Location = System::Drawing::Point(95, 232);
			this->LoginForm_registrationButton->Name = L"LoginForm_registrationButton";
			this->LoginForm_registrationButton->Size = System::Drawing::Size(211, 33);
			this->LoginForm_registrationButton->TabIndex = 5;
			this->LoginForm_registrationButton->Text = L"Зарегистрироваться";
			this->LoginForm_registrationButton->UseVisualStyleBackColor = true;
			this->LoginForm_registrationButton->Click += gcnew System::EventHandler(this, &LoginForm::LoginForm_registrationButton_Click);
			// 
			// LoginForm_textBoxPassword
			// 
			this->LoginForm_textBoxPassword->Location = System::Drawing::Point(135, 121);
			this->LoginForm_textBoxPassword->Multiline = true;
			this->LoginForm_textBoxPassword->Name = L"LoginForm_textBoxPassword";
			this->LoginForm_textBoxPassword->Size = System::Drawing::Size(127, 30);
			this->LoginForm_textBoxPassword->TabIndex = 4;
			// 
			// LoginForm_textBoxLogin
			// 
			this->LoginForm_textBoxLogin->Location = System::Drawing::Point(135, 63);
			this->LoginForm_textBoxLogin->Multiline = true;
			this->LoginForm_textBoxLogin->Name = L"LoginForm_textBoxLogin";
			this->LoginForm_textBoxLogin->Size = System::Drawing::Size(127, 30);
			this->LoginForm_textBoxLogin->TabIndex = 3;
			// 
			// LoginForm_loginButton
			// 
			this->LoginForm_loginButton->Location = System::Drawing::Point(95, 177);
			this->LoginForm_loginButton->Name = L"LoginForm_loginButton";
			this->LoginForm_loginButton->Size = System::Drawing::Size(211, 34);
			this->LoginForm_loginButton->TabIndex = 2;
			this->LoginForm_loginButton->Text = L"Войти";
			this->LoginForm_loginButton->UseVisualStyleBackColor = true;
			this->LoginForm_loginButton->Click += gcnew System::EventHandler(this, &LoginForm::LoginForm_loginButton_Click);
			// 
			// LoginForm_passwordLabel
			// 
			this->LoginForm_passwordLabel->AutoSize = true;
			this->LoginForm_passwordLabel->Location = System::Drawing::Point(175, 105);
			this->LoginForm_passwordLabel->Name = L"LoginForm_passwordLabel";
			this->LoginForm_passwordLabel->Size = System::Drawing::Size(45, 13);
			this->LoginForm_passwordLabel->TabIndex = 1;
			this->LoginForm_passwordLabel->Text = L"Пароль";
			// 
			// LoginForm_loginLable
			// 
			this->LoginForm_loginLable->AutoSize = true;
			this->LoginForm_loginLable->Location = System::Drawing::Point(175, 47);
			this->LoginForm_loginLable->Name = L"LoginForm_loginLable";
			this->LoginForm_loginLable->Size = System::Drawing::Size(38, 13);
			this->LoginForm_loginLable->TabIndex = 0;
			this->LoginForm_loginLable->Text = L"Логин";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 556);
			this->Controls->Add(this->LoginForm_AuthorizationGrpBox);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->LoginForm_AuthorizationGrpBox->ResumeLayout(false);
			this->LoginForm_AuthorizationGrpBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		Form^ currentForm = nullptr;


	private: System::Void LoginForm_registrationButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LoginForm_registrationButton->Enabled = false;
		RegistrationForm^ Registration_Form = gcnew RegistrationForm();
		Registration_Form->Show();
	}
	private: System::Void LoginForm_loginButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ temp_username = LoginForm_textBoxLogin->Text;
		String^ temp_password = LoginForm_textBoxPassword->Text;

		string username = msclr::interop::marshal_as<string>(LoginForm_textBoxLogin->Text);
		string password = msclr::interop::marshal_as<string>(LoginForm_textBoxPassword->Text);

		
		if (String::IsNullOrWhiteSpace(temp_username))
		{
			MessageBox::Show("Поле логина не может быть пустым!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (String::IsNullOrWhiteSpace(temp_password))
		{
			MessageBox::Show("Поле пароля не может быть пустым!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (!FileManager::userExists("users.txt", username))
		{
			MessageBox::Show("Пользователя с таким именем не существует", "Ошибка входа", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (FileManager::validateUserCredentials("users.txt", username, password))
		{
			MessageBox::Show("Вход успешен!", "Авторизация", MessageBoxButtons::OK, MessageBoxIcon::Information);


			ServiceForm^ service_Form = gcnew ServiceForm();
			service_Form->StartPosition = FormStartPosition::CenterScreen;
			service_Form->ShowDialog();

		}
		else
		{
			MessageBox::Show("Неверное имя пользователя или пароль", "Ошибка входа", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
