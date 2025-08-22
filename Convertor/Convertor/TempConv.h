#pragma once

namespace Convertor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TempConv
	/// </summary>
	public ref class TempConv : public System::Windows::Forms::Form
	{
	public:
		TempConv(void)
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
		~TempConv()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ clear;
	protected:
	private: System::Windows::Forms::Button^ convert;
	private: System::Windows::Forms::Label^ kelvin;
	private: System::Windows::Forms::NumericUpDown^ num_kelvin;


	private: System::Windows::Forms::Label^ farenheit;
	private: System::Windows::Forms::NumericUpDown^ num_farenheit;


	private: System::Windows::Forms::Label^ celcius;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ num_celcius;


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
			this->clear = (gcnew System::Windows::Forms::Button());
			this->convert = (gcnew System::Windows::Forms::Button());
			this->kelvin = (gcnew System::Windows::Forms::Label());
			this->num_kelvin = (gcnew System::Windows::Forms::NumericUpDown());
			this->farenheit = (gcnew System::Windows::Forms::Label());
			this->num_farenheit = (gcnew System::Windows::Forms::NumericUpDown());
			this->celcius = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->num_celcius = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_kelvin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_farenheit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_celcius))->BeginInit();
			this->SuspendLayout();
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::HotPink;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear->ForeColor = System::Drawing::Color::White;
			this->clear->Location = System::Drawing::Point(556, 219);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(226, 42);
			this->clear->TabIndex = 25;
			this->clear->Text = L"Очистити";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &TempConv::clear_Click);
			// 
			// convert
			// 
			this->convert->BackColor = System::Drawing::Color::LimeGreen;
			this->convert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->convert->ForeColor = System::Drawing::Color::White;
			this->convert->Location = System::Drawing::Point(324, 219);
			this->convert->Name = L"convert";
			this->convert->Size = System::Drawing::Size(226, 42);
			this->convert->TabIndex = 24;
			this->convert->Text = L"Конвертувати";
			this->convert->UseVisualStyleBackColor = false;
			this->convert->Click += gcnew System::EventHandler(this, &TempConv::convert_Click);
			// 
			// kelvin
			// 
			this->kelvin->AutoSize = true;
			this->kelvin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->kelvin->Location = System::Drawing::Point(448, 170);
			this->kelvin->Name = L"kelvin";
			this->kelvin->Size = System::Drawing::Size(88, 25);
			this->kelvin->TabIndex = 23;
			this->kelvin->Text = L"Кельвін:";
			// 
			// num_kelvin
			// 
			this->num_kelvin->DecimalPlaces = 2;
			this->num_kelvin->Location = System::Drawing::Point(537, 175);
			this->num_kelvin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->num_kelvin->Name = L"num_kelvin";
			this->num_kelvin->Size = System::Drawing::Size(147, 22);
			this->num_kelvin->TabIndex = 22;
			// 
			// farenheit
			// 
			this->farenheit->AutoSize = true;
			this->farenheit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->farenheit->Location = System::Drawing::Point(414, 131);
			this->farenheit->Name = L"farenheit";
			this->farenheit->Size = System::Drawing::Size(122, 25);
			this->farenheit->TabIndex = 21;
			this->farenheit->Text = L"Фаренгейт:";
			// 
			// num_farenheit
			// 
			this->num_farenheit->DecimalPlaces = 2;
			this->num_farenheit->Location = System::Drawing::Point(537, 134);
			this->num_farenheit->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->num_farenheit->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 460, 0, 0, System::Int32::MinValue });
			this->num_farenheit->Name = L"num_farenheit";
			this->num_farenheit->Size = System::Drawing::Size(147, 22);
			this->num_farenheit->TabIndex = 20;
			// 
			// celcius
			// 
			this->celcius->AutoSize = true;
			this->celcius->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->celcius->Location = System::Drawing::Point(437, 91);
			this->celcius->Name = L"celcius";
			this->celcius->Size = System::Drawing::Size(90, 25);
			this->celcius->TabIndex = 19;
			this->celcius->Text = L"Цельсій:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(362, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(388, 32);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Конвертатор температури";
			this->label1->Click += gcnew System::EventHandler(this, &TempConv::label1_Click);
			// 
			// num_celcius
			// 
			this->num_celcius->DecimalPlaces = 2;
			this->num_celcius->Location = System::Drawing::Point(537, 94);
			this->num_celcius->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->num_celcius->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 274, 0, 0, System::Int32::MinValue });
			this->num_celcius->Name = L"num_celcius";
			this->num_celcius->Size = System::Drawing::Size(147, 22);
			this->num_celcius->TabIndex = 17;
			// 
			// TempConv
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1112, 303);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->convert);
			this->Controls->Add(this->kelvin);
			this->Controls->Add(this->num_kelvin);
			this->Controls->Add(this->farenheit);
			this->Controls->Add(this->num_farenheit);
			this->Controls->Add(this->celcius);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->num_celcius);
			this->Name = L"TempConv";
			this->Text = L"TempConv";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_kelvin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_farenheit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_celcius))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void convert_Click(System::Object^ sender, System::EventArgs^ e) {
	double celcius = static_cast<double>(num_celcius->Value);
	double farenheit = static_cast<double>(num_farenheit->Value);
	double kelvin = static_cast<double>(num_kelvin->Value);

	if (celcius != 0 || (farenheit == 0 && kelvin == 0)) {
		num_farenheit->Value = static_cast<Decimal>((celcius * 9.0 / 5.0) + 32);
		num_kelvin->Value = static_cast<Decimal>(celcius + 273.15);
	}
	else if (farenheit != 0) {
		num_celcius->Value = static_cast<Decimal>((farenheit - 32) * 5.0 / 9.0);
		num_kelvin->Value = static_cast<Decimal>((farenheit - 32) * 5.0 / 9.0 + 273.15);
	}
	else if (kelvin != 0) {
		num_celcius->Value = static_cast<Decimal>(kelvin - 273.15);
		num_farenheit->Value = static_cast<Decimal>((kelvin - 273.15) * 9.0 / 5.0 + 32);
	}
	else {
		num_celcius->Value = static_cast<Decimal>(-273.15);
		num_farenheit->Value = static_cast<Decimal>(-459.67);
		num_kelvin->Value = static_cast<Decimal>(0);
	}
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	num_celcius->Value = 0;
	num_farenheit->Value = 0;
	num_kelvin->Value = 0;
}
};
}
