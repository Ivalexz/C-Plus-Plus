#include "UnitConv.h"
#include "TempConv.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Convertor;

[STAThreadAttribute]
void main() {
	//Application::Run(gcnew UnitConv());
	Application::Run(gcnew TempConv());
}