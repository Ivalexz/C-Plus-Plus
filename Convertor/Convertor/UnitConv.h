#pragma once

namespace Convertor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class UnitConv : public System::Windows::Forms::Form
	{
	public:
		UnitConv(void)
		{
			InitializeComponent();
		}

	protected:
		~UnitConv()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ num_meter;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ meter;


	private: System::Windows::Forms::Label^ km;

	private: System::Windows::Forms::NumericUpDown^ num_km;
	private: System::Windows::Forms::Label^ mile;


	private: System::Windows::Forms::NumericUpDown^ num_mile;

	private: System::Windows::Forms::Button^ convert;
	private: System::Windows::Forms::Button^ clear;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void)
		{
			this->num_meter = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->meter = (gcnew System::Windows::Forms::Label());
			this->km = (gcnew System::Windows::Forms::Label());
			this->num_km = (gcnew System::Windows::Forms::NumericUpDown());
			this->mile = (gcnew System::Windows::Forms::Label());
			this->num_mile = (gcnew System::Windows::Forms::NumericUpDown());
			this->convert = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_meter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_km))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_mile))->BeginInit();
			this->SuspendLayout();
			// 
			// num_meter
			// 
			this->num_meter->DecimalPlaces = 2;
			this->num_meter->Location = System::Drawing::Point(538, 82);
			this->num_meter->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -559939585, 902409669, 54, 0 });
			this->num_meter->Name = L"num_meter";
			this->num_meter->Size = System::Drawing::Size(147, 22);
			this->num_meter->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(300, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(515, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Конвертатор одиниць вимірювання";
			// 
			// meter
			// 
			this->meter->AutoSize = true;
			this->meter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->meter->Location = System::Drawing::Point(438, 79);
			this->meter->Name = L"meter";
			this->meter->Size = System::Drawing::Size(80, 25);
			this->meter->TabIndex = 4;
			this->meter->Text = L"метри:";
			// 
			// km
			// 
			this->km->AutoSize = true;
			this->km->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->km->Location = System::Drawing::Point(415, 119);
			this->km->Name = L"km";
			this->km->Size = System::Drawing::Size(117, 25);
			this->km->TabIndex = 6;
			this->km->Text = L"кілометри:";
			// 
			// num_km
			// 
			this->num_km->DecimalPlaces = 2;
			this->num_km->Location = System::Drawing::Point(538, 122);
			this->num_km->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -559939585, 902409669, 54, 0 });
			this->num_km->Name = L"num_km";
			this->num_km->Size = System::Drawing::Size(147, 22);
			this->num_km->TabIndex = 5;
			// 
			// mile
			// 
			this->mile->AutoSize = true;
			this->mile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mile->Location = System::Drawing::Point(449, 158);
			this->mile->Name = L"mile";
			this->mile->Size = System::Drawing::Size(62, 25);
			this->mile->TabIndex = 14;
			this->mile->Text = L"милі:";
			// 
			// num_mile
			// 
			this->num_mile->DecimalPlaces = 2;
			this->num_mile->Location = System::Drawing::Point(538, 163);
			this->num_mile->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -559939585, 902409669, 54, 0 });
			this->num_mile->Name = L"num_mile";
			this->num_mile->Size = System::Drawing::Size(147, 22);
			this->num_mile->TabIndex = 13;
			// 
			// convert
			// 
			this->convert->BackColor = System::Drawing::Color::LimeGreen;
			this->convert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->convert->ForeColor = System::Drawing::Color::White;
			this->convert->Location = System::Drawing::Point(325, 207);
			this->convert->Name = L"convert";
			this->convert->Size = System::Drawing::Size(226, 42);
			this->convert->TabIndex = 15;
			this->convert->Text = L"Конвертувати";
			this->convert->UseVisualStyleBackColor = false;
			this->convert->Click += gcnew System::EventHandler(this, &UnitConv::convert_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::HotPink;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear->ForeColor = System::Drawing::Color::White;
			this->clear->Location = System::Drawing::Point(557, 207);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(226, 42);
			this->clear->TabIndex = 16;
			this->clear->Text = L"Очистити";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &UnitConv::clear_Click);
			// 
			// UnitConv
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1094, 345);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->convert);
			this->Controls->Add(this->mile);
			this->Controls->Add(this->num_mile);
			this->Controls->Add(this->km);
			this->Controls->Add(this->num_km);
			this->Controls->Add(this->meter);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->num_meter);
			this->Name = L"UnitConv";
			this->Text = L"UnitConv";
			this->Load += gcnew System::EventHandler(this, &UnitConv::UnitConv_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_meter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_km))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_mile))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UnitConv_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void convert_Click(System::Object^ sender, System::EventArgs^ e) {

		double meter = static_cast<double>(num_meter->Value);
		double km = static_cast<double>(num_km->Value);
		double mile = static_cast<double>(num_mile->Value);

		if (meter != 0) {
			num_km->Value = static_cast<Decimal>(meter / 1000);
			num_mile->Value = static_cast<Decimal>(meter / 1609.34);
		}
		else if (km != 0) {
			num_meter->Value = static_cast<Decimal>(km * 1000);
			num_mile->Value = static_cast<Decimal>(km / 1.60934);
		}
		else if (mile != 0) {
			num_meter->Value = static_cast<Decimal>(mile * 1609.34);
			num_km->Value = static_cast<Decimal>(mile * 1.60934);
		}
	}
	
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		num_meter->Value = 0;
		num_km->Value = 0;
		num_mile->Value = 0;
	}
};
}
