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
			if(sr->Status == "Espera")		srn->Status = "Seleccionado";
			if (sr->Status == "Pendiente")  srn->Status = "Pendiente";
					
			srn->previousForm = "RequestSearcherForm";
			Controller::UpdateServiceRequest(srn);

			ServiceDetailForm^ serviceDetailForm = gcnew ServiceDetailForm(this);
			serviceDetailForm->ShowDialog();
			

			ServiceRequest^ srt = Controller::QueryServiceRequestByStatus("Pendiente");

			if (srt != nullptr)
				((CarerWorkForm^)refForm)->AddRequestToCarerWork(srt);
				this->Close();

			//da vueltas hasta que sea pendiente : loop infinito hasta que cambie de valor: no deseado
			
			/*
			int pendiente = 1;
			do {
				ServiceRequest^ srt = Controller::QueryServiceRequestByStatus("Pendiente");

				if (srt != nullptr) {
					pendiente = 0;
					((CarerWorkForm^)refForm)->AddRequestToCarerWork(srt);
					this->Close();
				}
			} while (pendiente == 0);

			*/	
	}
	
}
