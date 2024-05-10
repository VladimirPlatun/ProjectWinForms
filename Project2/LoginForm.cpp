#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(cli::array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project2::LoginForm^ form = gcnew Project2::LoginForm();

	Application::Run(form);
}