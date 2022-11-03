
#include "RequestSearcherForm.h"
#include "CarerWorkForm.h"

System::Void ChitaView::RequestSearcherForm::dgvSearcherList_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ requestId = dgvSearcherList->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		ServiceRequest^ sr = Controller::QueryServiceRequestById(Int32::Parse(requestId));
		((CarerWorkForm^)refForm)->AddRequestToCarerWork(sr);

	}
	this->Close();
}
