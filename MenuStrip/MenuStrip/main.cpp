#include "Window.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace MenuStrip;

[STAThreadAttribute]
void main() {

	Application::Run(gcnew Window());
}