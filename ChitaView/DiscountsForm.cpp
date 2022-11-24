#include "DiscountsForm.h"
#include "MyForm.h"


System::Void ChitaView::DiscountsForm::btnRegisterDiscount_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblPetOwnerData->Text == "Sin cliente") {
		petowner = Controller::QueryPetOwnerById(0);
	}
	if (dgvDiscountDetails->Rows->Count == 0 || txtTotal->Text->Trim() == "0") {
		MessageBox::Show("Tiene que agregar un producto");
		return;
	}
	Discount^ discount = gcnew Discount();
	discount->Id = Controller::QueryLastDiscountId() + 1;
	discount->PetOwner = petowner;
	discount->TxnDate = txtDate->Text;
	discount->Supervisor = MyForm::supervisor;
	discount->StockFinal = Double::Parse(txtTotal->Text);
	discount->DiscountDetail = gcnew List<DiscountDetail^>();
	//Recorrer todos las filas del grid para armar los detalles de venta
	//y añadir cada detalle de venta a DiscountDetails
	for (int i = 0; i < dgvDiscountDetails->RowCount - 1; i++) {
		DiscountDetail^ discountDetail = gcnew DiscountDetail();
		int promotionId = Int32::Parse(dgvDiscountDetails->Rows[i]->Cells[0]->Value->ToString());
		discountDetail->Id = i + 1;
		discountDetail->Promotions = Controller::QueryPromotionsById(promotionId);
		discountDetail->Description = (dgvDiscountDetails->Rows[i]->Cells[2]->Value->ToString());
		discountDetail->Quantity = Convert::ToInt32(dgvDiscountDetails->Rows[i]->Cells[3]->Value->ToString());
		discountDetail->DiscountType = (dgvDiscountDetails->Rows[i]->Cells[4]->Value->ToString());
		discountDetail->UnitDiscountValue = Convert::ToInt32(dgvDiscountDetails->Rows[i]->Cells[5]->Value->ToString());
		discountDetail->DeadLine = (dgvDiscountDetails->Rows[i]->Cells[6]->Value->ToString());
		discountDetail->SubTotal = Convert::ToDouble(dgvDiscountDetails->Rows[i]->Cells[7]->Value->ToString());

		discount->DiscountDetail->Add(discountDetail);
	}
	// 
	//Completar el RegisterDiscount
	Controller::RegisterDiscount(discount);
	MessageBox::Show("Se ha registrado la venta exitosamente.");

}