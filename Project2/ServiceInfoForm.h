#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ServiceInfoForm
	/// </summary>
	public ref class ServiceInfoForm : public System::Windows::Forms::Form
	{
	public:
		ServiceInfoForm(String^ serviceName, String^ description, String^ price, String^ duration)
		{
			InitializeComponent();

			labelServiceName->Text = serviceName;
			labelDescription->Text = description;

			labelDescription->AutoSize = true;
			labelDescription->MaximumSize = System::Drawing::Size(300, 0); 

			labelPrice->Text = price;
			labelDuration->Text = duration;

			this->Text = "Service Info: " + serviceName;
			
			System::String^ path = "Images\\" + serviceName;
			cli::array<System::String^>^ extensions = { ".jpg", ".jpeg", ".png", ".bmp" };


			// Перебираем поддерживаемые расширения и пытаемся загрузить изображение
			for each (String ^ extension in extensions)
			{
				String^ imagePath = path + extension;

				// Проверяем, существует ли файл
				if (System::IO::File::Exists(imagePath))
				{
					// Если файл существует, загружаем изображение
					try
					{
						// Открываем файл и загружаем изображение
						System::IO::FileStream^ fileStream = gcnew System::IO::FileStream(imagePath, System::IO::FileMode::Open);
						pictureBox->Image = Image::FromStream(fileStream);
						fileStream->Close(); // Закрываем поток файла
						break; // Прерываем цикл, если изображение загружено успешно
					}
					catch (Exception^ ex)
					{
						// В случае ошибки загрузки изображения, выводим сообщение об ошибке
						MessageBox::Show("Ошибка загрузки изображения: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
			}

			// Если изображение не было загружено, устанавливаем изображение по умолчанию
			if (pictureBox->Image == nullptr)
			{
				pictureBox->Image = Image::FromFile("Images\\services.jpg");
			}






		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ServiceInfoForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ labelServiceName;
	private: System::Windows::Forms::Label^ labelPrice;
	protected:

	private: System::Windows::Forms::Label^ labelDescription;
	private: System::Windows::Forms::Label^ labelDuration;
	private: System::Windows::Forms::Label^ labeServiceNameText;
	private: System::Windows::Forms::Label^ labeDurationText;


	private: System::Windows::Forms::Label^ labePriceText;

	private: System::Windows::Forms::Label^ labeDescriptionText;
	private: System::Windows::Forms::PictureBox^ pictureBox;


	private: System::ComponentModel::IContainer^ components;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelServiceName = (gcnew System::Windows::Forms::Label());
			this->labelPrice = (gcnew System::Windows::Forms::Label());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->labelDuration = (gcnew System::Windows::Forms::Label());
			this->labeServiceNameText = (gcnew System::Windows::Forms::Label());
			this->labeDurationText = (gcnew System::Windows::Forms::Label());
			this->labePriceText = (gcnew System::Windows::Forms::Label());
			this->labeDescriptionText = (gcnew System::Windows::Forms::Label());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// labelServiceName
			// 
			this->labelServiceName->AutoSize = true;
			this->labelServiceName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelServiceName->Location = System::Drawing::Point(90, 11);
			this->labelServiceName->Name = L"labelServiceName";
			this->labelServiceName->Size = System::Drawing::Size(0, 20);
			this->labelServiceName->TabIndex = 0;
			// 
			// labelPrice
			// 
			this->labelPrice->AutoSize = true;
			this->labelPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice->Location = System::Drawing::Point(76, 233);
			this->labelPrice->Name = L"labelPrice";
			this->labelPrice->Size = System::Drawing::Size(0, 20);
			this->labelPrice->TabIndex = 1;
			// 
			// labelDescription
			// 
			this->labelDescription->AutoSize = true;
			this->labelDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDescription->Location = System::Drawing::Point(12, 62);
			this->labelDescription->Name = L"labelDescription";
			this->labelDescription->Size = System::Drawing::Size(0, 20);
			this->labelDescription->TabIndex = 2;
			// 
			// labelDuration
			// 
			this->labelDuration->AutoSize = true;
			this->labelDuration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDuration->Location = System::Drawing::Point(150, 264);
			this->labelDuration->Name = L"labelDuration";
			this->labelDuration->Size = System::Drawing::Size(0, 20);
			this->labelDuration->TabIndex = 3;
			// 
			// labeServiceNameText
			// 
			this->labeServiceNameText->AutoSize = true;
			this->labeServiceNameText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->labeServiceNameText->Location = System::Drawing::Point(12, 9);
			this->labeServiceNameText->Name = L"labeServiceNameText";
			this->labeServiceNameText->Size = System::Drawing::Size(72, 22);
			this->labeServiceNameText->TabIndex = 4;
			this->labeServiceNameText->Text = L"Услуга:";
			// 
			// labeDurationText
			// 
			this->labeDurationText->AutoSize = true;
			this->labeDurationText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->labeDurationText->Location = System::Drawing::Point(12, 262);
			this->labeDurationText->Name = L"labeDurationText";
			this->labeDurationText->Size = System::Drawing::Size(132, 22);
			this->labeDurationText->TabIndex = 5;
			this->labeDurationText->Text = L"Длительность:";
			// 
			// labePriceText
			// 
			this->labePriceText->AutoSize = true;
			this->labePriceText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->labePriceText->Location = System::Drawing::Point(12, 231);
			this->labePriceText->Name = L"labePriceText";
			this->labePriceText->Size = System::Drawing::Size(58, 22);
			this->labePriceText->TabIndex = 6;
			this->labePriceText->Text = L"Цена:";
			// 
			// labeDescriptionText
			// 
			this->labeDescriptionText->AutoSize = true;
			this->labeDescriptionText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->labeDescriptionText->Location = System::Drawing::Point(12, 40);
			this->labeDescriptionText->Name = L"labeDescriptionText";
			this->labeDescriptionText->Size = System::Drawing::Size(98, 22);
			this->labeDescriptionText->TabIndex = 7;
			this->labeDescriptionText->Text = L"Описание:";
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(332, 12);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(301, 311);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox->TabIndex = 8;
			this->pictureBox->TabStop = false;
			// 
			// ServiceInfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(645, 335);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->labeDescriptionText);
			this->Controls->Add(this->labePriceText);
			this->Controls->Add(this->labeDurationText);
			this->Controls->Add(this->labeServiceNameText);
			this->Controls->Add(this->labelDuration);
			this->Controls->Add(this->labelDescription);
			this->Controls->Add(this->labelPrice);
			this->Controls->Add(this->labelServiceName);
			this->Name = L"ServiceInfoForm";
			this->Text = L"ServiceInfoForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


};
}
