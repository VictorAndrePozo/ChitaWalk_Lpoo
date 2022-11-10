#include "DiscountsForm.h"
//#include "MyForm.h"
//#include "PromotionSearchForm.h"
/*
System::Void ChitaView::DiscountsForm::DiscountsForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	txtDate->Text = DateTime::Now.ToString("dd/MM/yyyy");
	this->Text = "Venta realizada por " + PetOwner->Lastname + " " + PetOwner->Firstname;
}

System::Void ChitaView::DiscountsForm::btnRegisterDiscount_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (lblPetOwnerData->Text == "Sin cliente") {
		PetOwner = Controller::QueryPetOwnerById(0);
	}
	if (dgvDetails->Rows->Count == 0 || txtTotal->Text->Trim() == "0") {
		MessageBox::Show("Tiene que agregar un producto");
		return;
	}
	Discount^ discount = gcnew Discount();
	discount->Id = Controller::QueryLastDiscountId() + 1;
	discount->PetOwner = PetOwner;
	discount->TxnDate = txtDate->Text;
	discount->Supervisor = Supervisor;
	discount->Total = Double::Parse(txtTotal->Text);
	discount->DiscountDetail = gcnew List<DiscountDetail^>();
	//Recorrer todos las filas del grid para armar los detalles de LOS DESCUENTOS
	//y añadir cada detalle de DESCUENTO a DiscountDetail
	for (int i = 0; i < dgvDetails->RowCount - 1; i++) {
		DiscountDetail^ discountDetail = gcnew DiscountDetail();
		int promotionId = Int32::Parse(dgvDetails->Rows[i]->Cells[0]->Value->ToString());
		discountDetail->Id = i + 1;
		//discountDetail->Promotion = Controller::QueryPromotionById(promotionId);
		discountDetail->UnitPrice = Convert::ToDouble(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
		discountDetail->Quantity = Convert::ToInt32(dgvDetails->Rows[i]->Cells[3]->Value->ToString());
		discount->DiscountDetail->Add(discountDetail);
	}
	// 
	//Completar el RegisterDiscount
	Controller::RegisterDiscount(discount);
	MessageBox::Show("Se ha registrado la venta exitosamente.");
}
*/