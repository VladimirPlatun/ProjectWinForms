#pragma once

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
	private: System::Windows::Forms::GroupBox^ grpBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::TextBox^ textBoxLogin;
	private: System::Windows::Forms::Button^ registerButton;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->grpBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->grpBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// grpBox1
			// 
			this->grpBox1->Controls->Add(this->textBoxPassword);
			this->grpBox1->Controls->Add(this->textBoxLogin);
			this->grpBox1->Controls->Add(this->registerButton);
			this->grpBox1->Controls->Add(this->label2);
			this->grpBox1->Controls->Add(this->label1);
			this->grpBox1->Location = System::Drawing::Point(244, 118);
			this->grpBox1->Name = L"grpBox1";
			this->grpBox1->Size = System::Drawing::Size(388, 286);
			this->grpBox1->TabIndex = 0;
			this->grpBox1->TabStop = false;
			this->grpBox1->Text = L"Авторизация";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(175, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(175, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пароль";
			// 
			// registerButton
			// 
			this->registerButton->Location = System::Drawing::Point(95, 177);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(211, 34);
			this->registerButton->TabIndex = 2;
			this->registerButton->Text = L"Войти";
			this->registerButton->UseVisualStyleBackColor = true;
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Location = System::Drawing::Point(135, 63);
			this->textBoxLogin->Multiline = true;
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(127, 30);
			this->textBoxLogin->TabIndex = 3;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(135, 121);
			this->textBoxPassword->Multiline = true;
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(127, 30);
			this->textBoxPassword->TabIndex = 4;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 556);
			this->Controls->Add(this->grpBox1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->grpBox1->ResumeLayout(false);
			this->grpBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
