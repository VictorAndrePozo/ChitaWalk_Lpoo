#include "PetOwnerMaintence.h"
#include "DiscountsForm.h"

using namespace ChitaView;

using namespace System::Collections::Generic;


System::Void ChitaView::PetOwnerMaintence::dgvPetOwner_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (dgvPetOwner->CurrentCell != nullptr &&
		dgvPetOwner->CurrentCell->Value != nullptr &&
		dgvPetOwner->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvPetOwner->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvPetOwner->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int petownerId = Int32::Parse(a);
		PetOwner^ petowner = Controller::QueryPetOwnerById(petownerId);
		//MessageBox::Show(petowner->ToString()); //Polimorfismo

		if (petowner != nullptr) {
			if (UseType == 'S') {
				//¿Cómo enviamos al formulario de la venta los datos del cliente?
				//Rpta. Mediante una referencia al formulario de la venta (SaleForm).
				((DiscountsForm^)RefDiscountsForm)->SetPetOwner(petowner);
			}
			else {
				txtUsername->Text = "" + petowner->username;
				txtPassword->Text = petowner->password;
				txtFirstName->Text = petowner->Firstname;
				txtApellido->Text = petowner->Lastname;
				dtpBirthday->Value = DateTime::Parse(petowner->Birthday);
				txtPhoneNumber->Text = "" + petowner->PhoneNumber;
				radioMale->Checked = petowner->Gender == 'M';
				radioFemale->Checked = petowner->Gender == 'F';
				txtDni->Text = "" + petowner->DocNumbrer;
				txtId->Text = "" + petowner->Id;
				txtAddress->Text = petowner->Address;
				txtEmail->Text = petowner->Email;
				txtValoration->Text = "" + petowner->Valoration;


			}
		}
	}
}
