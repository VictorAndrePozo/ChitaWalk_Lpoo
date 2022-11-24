#include "PromotionSearchForm.h"
#include "DiscountsForm.h"

System::Void ChitaView::PromotionSearchForm::dgvListPromotions_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ promotionId = dgvListPromotions->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		Promotions^ p = Controller::QueryPromotionsById(Int32::Parse(promotionId));
		((DiscountsForm^)refForm)->AddPromotionToDiscountDetails(p);
	}
	this->Close();
}
