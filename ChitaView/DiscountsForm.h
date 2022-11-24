#pragma once
#include "PromotionSearchForm.h"
#include "PetOwnerMaintence.h"

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ChitaModel;
	using namespace ChitaController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de DiscountsForm
	/// </summary>
	public ref class DiscountsForm : public System::Windows::Forms::Form
	{
	private:
		PetOwner^ petowner;

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
	private: System::Windows::Forms::DataGridView^ dgvDiscountDetails;





	private: System::Windows::Forms::Button^ btnRegisterDiscount;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::Label^ lblPetOwnerData;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ discountId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ discountName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ discountDescription;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ discountQuantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ discountDiscountType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ discountUnitDiscountValue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ discountDeadLine;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ discountSubTotal;
























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
			this->dgvDiscountDetails = (gcnew System::Windows::Forms::DataGridView());
			this->discountId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->discountName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->discountDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->discountQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->discountDiscountType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->discountUnitDiscountValue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->discountDeadLine = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->discountSubTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnRegisterDiscount = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->lblPetOwnerData = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDiscountDetails))->BeginInit();
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
			this->btnAddPromotion->Location = System::Drawing::Point(147, 116);
			this->btnAddPromotion->Name = L"btnAddPromotion";
			this->btnAddPromotion->Size = System::Drawing::Size(177, 40);
			this->btnAddPromotion->TabIndex = 2;
			this->btnAddPromotion->Text = L"Agregar Promoción";
			this->btnAddPromotion->UseVisualStyleBackColor = true;
			this->btnAddPromotion->Click += gcnew System::EventHandler(this, &DiscountsForm::btnAddPromotion_Click);
			// 
			// btnDeletePromotion
			// 
			this->btnDeletePromotion->Location = System::Drawing::Point(599, 116);
			this->btnDeletePromotion->Name = L"btnDeletePromotion";
			this->btnDeletePromotion->Size = System::Drawing::Size(179, 40);
			this->btnDeletePromotion->TabIndex = 3;
			this->btnDeletePromotion->Text = L"Eliminar promoción";
			this->btnDeletePromotion->UseVisualStyleBackColor = true;
			this->btnDeletePromotion->Click += gcnew System::EventHandler(this, &DiscountsForm::btnDeletePromotion_Click);
			// 
			// btnSearchPetOwner
			// 
			this->btnSearchPetOwner->Location = System::Drawing::Point(490, 47);
			this->btnSearchPetOwner->Name = L"btnSearchPetOwner";
			this->btnSearchPetOwner->Size = System::Drawing::Size(97, 28);
			this->btnSearchPetOwner->TabIndex = 5;
			this->btnSearchPetOwner->Text = L"Buscar";
			this->btnSearchPetOwner->UseVisualStyleBackColor = true;
			this->btnSearchPetOwner->Click += gcnew System::EventHandler(this, &DiscountsForm::btnSearchPetOwner_Click);
			// 
			// btnAddPetOwner
			// 
			this->btnAddPetOwner->Location = System::Drawing::Point(613, 47);
			this->btnAddPetOwner->Name = L"btnAddPetOwner";
			this->btnAddPetOwner->Size = System::Drawing::Size(102, 28);
			this->btnAddPetOwner->TabIndex = 6;
			this->btnAddPetOwner->Text = L"+ Dueño";
			this->btnAddPetOwner->UseVisualStyleBackColor = true;
			this->btnAddPetOwner->Click += gcnew System::EventHandler(this, &DiscountsForm::btnAddPetOwner_Click);
			// 
			// txtDate
			// 
			this->txtDate->Location = System::Drawing::Point(118, 16);
			this->txtDate->Name = L"txtDate";
			this->txtDate->ReadOnly = true;
			this->txtDate->Size = System::Drawing::Size(198, 22);
			this->txtDate->TabIndex = 7;
			// 
			// txtPetOwner
			// 
			this->txtPetOwner->Location = System::Drawing::Point(118, 50);
			this->txtPetOwner->Name = L"txtPetOwner";
			this->txtPetOwner->Size = System::Drawing::Size(343, 22);
			this->txtPetOwner->TabIndex = 8;
			this->txtPetOwner->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// dgvDiscountDetails
			// 
			this->dgvDiscountDetails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDiscountDetails->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->discountId,
					this->discountName, this->discountDescription, this->discountQuantity, this->discountDiscountType, this->discountUnitDiscountValue,
					this->discountDeadLine, this->discountSubTotal
			});
			this->dgvDiscountDetails->Location = System::Drawing::Point(24, 173);
			this->dgvDiscountDetails->Name = L"dgvDiscountDetails";
			this->dgvDiscountDetails->RowHeadersWidth = 51;
			this->dgvDiscountDetails->RowTemplate->Height = 24;
			this->dgvDiscountDetails->Size = System::Drawing::Size(894, 171);
			this->dgvDiscountDetails->TabIndex = 9;
			// 
			// discountId
			// 
			this->discountId->HeaderText = L"Id";
			this->discountId->MinimumWidth = 6;
			this->discountId->Name = L"discountId";
			this->discountId->Width = 60;
			// 
			// discountName
			// 
			this->discountName->HeaderText = L"Nombre";
			this->discountName->MinimumWidth = 6;
			this->discountName->Name = L"discountName";
			this->discountName->Width = 125;
			// 
			// discountDescription
			// 
			this->discountDescription->HeaderText = L"Descripción";
			this->discountDescription->MinimumWidth = 6;
			this->discountDescription->Name = L"discountDescription";
			this->discountDescription->Width = 150;
			// 
			// discountQuantity
			// 
			this->discountQuantity->HeaderText = L"Cantidad";
			this->discountQuantity->MinimumWidth = 6;
			this->discountQuantity->Name = L"discountQuantity";
			this->discountQuantity->Width = 75;
			// 
			// discountDiscountType
			// 
			this->discountDiscountType->HeaderText = L"Tipo";
			this->discountDiscountType->MinimumWidth = 6;
			this->discountDiscountType->Name = L"discountDiscountType";
			this->discountDiscountType->Width = 110;
			// 
			// discountUnitDiscountValue
			// 
			this->discountUnitDiscountValue->HeaderText = L"Valor";
			this->discountUnitDiscountValue->MinimumWidth = 6;
			this->discountUnitDiscountValue->Name = L"discountUnitDiscountValue";
			this->discountUnitDiscountValue->Width = 75;
			// 
			// discountDeadLine
			// 
			this->discountDeadLine->HeaderText = L"DeadLine";
			this->discountDeadLine->MinimumWidth = 6;
			this->discountDeadLine->Name = L"discountDeadLine";
			this->discountDeadLine->Width = 125;
			// 
			// discountSubTotal
			// 
			this->discountSubTotal->HeaderText = L"Sub Total Descontado";
			this->discountSubTotal->MinimumWidth = 6;
			this->discountSubTotal->Name = L"discountSubTotal";
			this->discountSubTotal->Width = 125;
			// 
			// btnRegisterDiscount
			// 
			this->btnRegisterDiscount->Location = System::Drawing::Point(35, 363);
			this->btnRegisterDiscount->Name = L"btnRegisterDiscount";
			this->btnRegisterDiscount->Size = System::Drawing::Size(184, 42);
			this->btnRegisterDiscount->TabIndex = 10;
			this->btnRegisterDiscount->Text = L"Registrar descuentos";
			this->btnRegisterDiscount->UseVisualStyleBackColor = true;
			this->btnRegisterDiscount->Click += gcnew System::EventHandler(this, &DiscountsForm::btnRegisterDiscount_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(544, 385);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Stock Final";
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
			this->lblPetOwnerData->Location = System::Drawing::Point(144, 85);
			this->lblPetOwnerData->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPetOwnerData->Name = L"lblPetOwnerData";
			this->lblPetOwnerData->Size = System::Drawing::Size(317, 28);
			this->lblPetOwnerData->TabIndex = 18;
			this->lblPetOwnerData->Text = L"Sin cliente";
			this->lblPetOwnerData->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// DiscountsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(942, 423);
			this->Controls->Add(this->lblPetOwnerData);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnRegisterDiscount);
			this->Controls->Add(this->dgvDiscountDetails);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDiscountDetails))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnAddPromotion_Click(System::Object^ sender, System::EventArgs^ e) {
		PromotionSearchForm^ promotionForm = gcnew PromotionSearchForm(this);
		promotionForm->ShowDialog();
	}

	public: Void AddPromotionToDiscountDetails(Promotions^ p) {
		dgvDiscountDetails->Rows->Add(gcnew array<String^> {
				Convert::ToString(p->Id),
				p->Name,
				p->Description,
				"1",
				p->PromotionType,
				Convert::ToString(p->PromotionValue),
				p->DeadLine,
				Convert::ToString(p->PromotionValue)
		});
		RefreshTotalAmounts();
	}
		  
		  
		  Void SetPetOwner(PetOwner^ User) {
			  this->petowner = User;
			  txtPetOwner->Text = User->DocNumbrer;
			  lblPetOwnerData->Text = this->petowner->DocNumbrer + " - " +
				  User->Firstname + " " + User->Lastname;
		  }

		  private: Void RefreshTotalAmounts() {
			  double total = 0;
			  for (int i = 0; i < dgvDiscountDetails->RowCount - 1; i++)
				  total += Double::Parse(dgvDiscountDetails->Rows[i]->Cells[3]->Value->ToString());
				  txtTotal->Text = "" + total;
		  }
	private: System::Void dgvDiscountDetails_CellValueChanged(System::Object^ sender,
		 System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		 if (dgvDiscountDetails->Columns[e->ColumnIndex]->Name == "discountQuantity" && (dgvDiscountDetails->Rows[e->ColumnIndex]->Cells[3]->Value == "Vale")) {
			 
			 dgvDiscountDetails->Rows[e->RowIndex]->Cells[7]->Value =
				 Int32::Parse(dgvDiscountDetails->CurrentCell->Value->ToString()) *
				 Double::Parse(dgvDiscountDetails->Rows[e->RowIndex]->Cells[2]->Value->ToString());
			 RefreshTotalAmounts();
		}
	}
	private: System::Void DiscountForm_Load(System::Object^ sender, System::EventArgs^ e) {
		txtDate->Text = DateTime::Now.ToString("dd/MM/yyyy");
	}
	private: System::Void btnSearchPetOwner_Click(System::Object^ sender, System::EventArgs^ e) {
		petowner = Controller::QueryPetOwnerByDNI(txtPetOwner->Text);
		if (petowner != nullptr) {
				lblPetOwnerData->Text = petowner->DocNumbrer + " - " + petowner->Firstname +
				" " + petowner->Lastname;
		} else {
			MessageBox::Show("¡Dueño no encontrado!");
		}
	}

	private: System::Void btnAddPetOwner_Click(System::Object^ sender, System::EventArgs^ e) {
		PetOwnerMaintence^ petOwnerMaintence = gcnew PetOwnerMaintence();
		petOwnerMaintence->UseType = 'S';
		petOwnerMaintence->RefDiscountsForm = this;
		petOwnerMaintence->ShowDialog();
	}

private: System::Void btnRegisterDiscount_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void btnDeletePromotion_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
