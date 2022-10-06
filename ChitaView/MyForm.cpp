#include "MyForm.h"
#include "PetOwnerMaintence.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//LPOOInduction is your project name
	ChitaView::PetOwnerMaintence form;
	Application::Run(% form);
}