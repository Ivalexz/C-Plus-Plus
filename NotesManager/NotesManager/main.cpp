#include "NotesManagerForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace NotesManager;

[STAThreadAttribute]
void main() {

	Application::Run(gcnew NotesManagerForm());
}