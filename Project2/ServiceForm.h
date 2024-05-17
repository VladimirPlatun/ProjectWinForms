#pragma once

#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <locale>
#include <codecvt>

#include "ServiceInfoForm.h"
#include "AddServiceForm.h"

using namespace std;

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ServiceForm
	/// </summary>
	public ref class ServiceForm : public System::Windows::Forms::Form
	{
	public:
		ServiceForm(void)
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
		~ServiceForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::DataGridView^ ServiceForm_dataGridViewServices;
	private: System::Windows::Forms::Button^ ServiceForm_AddService;

#pragma region Windows Form Designer generated code


	private: System::Windows::Forms::Button^ ServiceForm_LoadServicesButton;



		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ServiceForm_dataGridViewServices = (gcnew System::Windows::Forms::DataGridView());
			this->ServiceForm_LoadServicesButton = (gcnew System::Windows::Forms::Button());
			this->ServiceForm_AddService = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ServiceForm_dataGridViewServices))->BeginInit();
			this->SuspendLayout();
			// 
			// ServiceForm_dataGridViewServices
			// 
			this->ServiceForm_dataGridViewServices->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ServiceForm_dataGridViewServices->Location = System::Drawing::Point(12, 61);
			this->ServiceForm_dataGridViewServices->Name = L"ServiceForm_dataGridViewServices";
			this->ServiceForm_dataGridViewServices->Size = System::Drawing::Size(866, 386);
			this->ServiceForm_dataGridViewServices->TabIndex = 0;
			this->ServiceForm_dataGridViewServices->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ServiceForm::ServiceForm_dataGridViewServices_CellClick);
			// 
			// ServiceForm_LoadServicesButton
			// 
			this->ServiceForm_LoadServicesButton->Location = System::Drawing::Point(12, 12);
			this->ServiceForm_LoadServicesButton->Name = L"ServiceForm_LoadServicesButton";
			this->ServiceForm_LoadServicesButton->Size = System::Drawing::Size(100, 43);
			this->ServiceForm_LoadServicesButton->TabIndex = 1;
			this->ServiceForm_LoadServicesButton->Text = L"Загрузить услуги";
			this->ServiceForm_LoadServicesButton->UseVisualStyleBackColor = true;
			this->ServiceForm_LoadServicesButton->Click += gcnew System::EventHandler(this, &ServiceForm::btnLoadServices_Click);
			// 
			// ServiceForm_AddService
			// 
			this->ServiceForm_AddService->Location = System::Drawing::Point(118, 12);
			this->ServiceForm_AddService->Name = L"ServiceForm_AddService";
			this->ServiceForm_AddService->Size = System::Drawing::Size(100, 43);
			this->ServiceForm_AddService->TabIndex = 2;
			this->ServiceForm_AddService->Text = L"Добавить услугу";
			this->ServiceForm_AddService->UseVisualStyleBackColor = true;
			this->ServiceForm_AddService->Click += gcnew System::EventHandler(this, &ServiceForm::ServiceForm_AddService_Click);
			// 
			// ServiceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 556);
			this->Controls->Add(this->ServiceForm_AddService);
			this->Controls->Add(this->ServiceForm_LoadServicesButton);
			this->Controls->Add(this->ServiceForm_dataGridViewServices);
			this->Name = L"ServiceForm";
			this->Text = L"Service Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ServiceForm_dataGridViewServices))->EndInit();
			this->ResumeLayout(false);

		}

		void btnLoadServices_Click(System::Object^ sender, System::EventArgs^ e)
		{
			ifstream inputFile("services.txt");
			inputFile.imbue(std::locale(std::locale(), new std::codecvt_utf8<wchar_t>));

			if (!inputFile.is_open()) {
				MessageBox::Show("Ошибка открытия файла для чтения.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			ServiceForm_dataGridViewServices->Rows->Clear();
			ServiceForm_dataGridViewServices->Columns->Clear();

			// Определяем столбцы
			ServiceForm_dataGridViewServices->Columns->Add("ColumnName1", "Service Name");
			ServiceForm_dataGridViewServices->Columns->Add("ColumnName2", "Description");
			ServiceForm_dataGridViewServices->Columns->Add("ColumnName3", "Price");
			ServiceForm_dataGridViewServices->Columns->Add("ColumnName4", "Duration");
			ServiceForm_dataGridViewServices->DefaultCellStyle->Font = gcnew System::Drawing::Font("Calibri", 12);

			// Установка ширины столбцов (в пикселях)
			ServiceForm_dataGridViewServices->Columns["ColumnName1"]->Width = 200;
			ServiceForm_dataGridViewServices->Columns["ColumnName2"]->Width = 400;
			ServiceForm_dataGridViewServices->Columns["ColumnName3"]->Width = 100;
			ServiceForm_dataGridViewServices->Columns["ColumnName4"]->Width = 100;

			// Установка режима сортировки для каждого столбца
			for each (DataGridViewColumn ^ column in ServiceForm_dataGridViewServices->Columns)
			{
				column->SortMode = DataGridViewColumnSortMode::Automatic;
			}

			std::string line;
			while (std::getline(inputFile, line)) {
				std::istringstream iss(line);
				std::vector<std::string> tokens;
				std::string token;
				while (std::getline(iss, token, ',')) {
					tokens.push_back(token);
				}

				if (tokens.size() >= 4) {
					ArrayList^ rowValues = gcnew ArrayList();

					rowValues->Add(gcnew String(tokens[0].c_str()));
					rowValues->Add(gcnew String(tokens[1].c_str()));
					rowValues->Add(gcnew String(tokens[2].c_str()));
					rowValues->Add(gcnew String(tokens[3].c_str()));

					// Добавляем созданный ряд в DataGridView
					ServiceForm_dataGridViewServices->Rows->Add(rowValues->ToArray());
				}
				else {
					// Логика обработки случая, когда количество элементов меньше четырех
					// Например, добавление пустых строк или вывод сообщения об ошибке
					ArrayList^ emptyRowValues = gcnew ArrayList(); 
					emptyRowValues->Add("");
					emptyRowValues->Add("");
					emptyRowValues->Add("");
					emptyRowValues->Add("");

					ServiceForm_dataGridViewServices->Rows->Add(emptyRowValues->ToArray());
				}

			}

			inputFile.close();
		}
#pragma endregion
	private: System::Void ServiceForm_dataGridViewServices_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0)
		{
				String^ serviceName = ServiceForm_dataGridViewServices->Rows[e->RowIndex]->Cells["ColumnName1"]->Value->ToString();
			String^ description = ServiceForm_dataGridViewServices->Rows[e->RowIndex]->Cells["ColumnName2"]->Value->ToString();
			String^ price = ServiceForm_dataGridViewServices->Rows[e->RowIndex]->Cells["ColumnName3"]->Value->ToString();
			String^ duration = ServiceForm_dataGridViewServices->Rows[e->RowIndex]->Cells["ColumnName4"]->Value->ToString();

			ServiceInfoForm^ serviceInfoForm = gcnew ServiceInfoForm(serviceName, description, price, duration);

			// Установка начального положения окна вручную
			serviceInfoForm->StartPosition = FormStartPosition::Manual;

			int screenWidth = Screen::PrimaryScreen->WorkingArea.Width;
			int screenHeight = Screen::PrimaryScreen->WorkingArea.Height;
			int windowWidth = serviceInfoForm->Width;
			int windowHeight = serviceInfoForm->Height;

			int x = screenWidth - windowWidth - 250; // Сдвигаем окно на 250 пикселей от правой стороны экрана
			int y = (screenHeight - windowHeight) / 2; // Центрируем по вертикали

			serviceInfoForm->Location = Point(x, y);

			// Отображаем окно модально (поверх других окон)
			serviceInfoForm->ShowDialog();
		}
	}
	private: System::Void ServiceForm_AddService_Click(System::Object^ sender, System::EventArgs^ e) {
		
		AddServiceForm^ addServiceForm = gcnew AddServiceForm();
		addServiceForm->StartPosition = FormStartPosition::CenterScreen;
	
		addServiceForm->Show();
	}
};
}
