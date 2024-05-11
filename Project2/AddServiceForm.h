#pragma once

#include <string>
#include <fstream>
#include <sstream> 
#include <msclr\marshal_cppstd.h>
#include "Service.h"
#include <vcclr.h> 

namespace Project2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class AddServiceForm : public System::Windows::Forms::Form
    {
    public:
        AddServiceForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~AddServiceForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::TextBox^ txtName;
    private: System::Windows::Forms::TextBox^ txtDescription;
    private: System::Windows::Forms::TextBox^ txtPrice;
    private: System::Windows::Forms::TextBox^ txtDuration;
    private: System::Windows::Forms::Button^ btnAddService;
    private: System::Windows::Forms::Label^ lblName;
    private: System::Windows::Forms::Label^ lblDescription;
    private: System::Windows::Forms::Label^ lblPrice;
    private: System::Windows::Forms::Label^ lblDuration;
    private: System::Windows::Forms::Label^ lblMessage;
    private: System::Windows::Forms::PictureBox^ pictureBox1; // Добавлен PictureBox
    private: System::Windows::Forms::Button^ btnSelectImage; // Добавлена кнопка выбора изображения

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->txtName = (gcnew System::Windows::Forms::TextBox());
            this->txtDescription = (gcnew System::Windows::Forms::TextBox());
            this->txtPrice = (gcnew System::Windows::Forms::TextBox());
            this->txtDuration = (gcnew System::Windows::Forms::TextBox());
            this->btnAddService = (gcnew System::Windows::Forms::Button());
            this->lblName = (gcnew System::Windows::Forms::Label());
            this->lblDescription = (gcnew System::Windows::Forms::Label());
            this->lblPrice = (gcnew System::Windows::Forms::Label());
            this->lblDuration = (gcnew System::Windows::Forms::Label());
            this->lblMessage = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox()); // Инициализация PictureBox
            this->btnSelectImage = (gcnew System::Windows::Forms::Button()); // Инициализация кнопки выбора изображения
            this->SuspendLayout();
            // 
            // txtName
            // 
            this->txtName->Location = System::Drawing::Point(138, 32);
            this->txtName->Name = L"txtName";
            this->txtName->Size = System::Drawing::Size(157, 20);
            this->txtName->TabIndex = 0;
            // 
            // txtDescription
            // 
            this->txtDescription->Location = System::Drawing::Point(138, 72);
            this->txtDescription->Multiline = true;
            this->txtDescription->Name = L"txtDescription";
            this->txtDescription->Size = System::Drawing::Size(157, 63);
            this->txtDescription->TabIndex = 1;
            // 
            // txtPrice
            // 
            this->txtPrice->Location = System::Drawing::Point(138, 155);
            this->txtPrice->Name = L"txtPrice";
            this->txtPrice->Size = System::Drawing::Size(157, 20);
            this->txtPrice->TabIndex = 2;
            // 
            // txtDuration
            // 
            this->txtDuration->Location = System::Drawing::Point(138, 195);
            this->txtDuration->Name = L"txtDuration";
            this->txtDuration->Size = System::Drawing::Size(157, 20);
            this->txtDuration->TabIndex = 3;
            // 
            // btnAddService
            // 
            this->btnAddService->Location = System::Drawing::Point(138, 245);
            this->btnAddService->Name = L"btnAddService";
            this->btnAddService->Size = System::Drawing::Size(157, 23);
            this->btnAddService->TabIndex = 4;
            this->btnAddService->Text = L"Add Service";
            this->btnAddService->UseVisualStyleBackColor = true;
            this->btnAddService->Click += gcnew System::EventHandler(this, &AddServiceForm::btnAddService_Click);
            // 
            // lblName
            // 
            this->lblName->AutoSize = true;
            this->lblName->Location = System::Drawing::Point(50, 35);
            this->lblName->Name = L"lblName";
            this->lblName->Size = System::Drawing::Size(38, 13);
            this->lblName->TabIndex = 5;
            this->lblName->Text = L"Name:";
            // 
            // lblDescription
            // 
            this->lblDescription->AutoSize = true;
            this->lblDescription->Location = System::Drawing::Point(50, 75);
            this->lblDescription->Name = L"lblDescription";
            this->lblDescription->Size = System::Drawing::Size(63, 13);
            this->lblDescription->TabIndex = 6;
            this->lblDescription->Text = L"Description:";
            // 
            // lblPrice
            // 
            this->lblPrice->AutoSize = true;
            this->lblPrice->Location = System::Drawing::Point(50, 158);
            this->lblPrice->Name = L"lblPrice";
            this->lblPrice->Size = System::Drawing::Size(34, 13);
            this->lblPrice->TabIndex = 7;
            this->lblPrice->Text = L"Price:";
            // 
            // lblDuration
            // 
            this->lblDuration->AutoSize = true;
            this->lblDuration->Location = System::Drawing::Point(50, 198);
            this->lblDuration->Name = L"lblDuration";
            this->lblDuration->Size = System::Drawing::Size(50, 13);
            this->lblDuration->TabIndex = 8;
            this->lblDuration->Text = L"Duration:";
            // 
            // lblMessage
            // 
            this->lblMessage->AutoSize = true;
            this->lblMessage->ForeColor = System::Drawing::Color::Red;
            this->lblMessage->Location = System::Drawing::Point(50, 287);
            this->lblMessage->Name = L"lblMessage";
            this->lblMessage->Size = System::Drawing::Size(0, 13);
            this->lblMessage->TabIndex = 9;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(320, 32);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(85, 85);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 10;
            this->pictureBox1->TabStop = false;
            // 
            // btnSelectImage
            // 
            this->btnSelectImage->Location = System::Drawing::Point(320, 123);
            this->btnSelectImage->Name = L"btnSelectImage";
            this->btnSelectImage->Size = System::Drawing::Size(85, 23);
            this->btnSelectImage->TabIndex = 11;
            this->btnSelectImage->Text = L"Select Image";
            this->btnSelectImage->UseVisualStyleBackColor = true;
            this->btnSelectImage->Click += gcnew System::EventHandler(this, &AddServiceForm::btnSelectImage_Click);
            // 
            // AddServiceForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(447, 337);
            this->Controls->Add(this->btnSelectImage);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->lblMessage);
            this->Controls->Add(this->lblDuration);
            this->Controls->Add(this->lblPrice);
            this->Controls->Add(this->lblDescription);
            this->Controls->Add(this->lblName);
            this->Controls->Add(this->btnAddService);
            this->Controls->Add(this->txtDuration);
            this->Controls->Add(this->txtPrice);
            this->Controls->Add(this->txtDescription);
            this->Controls->Add(this->txtName);
            this->Name = L"AddServiceForm";
            this->Text = L"Add Service";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: bool IsNumeric(String^ str)
    {
        for each (char c in str) {
            if (!Char::IsDigit(c)) {
                return false;
            }
        }
        return true;
    }

    private: bool ServiceExists(String^ serviceName)
    {
        std::ifstream file("services.txt");
        if (file.is_open()) {
            std::string line;
            while (getline(file, line)) {
                std::istringstream iss(line);
                std::string token;
                getline(iss, token, ',');

                String^ service = gcnew String(token.c_str());
                if (service->Equals(serviceName)) {
                    file.close();
                    return true;
                }
            }
            file.close();
        }
        return false;
    }

    private: bool IsNumericString(String^ str) {
        for each (char c in str) {
            if (Char::IsLetter(c)) {
                return false;
            }
        }
        return true;
    }


    private: System::Void btnAddService_Click(System::Object^ sender, System::EventArgs^ e) {

        String^ name = txtName->Text;
        String^ description = txtDescription->Text;
        String^ priceStr = txtPrice->Text;
        String^ durationStr = txtDuration->Text;

        // Проверяем, не ввел ли пользователь буквы в поля для цифр
        if (!IsNumeric(priceStr) || !IsNumeric(durationStr)) {
            lblMessage->Text = "Please enter numeric values for price and duration.";
            return;
        }

        // Проверяем, не состоят ли название услуги и описание только из цифр
        if (IsNumericString(name) || IsNumericString(description)) {
            lblMessage->Text = "Service name and description cannot consist only of numbers.";
            return;
        }

        // Проверяем, существует ли уже такая услуга
        if (ServiceExists(name)) {
            lblMessage->Text = "Service already exists.";
            return;
        }

        float price = Convert::ToSingle(priceStr);
        int duration = Convert::ToInt32(durationStr);

        StreamWriter^ file = gcnew StreamWriter("services.txt", true);

        if (file != nullptr) {

            file->WriteLine(name + "," + description + "," + price + "," + duration);

            file->Close();


            lblMessage->ForeColor = System::Drawing::Color::Green;
            lblMessage->Text = "Service added successfully.";

            this->Close();
        }
        else {

            lblMessage->ForeColor = System::Drawing::Color::Red;
            lblMessage->Text = "Failed to add service.";
        }
    }


  private: System::Void btnSelectImage_Click(System::Object^ sender, System::EventArgs^ e) {

      OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

      openFileDialog1->Filter = "Image Files|*.jpg;*.jpeg;*.png;*.bmp|All Files (*.*)|*.*";

      // Открываем диалоговое окно выбора файла
      if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
          // Получаем путь к выбранному файлу
          String^ imagePath = openFileDialog1->FileName;

          try {
              // Загружаем изображение из файла
              pictureBox1->Image = Image::FromFile(imagePath);

              // Путь к папке, где будут храниться изображения
              String^ imageFolder = "Images";

              // Проверяем, существует ли папка "Images", если нет, то создаем ее
              if (!Directory::Exists(imageFolder)) {
                  Directory::CreateDirectory(imageFolder);
              }

              // Получаем имя выбранного файла
              String^ fileName = Path::GetFileName(imagePath);

              // Получаем название услуги из текстового поля
              String^ serviceName = txtName->Text;

              // Формируем новое имя файла, состоящее из названия услуги и расширения
              String^ newFileName = serviceName + Path::GetExtension(fileName);

              // Составляем путь для сохранения изображения
              String^ savePath = Path::Combine(imageFolder, newFileName);

              // Копируем выбранное изображение в папку "Images" с новым именем
              File::Copy(imagePath, savePath);

              // Отображаем сообщение об успешном сохранении
              MessageBox::Show("Image saved successfully to: " + savePath, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
          }
          catch (Exception^ ex) {
              // Если произошла ошибка загрузки изображения, выводим сообщение об ошибке
              MessageBox::Show("Error loading image: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
          }
      }
  }



    };
}
