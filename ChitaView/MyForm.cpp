#include "MyForm.h"
#include "PetOwnerMaintence.h"
#include "Supervisormaintenance.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//LPOOInduction is your project name
	ChitaView::MyForm form;
	Application::Run(% form);
}