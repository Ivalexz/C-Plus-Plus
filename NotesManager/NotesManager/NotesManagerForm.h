#pragma once

namespace NotesManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NotesManagerForm
	/// </summary>
	public ref class NotesManagerForm : public System::Windows::Forms::Form
	{
	public:
		NotesManagerForm(void)
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
		~NotesManagerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ noteName;
	private: System::Windows::Forms::RichTextBox^ noteText;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckedListBox^ noteCategories;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ priority;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ addNoteBtn;
	private: System::Windows::Forms::Button^ clearFieldsBtn;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckedListBox^ notes;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		System::Collections::Generic::List<String^>^ noteNames;
	private: System::Windows::Forms::Button^ updateBtn;


	private: System::Windows::Forms::Button^ deleteNote;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			noteNames = gcnew System::Collections::Generic::List<String^>();


			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->noteName = (gcnew System::Windows::Forms::TextBox());
			this->noteText = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->noteCategories = (gcnew System::Windows::Forms::CheckedListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->priority = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->addNoteBtn = (gcnew System::Windows::Forms::Button());
			this->clearFieldsBtn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->notes = (gcnew System::Windows::Forms::CheckedListBox());
			this->deleteNote = (gcnew System::Windows::Forms::Button());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->priority))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(365, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(320, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Менеджер нотаток";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(45, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Назва:";
			// 
			// noteName
			// 
			this->noteName->Location = System::Drawing::Point(123, 68);
			this->noteName->Name = L"noteName";
			this->noteName->Size = System::Drawing::Size(150, 22);
			this->noteName->TabIndex = 2;
			// 
			// noteText
			// 
			this->noteText->Location = System::Drawing::Point(641, 69);
			this->noteText->Name = L"noteText";
			this->noteText->Size = System::Drawing::Size(150, 106);
			this->noteText->TabIndex = 3;
			this->noteText->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(572, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Опис:";
			// 
			// noteCategories
			// 
			this->noteCategories->FormattingEnabled = true;
			this->noteCategories->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Дім", L"Робота", L"Навчання", L"Хоббі",
					L"Спорт", L"Інше..."
			});
			this->noteCategories->Location = System::Drawing::Point(401, 69);
			this->noteCategories->Name = L"noteCategories";
			this->noteCategories->Size = System::Drawing::Size(150, 106);
			this->noteCategories->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(288, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Категорія:";
			// 
			// priority
			// 
			this->priority->Location = System::Drawing::Point(162, 104);
			this->priority->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->priority->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->priority->Name = L"priority";
			this->priority->Size = System::Drawing::Size(111, 22);
			this->priority->TabIndex = 7;
			this->priority->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(45, 103);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Приорітет:";
			// 
			// addNoteBtn
			// 
			this->addNoteBtn->BackColor = System::Drawing::Color::YellowGreen;
			this->addNoteBtn->Font = (gcnew System::Drawing::Font(L"Playbill", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addNoteBtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->addNoteBtn->Location = System::Drawing::Point(819, 74);
			this->addNoteBtn->Name = L"addNoteBtn";
			this->addNoteBtn->Size = System::Drawing::Size(195, 43);
			this->addNoteBtn->TabIndex = 9;
			this->addNoteBtn->Text = L"Додати нотатку";
			this->addNoteBtn->UseVisualStyleBackColor = false;
			this->addNoteBtn->Click += gcnew System::EventHandler(this, &NotesManagerForm::addNoteBtn_Click);
			// 
			// clearFieldsBtn
			// 
			this->clearFieldsBtn->BackColor = System::Drawing::Color::Orange;
			this->clearFieldsBtn->Font = (gcnew System::Drawing::Font(L"Playbill", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearFieldsBtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->clearFieldsBtn->Location = System::Drawing::Point(819, 126);
			this->clearFieldsBtn->Name = L"clearFieldsBtn";
			this->clearFieldsBtn->Size = System::Drawing::Size(195, 43);
			this->clearFieldsBtn->TabIndex = 10;
			this->clearFieldsBtn->Text = L"Очистити всі поля";
			this->clearFieldsBtn->UseVisualStyleBackColor = false;
			this->clearFieldsBtn->Click += gcnew System::EventHandler(this, &NotesManagerForm::clearFieldsBtn_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(42, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 25);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Ваші нотатки:";
			// 
			// notes
			// 
			this->notes->FormattingEnabled = true;
			this->notes->Location = System::Drawing::Point(49, 260);
			this->notes->Name = L"notes";
			this->notes->Size = System::Drawing::Size(965, 208);
			this->notes->TabIndex = 13;
			// 
			// deleteNote
			// 
			this->deleteNote->BackColor = System::Drawing::Color::Crimson;
			this->deleteNote->Font = (gcnew System::Drawing::Font(L"Playbill", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteNote->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->deleteNote->Location = System::Drawing::Point(49, 497);
			this->deleteNote->Name = L"deleteNote";
			this->deleteNote->Size = System::Drawing::Size(195, 43);
			this->deleteNote->TabIndex = 14;
			this->deleteNote->Text = L"Видалити нотатку";
			this->deleteNote->UseVisualStyleBackColor = false;
			this->deleteNote->Click += gcnew System::EventHandler(this, &NotesManagerForm::deleteNote_Click);
			// 
			// updateBtn
			// 
			this->updateBtn->BackColor = System::Drawing::Color::RoyalBlue;
			this->updateBtn->Font = (gcnew System::Drawing::Font(L"Playbill", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateBtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->updateBtn->Location = System::Drawing::Point(266, 497);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(215, 43);
			this->updateBtn->TabIndex = 15;
			this->updateBtn->Text = L"Редагувати нотатку";
			this->updateBtn->UseVisualStyleBackColor = false;
			this->updateBtn->Click += gcnew System::EventHandler(this, &NotesManagerForm::updateBtn_Click);
			// 
			// NotesManagerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1062, 576);
			this->Controls->Add(this->updateBtn);
			this->Controls->Add(this->deleteNote);
			this->Controls->Add(this->notes);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->clearFieldsBtn);
			this->Controls->Add(this->addNoteBtn);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->priority);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->noteCategories);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->noteText);
			this->Controls->Add(this->noteName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"NotesManagerForm";
			this->Text = L"NotesManagerForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->priority))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void addNoteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = noteName->Text;
	String^ text = noteText->Text;
	String^ categories = "";

	for (int i = 0; i < noteCategories->CheckedItems->Count; i++) {
		categories += noteCategories->CheckedItems[i]->ToString() + "; ";
	}

	int prio = (int)priority->Value;

	if (name->Trim() == "") {
		MessageBox::Show("Неможливо створити нотатку без назви");
		return;
	}
	if (noteNames->Contains(name)) {
		MessageBox::Show("Нотатка з назвою '" + name + "' вже існує!");
		return;
	}

	noteNames->Add(name);

	String^ noteSummary = "- Назва: " + name + ", - Приорітет: " + prio + ", - Категорія: " + categories + "- Опис: " + text;
	notes->Items->Add(noteSummary);

	clearFieldsBtn_Click(sender, e);
}

private: System::Void clearFieldsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	noteName->Text = "";
	noteText->Text = "";
	priority->Value = 1;

	for (int i = 0; i < noteCategories->Items->Count; i++) {
		noteCategories->SetItemChecked(i, false);
	}
}

private: String^ GetNoteName() {
	if (notes->SelectedItem == nullptr) {
		return nullptr;
	}
	String^ namePrefix = "- Назва: ";

	String^ selectedNote = notes->SelectedItem->ToString();
	int nameStart = selectedNote->IndexOf(namePrefix);
	if (nameStart == -1) {
		return nullptr;
	}
	nameStart += namePrefix->Length;

	int nameEnd = selectedNote->IndexOf(", - Приорітет:", nameStart);
	if (nameEnd == -1) {
		return nullptr;
	}

	return selectedNote->Substring(nameStart, nameEnd - nameStart);
}

private: System::Void deleteNote_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = GetNoteName();
	if (name == nullptr) {
		MessageBox::Show("Будь ласка, виберіть нотатку для видалення");
		return;
	}

	String^ selectedNote = notes->SelectedItem->ToString();
	noteNames->Remove(name);
	notes->Items->Remove(selectedNote);

	MessageBox::Show("Нотатку '" + name + "' успішно видалено");
}
private: System::Void updateBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ oldName = GetNoteName();
	if (oldName == nullptr) {
		MessageBox::Show("Будь ласка, виберіть нотатку для редагування");
		return;
	}

	String^ newName = noteName->Text;
	String^ newText = noteText->Text;
	String^ newCategories = "";

	for (int i = 0; i < noteCategories->CheckedItems->Count; i++) {
		newCategories += noteCategories->CheckedItems[i]->ToString() + "; ";
	}

	int newPrio = (int)priority->Value;

	if (newName->Trim() == "") {
		MessageBox::Show("Неможливо створити нотатку без назви");
		return;
	}

	if (newName != oldName && noteNames->Contains(newName)) {
		MessageBox::Show("Нотатка з назвою '" + newName + "' вже існує!");
		return;
	}

	noteNames->Remove(oldName);
	noteNames->Add(newName);

	String^ updatedNoteSummary = "- Назва: " + newName + ", - Приорітет: " + newPrio + ", - Категорія: " + newCategories + "- Опис: " + newText;
	int selectedIndex = notes->SelectedIndex;
	notes->Items[selectedIndex] = updatedNoteSummary;

	clearFieldsBtn_Click(sender, e);
	MessageBox::Show("Нотатку успішно оновлено");
}
};
}
