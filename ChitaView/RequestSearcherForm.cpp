#include "ServiceDetailForm.h"
#include "RequestSearcherForm.h"
#include "CarerWorkForm.h"

System::Void ChitaView::RequestSearcherForm::dgvSearcherList_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{

	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {

			String^ requestId = dgvSearcherList->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			ServiceRequest^ sr = Controller::QueryServiceRequestById(Int32::Parse(requestId));
			
			ServiceRequest^ srn = gcnew ServiceRequest();
			srn->PetOwner = sr->PetOwner;
			srn->Id = sr->Id;
			srn->DateRequest = sr->DateRequest;
			srn->Kind = sr->Kind;
			srn->Pet = sr->Pet;				
			srn->Service = sr->Service;
			srn->District = sr->District;
			srn->AdressStart = sr->AdressStart;
			srn->AdressEnd = sr->AdressEnd;
			srn->DateService = sr->DateService;
			srn->DateServiceInit = sr->DateServiceInit;
			srn->DateServiceEnd = sr->DateServiceEnd;

			srn->Carer = sr->Carer;
			srn->CarerId = sr->CarerId;
			srn->SubTotal = sr->SubTotal;
			srn->IGV = sr->IGV;
			srn->TotalAmount = sr->TotalAmount;
			srn->Status = "Seleccionado";
			Controller::UpdateServiceRequest(srn);

			ServiceDetailForm^ serviceDetailForm = gcnew ServiceDetailForm(this);
			serviceDetailForm->ShowDialog();

	//NOTA: NO FUNCIONA CUANDO CANCELA EL DETAIL
			//ServiceRequest^ srt = Controller::QueryServiceRequestByStatus("Seleccionado");
		//do{
			ServiceRequest^ srt = Controller::QueryServiceRequestByStatus("Aceptado");
			
				if (srt->Status == "Aceptado") {
					((CarerWorkForm^)refForm)->AddRequestToCarerWork(srt);

					this->Close();
					//break;
				}

				if (srt->Status == "Espera") {
					this->Close();
					//break;
				}
			
			//else{
				//ServiceRequest^ srt = Controller::QueryServiceRequestByStatus("Seleccionado");
			//}
		//} while (srt->Status == "Seleccionado");

	}
	
}
