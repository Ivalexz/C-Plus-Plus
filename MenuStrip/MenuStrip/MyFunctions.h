#pragma once

using namespace System;

using namespace System::Windows::Forms;

using namespace System::IO;

using namespace System::Collections;

inline void open_and_read(RichTextBox^ myText, String^ data) {
	try {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == DialogResult::OK) {
			String^ text = File::ReadAllText(openFileDialog1->FileName);
			myText->Text = text;
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Error: " + e->Message);
	}
}
inline void save_and_add(RichTextBox^ myText) {
	try {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
		saveFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
		if (saveFileDialog1->ShowDialog() == DialogResult::OK) {
			File::AppendAllText(saveFileDialog1->FileName, myText->Text);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Error: " + e->Message);
	}
}
inline void save(RichTextBox^ myText) {
	try {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
		saveFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
		if (saveFileDialog1->ShowDialog() == DialogResult::OK) {
			File::WriteAllText(saveFileDialog1->FileName, myText->Text);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Error: " + e->Message);
	}
}

inline void change_language(Generic::List<System::Windows::Forms::ToolStripMenuItem^>^ myMenu, String^ lang)
{
	if (lang == "ukr") {
		myMenu[0]->Text = "Файл";
		myMenu[1]->Text = "Зберегти";
		myMenu[2]->Text = "Відкрити";
		myMenu[3]->Text = "Зберегти як";
		myMenu[4]->Text = "Вихід";
		myMenu[5]->Text = "Налаштування";
		myMenu[6]->Text = "Мова";
		myMenu[7]->Text = "Більше інформації";
		myMenu[8]->Text = "Новий файл";
		myMenu[9]->Text = "Редагування";
		myMenu[10]->Text = "Вирізати";
		myMenu[11]->Text = "Копіювати";
		myMenu[12]->Text = "Вставити";
		myMenu[13]->Text = "Вставити все";
	}
	else if (lang == "en") {
		myMenu[0]->Text = "File";
		myMenu[1]->Text = "Save";
		myMenu[2]->Text = "Open as";
		myMenu[3]->Text = "Save as";
		myMenu[4]->Text = "Exit";
		myMenu[5]->Text = "Settings";
		myMenu[6]->Text = "Leng";
		myMenu[7]->Text = "More info";
		myMenu[8]->Text = "New file";
		myMenu[9]->Text = "Edit";
		myMenu[10]->Text = "Cut";
		myMenu[11]->Text = "Copy";
		myMenu[12]->Text = "Paste";
		myMenu[13]->Text = "Paste All";
	}
	else if (lang == "es") {
		myMenu[0]->Text = "Archivo";
		myMenu[1]->Text = "Guardar";
		myMenu[2]->Text = "Abrir como";
		myMenu[3]->Text = "Guardar como";
		myMenu[4]->Text = "Salir";
		myMenu[5]->Text = "Ajustes";
		myMenu[6]->Text = "Lengua";
		myMenu[7]->Text = "Más información";
		myMenu[8]->Text = "Nuevo archivo";
		myMenu[9]->Text = "Editar";
		myMenu[10]->Text = "Cortar";
		myMenu[11]->Text = "Copiar";
		myMenu[12]->Text = "Pegar";
		myMenu[13]->Text = "Pegar todo";
	}
}

inline void new_file(RichTextBox^ myText) {
	try {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
		saveFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
		if (saveFileDialog1->ShowDialog() == DialogResult::OK) {
			File::WriteAllText(saveFileDialog1->FileName, "");
			myText->Clear();
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Error: " + e->Message);
	}
		
}
inline void cut_text(RichTextBox^ myText) {
	try {
		myText->Cut();
	}
	catch (Exception^ e) {
		MessageBox::Show("Error: " + e->Message, "Cut", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

inline void copy_text(RichTextBox^ myText) {
	try {
		myText->Copy();
	}
	catch (Exception^ e) {
		MessageBox::Show("Error: " + e->Message, "Copy", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

inline void paste_text(RichTextBox^ myText) {
	try {
		myText->Paste();
	}
	catch (Exception^ e) {
		MessageBox::Show("Error: " + e->Message, "Paste", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

inline void paste_all_text(RichTextBox^ myText) {
	try {
		myText->Clear();
		myText->Paste();
	}
	catch (Exception^ e) {
		MessageBox::Show("Error: " + e->Message, "Paste All", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}