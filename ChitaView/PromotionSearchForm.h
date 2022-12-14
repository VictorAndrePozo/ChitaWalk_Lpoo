#pragma once

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ChitaController;
	using namespace ChitaModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de PromotionSearchForm
	/// </summary>
	public ref class PromotionSearchForm : public System::Windows::Forms::Form
	{
		Form^ refForm;
	public:
		PromotionSearchForm(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refForm = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PromotionSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ txtNameDescription;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgvListPromotions;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionsearchId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionsearchName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionsearchDescription;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionsearchPromotionType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionsearchPromotionValue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionsearchStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionsearchDeadLine;

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
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->txtNameDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvListPromotions = (gcnew System::Windows::Forms::DataGridView());
			this->promotionsearchId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionsearchName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionsearchDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionsearchPromotionType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionsearchPromotionValue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionsearchStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionsearchDeadLine = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListPromotions))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(756, 31);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(128, 37);
			this->btnCancel->TabIndex = 12;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(573, 31);
			this->btnSearch->Margin = System::Windows::Forms::Padding(4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(129, 37);
			this->btnSearch->TabIndex = 11;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &PromotionSearchForm::btnSearch_Click);
			// 
			// txtNameDescription
			// 
			this->txtNameDescription->Location = System::Drawing::Point(172, 46);
			this->txtNameDescription->Margin = System::Windows::Forms::Padding(4);
			this->txtNameDescription->Name = L"txtNameDescription";
			this->txtNameDescription->Size = System::Drawing::Size(340, 22);
			this->txtNameDescription->TabIndex = 10;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(172, 14);
			this->txtId->Margin = System::Windows::Forms::Padding(4);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(132, 22);
			this->txtId->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 50);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Nombre/Descripción:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 17);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Id:";
			// 
			// dgvListPromotions
			// 
			this->dgvListPromotions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListPromotions->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->promotionsearchId,
					this->promotionsearchName, this->promotionsearchDescription, this->promotionsearchPromotionType, this->promotionsearchPromotionValue,
					this->promotionsearchStock, this->promotionsearchDeadLine
			});
			this->dgvListPromotions->Location = System::Drawing::Point(23, 90);
			this->dgvListPromotions->Margin = System::Windows::Forms::Padding(4);
			this->dgvListPromotions->Name = L"dgvListPromotions";
			this->dgvListPromotions->RowHeadersWidth = 51;
			this->dgvListPromotions->Size = System::Drawing::Size(917, 185);
			this->dgvListPromotions->TabIndex = 13;
			this->dgvListPromotions->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PromotionSearchForm::dgvListPromotions_CellClick);
			// 
			// promotionsearchId
			// 
			this->promotionsearchId->HeaderText = L"Id";
			this->promotionsearchId->MinimumWidth = 6;
			this->promotionsearchId->Name = L"promotionsearchId";
			this->promotionsearchId->Width = 30;
			// 
			// promotionsearchName
			// 
			this->promotionsearchName->HeaderText = L"Nombre";
			this->promotionsearchName->MinimumWidth = 6;
			this->promotionsearchName->Name = L"promotionsearchName";
			this->promotionsearchName->Width = 180;
			// 
			// promotionsearchDescription
			// 
			this->promotionsearchDescription->HeaderText = L"Descripción";
			this->promotionsearchDescription->MinimumWidth = 6;
			this->promotionsearchDescription->Name = L"promotionsearchDescription";
			this->promotionsearchDescription->Width = 220;
			// 
			// promotionsearchPromotionType
			// 
			this->promotionsearchPromotionType->HeaderText = L"Tipo";
			this->promotionsearchPromotionType->MinimumWidth = 6;
			this->promotionsearchPromotionType->Name = L"promotionsearchPromotionType";
			this->promotionsearchPromotionType->Width = 125;
			// 
			// promotionsearchPromotionValue
			// 
			this->promotionsearchPromotionValue->HeaderText = L"Valor";
			this->promotionsearchPromotionValue->MinimumWidth = 6;
			this->promotionsearchPromotionValue->Name = L"promotionsearchPromotionValue";
			this->promotionsearchPromotionValue->Width = 85;
			// 
			// promotionsearchStock
			// 
			this->promotionsearchStock->HeaderText = L"Stock";
			this->promotionsearchStock->MinimumWidth = 6;
			this->promotionsearchStock->Name = L"promotionsearchStock";
			this->promotionsearchStock->Width = 125;
			// 
			// promotionsearchDeadLine
			// 
			this->promotionsearchDeadLine->HeaderText = L"DeadLine";
			this->promotionsearchDeadLine->MinimumWidth = 6;
			this->promotionsearchDeadLine->Name = L"promotionsearchDeadLine";
			this->promotionsearchDeadLine->Width = 125;
			// 
			// PromotionSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(964, 297);
			this->Controls->Add(this->dgvListPromotions);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtNameDescription);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"PromotionSearchForm";
			this->Text = L"PromotionSearchForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListPromotions))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtId->Text->Trim() != "") {
			//Búsqueda de promotions por el código ingresado por el usuario
			Controller::LoadPromotionsData();
			Promotions^ p = Controller::QueryPromotionsById(Convert::ToInt32(txtId->Text->Trim()));
			//Se borran los datos del grid.
			dgvListPromotions->Rows->Clear();
			dgvListPromotions->Rows->Add(gcnew array<String^> {
				"" + p->Id,
					p->Name,
					p->Description,
					p->PromotionType,
					"" + p->PromotionValue,
					"" + p->Stock,
					"" + p->DeadLine
			});
		}
		else {
			//Búsqueda de Promotions por el nombre o descripción ingresado por el usuario
			List<Promotions^>^ promotionList = Controller::QueryPromotionsByNameOrDescription(txtNameDescription->Text->Trim());
			//Se borran los datos del grid.
			dgvListPromotions->Rows->Clear();
			for (int i = 0; i < promotionList->Count; i++) {
				dgvListPromotions->Rows->Add(gcnew array<String^> {
					"" + promotionList[i]->Id,
						promotionList[i]->Name,
						promotionList[i]->Description,
						promotionList[i]->PromotionType,
						Convert::ToString(promotionList[i]->PromotionValue),
						Convert::ToString(promotionList[i]->Stock),
						Convert::ToString(promotionList[i]->DeadLine)
				});
			}
		}

	}
	
private: System::Void dgvListPromotions_CellClick(System::Object^ sender,
	System::Windows::Forms::DataGridViewCellEventArgs^ e);


};
}
