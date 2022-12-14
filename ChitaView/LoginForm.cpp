#include "LoginForm.h"
#include "MyForm.h"

System::Void ChitaView::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
	User^ usr = Controller::Login(txtUsername->Text, txtPassword->Text);
	if (usr != nullptr) {
		MessageBox::Show("Bienvenido " + usr->Firstname);
		if (usr->GetType() == Walker::typeid) {
			MyForm::user = (Walker^)usr;
		}
		else if (usr->GetType() == Keeper::typeid) {
			MyForm::user = (Keeper^)usr;
		}
		else if (usr->GetType() == PetOwner::typeid) {
			MyForm::user = (PetOwner^)usr;
		}
		else if (usr->GetType() == Supervisor::typeid) {
			MyForm::user = (Supervisor^)usr;
		}
		

		this->Close();
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos.");
	}
}

