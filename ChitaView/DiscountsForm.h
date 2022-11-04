#pragma once
#include "../ChitaModel/PetOwner.h"
#include "../ChitaModel/PetOwner.cpp"
#include "../ChitaModel/Promotions.h"

#include "PromotionSearchForm.h"
#include "PetOwnerMaintence.h"
//#include "Resource.h"

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DiscountsForm
	/// </summary>
	public ref class DiscountsForm : public System::Windows::Forms::Form
	{
	private:
		PetOwner^ PetOwner;
	public:
		DiscountsForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~DiscountsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelfecha;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnAddPromotion;

	private: System::Windows::Forms::Button^ btnDeletePromotion;


	private: System::Windows::Forms::Button^ btnSearchPetOwner;
	private: System::Windows::Forms::Button^ btnAddPetOwner;


	private: System::Windows::Forms::TextBox^ txtDate;
	private: System::Windows::Forms::TextBox^ txtPetOwner;
	private: System::Windows::Forms::DataGridView^ dgvDetails;




	private: System::Windows::Forms::Button^ btnRegisterDiscount;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionDescription;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionQuantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionUnitPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionDeadline;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionStatus;
	private: System::Windows::Forms::Label^ lblPetOwnerData;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelfecha = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnAddPromotion = (gcnew System::Windows::Forms::Button());
			this->btnDeletePromotion = (gcnew System::Windows::Forms::Button());
			this->btnSearchPetOwner = (gcnew System::Windows::Forms::Button());
			this->btnAddPetOwner = (gcnew System::Windows::Forms::Button());
			this->txtDate = (gcnew System::Windows::Forms::TextBox());
			this->txtPetOwner = (gcnew System::Windows::Forms::TextBox());
			this->dgvDetails = (gcnew System::Windows::Forms::DataGridView());
			this->promotionId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionUnitPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionDeadline = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnRegisterDiscount = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->lblPetOwnerData = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->BeginInit();
			this->SuspendLayout();
			// 
			// labelfecha
			// 
			this->labelfecha->AutoSize = true;
			this->labelfecha->Location = System::Drawing::Point(42, 22);
			this->labelfecha->Name = L"labelfecha";
			this->labelfecha->Size = System::Drawing::Size(48, 16);
			this->labelfecha->TabIndex = 0;
			this->labelfecha->Text = L"Fecha:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Dueño:";
			// 
			// btnAddPromotion
			// 
			this->btnAddPromotion->Location = System::Drawing::Point(153, 94);
			this->btnAddPromotion->Name = L"btnAddPromotion";
			this->btnAddPromotion->Size = System::Drawing::Size(177, 28);
			this->btnAddPromotion->TabIndex = 2;
			this->btnAddPromotion->Text = L"Agregar Promoción";
			this->btnAddPromotion->UseVisualStyleBackColor = true;
			// 
			// btnDeletePromotion
			// 
			this->btnDeletePromotion->Location = System::Drawing::Point(408, 94);
			this->btnDeletePromotion->Name = L"btnDeletePromotion";
			this->btnDeletePromotion->Size = System::Drawing::Size(179, 28);
			this->btnDeletePromotion->TabIndex = 3;
			this->btnDeletePromotion->Text = L"Eliminar promoción";
			this->btnDeletePromotion->UseVisualStyleBackColor = true;
			// 
			// btnSearchPetOwner
			// 
			this->btnSearchPetOwner->Location = System::Drawing::Point(490, 47);
			this->btnSearchPetOwner->Name = L"btnSearchPetOwner";
			this->btnSearchPetOwner->Size = System::Drawing::Size(97, 28);
			this->btnSearchPetOwner->TabIndex = 5;
			this->btnSearchPetOwner->Text = L"Buscar";
			this->btnSearchPetOwner->UseVisualStyleBackColor = true;
			// 
			// btnAddPetOwner
			// 
			this->btnAddPetOwner->Location = System::Drawing::Point(613, 47);
			this->btnAddPetOwner->Name = L"btnAddPetOwner";
			this->btnAddPetOwner->Size = System::Drawing::Size(102, 28);
			this->btnAddPetOwner->TabIndex = 6;
			this->btnAddPetOwner->Text = L"+ Dueño";
			this->btnAddPetOwner->UseVisualStyleBackColor = true;
			// 
			// txtDate
			// 
			this->txtDate->Location = System::Drawing::Point(118, 16);
			this->txtDate->Name = L"txtDate";
			this->txtDate->Size = System::Drawing::Size(198, 22);
			this->txtDate->TabIndex = 7;
			// 
			// txtPetOwner
			// 
			this->txtPetOwner->Location = System::Drawing::Point(118, 50);
			this->txtPetOwner->Name = L"txtPetOwner";
			this->txtPetOwner->Size = System::Drawing::Size(343, 22);
			this->txtPetOwner->TabIndex = 8;
			// 
			// dgvDetails
			// 
			this->dgvDetails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDetails->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->promotionId,
					this->promotionName, this->promotionDescription, this->promotionQuantity, this->promotionUnitPrice, this->promotionDeadline,
					this->promotionStatus
			});
			this->dgvDetails->Location = System::Drawing::Point(24, 183);
			this->dgvDetails->Name = L"dgvDetails";
			this->dgvDetails->RowHeadersWidth = 51;
			this->dgvDetails->RowTemplate->Height = 24;
			this->dgvDetails->Size = System::Drawing::Size(704, 171);
			this->dgvDetails->TabIndex = 9;
			// 
			// promotionId
			// 
			this->promotionId->HeaderText = L"Id";
			this->promotionId->MinimumWidth = 6;
			this->promotionId->Name = L"promotionId";
			this->promotionId->Width = 60;
			// 
			// promotionName
			// 
			this->promotionName->HeaderText = L"Nombre";
			this->promotionName->MinimumWidth = 6;
			this->promotionName->Name = L"promotionName";
			this->promotionName->Width = 125;
			// 
			// promotionDescription
			// 
			this->promotionDescription->HeaderText = L"Descripción";
			this->promotionDescription->MinimumWidth = 6;
			this->promotionDescription->Name = L"promotionDescription";
			this->promotionDescription->Width = 150;
			// 
			// promotionQuantity
			// 
			this->promotionQuantity->HeaderText = L"Cantidad";
			this->promotionQuantity->MinimumWidth = 6;
			this->promotionQuantity->Name = L"promotionQuantity";
			this->promotionQuantity->Width = 75;
			// 
			// promotionUnitPrice
			// 
			this->promotionUnitPrice->HeaderText = L"Precio";
			this->promotionUnitPrice->MinimumWidth = 6;
			this->promotionUnitPrice->Name = L"promotionUnitPrice";
			this->promotionUnitPrice->Width = 75;
			// 
			// promotionDeadline
			// 
			this->promotionDeadline->HeaderText = L"Fecha Fin";
			this->promotionDeadline->MinimumWidth = 6;
			this->promotionDeadline->Name = L"promotionDeadline";
			this->promotionDeadline->Width = 110;
			// 
			// promotionStatus
			// 
			this->promotionStatus->HeaderText = L"Estado";
			this->promotionStatus->MinimumWidth = 6;
			this->promotionStatus->Name = L"promotionStatus";
			this->promotionStatus->Width = 75;
			// 
			// btnRegisterDiscount
			// 
			this->btnRegisterDiscount->Location = System::Drawing::Point(35, 375);
			this->btnRegisterDiscount->Name = L"btnRegisterDiscount";
			this->btnRegisterDiscount->Size = System::Drawing::Size(184, 30);
			this->btnRegisterDiscount->TabIndex = 10;
			this->btnRegisterDiscount->Text = L"Registrar descuentos";
			this->btnRegisterDiscount->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(544, 388);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Total";
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(633, 382);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(95, 22);
			this->txtTotal->TabIndex = 12;
			// 
			// lblPetOwnerData
			// 
			this->lblPetOwnerData->AutoSize = true;
			this->lblPetOwnerData->Location = System::Drawing::Point(226, 140);
			this->lblPetOwnerData->Name = L"lblPetOwnerData";
			this->lblPetOwnerData->Size = System::Drawing::Size(235, 16);
			this->lblPetOwnerData->TabIndex = 13;
			this->lblPetOwnerData->Text = L"                                                       Sin Cliente";
			this->lblPetOwnerData->Click += gcnew System::EventHandler(this, &DiscountsForm::lblPetOwnerData_Click);
			// 
			// DiscountsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(753, 423);
			this->Controls->Add(this->lblPetOwnerData);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnRegisterDiscount);
			this->Controls->Add(this->dgvDetails);
			this->Controls->Add(this->txtPetOwner);
			this->Controls->Add(this->txtDate);
			this->Controls->Add(this->btnAddPetOwner);
			this->Controls->Add(this->btnSearchPetOwner);
			this->Controls->Add(this->btnDeletePromotion);
			this->Controls->Add(this->btnAddPromotion);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelfecha);
			this->Name = L"DiscountsForm";
			this->Text = L"Portal de Descuentos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddPromotion_Click(System::Object^ sender, System::EventArgs^ e) {
		PromotionSearchForm^ PromotionForm = gcnew PromotionSearchForm(this);
		PromotionForm->ShowDialog();
	}
		public: Void AddProductToDiscountDetails(Promotions^ p) {
			dgvDetails->Rows->Add(gcnew array<String^> {
					Convert::ToString(p->Id),
					p->Name,
					Convert::ToString(p->Price),
					"1",
					Convert::ToString(p->Price)
			});
			RefreshTotalAmounts();
		}

			  Void SetPetOwner(Petowner^ own) {
				  this->Petowner = own;
				  txtPetOwner->Text = own->DocNumbrer;
				  lblPetOwnerData->Text = this->petowner->DocNumbrer + " - " +
					  own->Lastname + " " + own->Firstname;
			  }

		private: Void RefreshTotalAmounts() {
			double total = 0;
			for (int i = 0; i < dgvDetails->RowCount - 1; i++)
				total += Double::Parse(dgvDetails->Rows[i]->Cells[3]->Value->ToString());
			txtTotal->Text = "" + total;
		}

	private: System::Void dgvDetails_CellValueChanged(System::Object^ sender,
		System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvDetails->Columns[e->ColumnIndex]->Name == "promotionQuantity") {
			RefreshTotalAmounts();
		}
	}
	private: System::Void DiscountsForm_Load(System::Object^ sender, System::EventArgs^ e);

		   System::Void btnRegisterDiscount_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void btnSearchPetOwner_Click(System::Object^ sender, System::EventArgs^ e) {
		petowner = Controller::QueryPetOwnerByDNI(txtPetOwner->Text);
		if (petowner != nullptr) {	
			lblPetOwnerData->Text = petowner->DocNumbrer + " - " + petowner->Lastname +
				" " + petowner->Firstname;
		}
		else {
			MessageBox::Show("Cliente no encontrado!");
		}
	}
	private: System::Void btnAddPetOwner_Click(System::Object^ sender, System::EventArgs^ e) {
		PetOwnerMaintence^ petOwnerMaintence = gcnew PetOwnerMaintence();
		petOwnerMaintence->UseType = 'S';
		//petOwnerMaintence->RefSaleForm = this;
		petOwnerMaintence->ShowDialog();
	}

};
}
