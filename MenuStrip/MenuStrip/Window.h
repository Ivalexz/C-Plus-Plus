#pragma once
#include "MyFunctions.h"

namespace MenuStrip {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Window
	/// </summary>
	public ref class Window : public System::Windows::Forms::Form
	{
	public:
		Window(void)
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
		~Window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lengToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ukrToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ enToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ moreInfoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ esToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasteAllToolStripMenuItem;
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
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lengToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ukrToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->esToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->moreInfoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pasteAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->newToolStripMenuItem, this->editToolStripMenuItem, this->settingsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(534, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->saveToolStripMenuItem,
					this->openToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"file";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->saveToolStripMenuItem->Text = L"save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::saveToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->openToolStripMenuItem->Text = L"open as";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::openAsToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->saveAsToolStripMenuItem->Text = L"save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->exitToolStripMenuItem->Text = L"exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::exitToolStripMenuItem_Click);
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(50, 24);
			this->newToolStripMenuItem->Text = L"new";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::newToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->cutToolStripMenuItem,
					this->copyToolStripMenuItem, this->pasteToolStripMenuItem, this->pasteAllToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->editToolStripMenuItem->Text = L"edit";
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->cutToolStripMenuItem->Text = L"cut";
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::cutToolStripMenuItem_Click);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->copyToolStripMenuItem->Text = L"copy";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::copyToolStripMenuItem_Click);
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->pasteToolStripMenuItem->Text = L"paste";
			this->pasteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::pasteToolStripMenuItem_Click);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->lengToolStripMenuItem,
					this->moreInfoToolStripMenuItem
			});
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->settingsToolStripMenuItem->Text = L"settings";
			// 
			// lengToolStripMenuItem
			// 
			this->lengToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ukrToolStripMenuItem,
					this->enToolStripMenuItem, this->esToolStripMenuItem
			});
			this->lengToolStripMenuItem->Name = L"lengToolStripMenuItem";
			this->lengToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->lengToolStripMenuItem->Text = L"leng";
			// 
			// ukrToolStripMenuItem
			// 
			this->ukrToolStripMenuItem->Name = L"ukrToolStripMenuItem";
			this->ukrToolStripMenuItem->Size = System::Drawing::Size(112, 26);
			this->ukrToolStripMenuItem->Text = L"ukr";
			this->ukrToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::ukrToolStripMenuItem_Click);
			// 
			// enToolStripMenuItem
			// 
			this->enToolStripMenuItem->Name = L"enToolStripMenuItem";
			this->enToolStripMenuItem->Size = System::Drawing::Size(112, 26);
			this->enToolStripMenuItem->Text = L"en";
			this->enToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::enToolStripMenuItem_Click);
			// 
			// esToolStripMenuItem
			// 
			this->esToolStripMenuItem->Name = L"esToolStripMenuItem";
			this->esToolStripMenuItem->Size = System::Drawing::Size(112, 26);
			this->esToolStripMenuItem->Text = L"es";
			this->esToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::esToolStripMenuItem_Click);
			// 
			// moreInfoToolStripMenuItem
			// 
			this->moreInfoToolStripMenuItem->Name = L"moreInfoToolStripMenuItem";
			this->moreInfoToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->moreInfoToolStripMenuItem->Text = L"more info";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 49);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(510, 164);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// pasteAllToolStripMenuItem
			// 
			this->pasteAllToolStripMenuItem->Name = L"pasteAllToolStripMenuItem";
			this->pasteAllToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->pasteAllToolStripMenuItem->Text = L"paste all";
			this->pasteAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::pasteAllToolStripMenuItem_Click);
			// 
			// Window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 253);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Window";
			this->Text = L"Window";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		open_and_read(richTextBox1, "data.txt");
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		save(richTextBox1);
	}
	private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		save_and_add(richTextBox1);
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void ukrToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Generic::List<System::Windows::Forms::ToolStripMenuItem^>^ myMenu = gcnew Generic::List<System::Windows::Forms::ToolStripMenuItem^>();
		myMenu->Add(fileToolStripMenuItem);
		myMenu->Add(saveToolStripMenuItem);
		myMenu->Add(openToolStripMenuItem);
		myMenu->Add(saveAsToolStripMenuItem);
		myMenu->Add(exitToolStripMenuItem);
		myMenu->Add(settingsToolStripMenuItem);
		myMenu->Add(lengToolStripMenuItem);
		myMenu->Add(moreInfoToolStripMenuItem);
		myMenu->Add(newToolStripMenuItem);
		myMenu->Add(editToolStripMenuItem);
		myMenu->Add(cutToolStripMenuItem);
		myMenu->Add(copyToolStripMenuItem);
		myMenu->Add(pasteToolStripMenuItem);
		myMenu->Add(pasteAllToolStripMenuItem);
		change_language(myMenu, "ukr");
	}
	private: System::Void enToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Generic::List<System::Windows::Forms::ToolStripMenuItem^>^ myMenu = gcnew Generic::List<System::Windows::Forms::ToolStripMenuItem^>();
		myMenu->Add(fileToolStripMenuItem);
		myMenu->Add(saveToolStripMenuItem);
		myMenu->Add(openToolStripMenuItem);
		myMenu->Add(saveAsToolStripMenuItem);
		myMenu->Add(exitToolStripMenuItem);
		myMenu->Add(settingsToolStripMenuItem);
		myMenu->Add(lengToolStripMenuItem);
		myMenu->Add(moreInfoToolStripMenuItem);
		myMenu->Add(newToolStripMenuItem);
		myMenu->Add(editToolStripMenuItem);
		myMenu->Add(cutToolStripMenuItem);
		myMenu->Add(copyToolStripMenuItem);
		myMenu->Add(pasteToolStripMenuItem);
		myMenu->Add(pasteAllToolStripMenuItem);
		change_language(myMenu, "en");
	}
	private: System::Void esToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Generic::List<System::Windows::Forms::ToolStripMenuItem^>^ myMenu = gcnew Generic::List<System::Windows::Forms::ToolStripMenuItem^>();
		myMenu->Add(fileToolStripMenuItem);
		myMenu->Add(saveToolStripMenuItem);
		myMenu->Add(openToolStripMenuItem);
		myMenu->Add(saveAsToolStripMenuItem);
		myMenu->Add(exitToolStripMenuItem);
		myMenu->Add(settingsToolStripMenuItem);
		myMenu->Add(lengToolStripMenuItem);
		myMenu->Add(moreInfoToolStripMenuItem);
		myMenu->Add(newToolStripMenuItem);
		myMenu->Add(editToolStripMenuItem);
		myMenu->Add(cutToolStripMenuItem);
		myMenu->Add(copyToolStripMenuItem);
		myMenu->Add(pasteToolStripMenuItem);
		myMenu->Add(pasteAllToolStripMenuItem);
		change_language(myMenu, "es");
	}
private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	new_file(richTextBox1);
}

private: System::Void cutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	cut_text(richTextBox1);
}

private: System::Void copyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	copy_text(richTextBox1);
}

private: System::Void pasteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	paste_text(richTextBox1);
}
private: System::Void pasteAllToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	paste_all_text(richTextBox1);
}
};
}