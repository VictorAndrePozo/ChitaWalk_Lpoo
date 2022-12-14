#pragma once

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
	/// Resumen de PromotionsSearchs
	/// </summary>
	public ref class PromotionsSearchs : public System::Windows::Forms::Form
	{
	public:
		PromotionsSearchs(void)
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
		~PromotionsSearchs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cbPromotionType;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtPromotionValue;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DateTimePicker^ dtpDeadline;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dgvPromotion1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenanceId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenanceName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenanceDescription;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenancePromotionType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenancePromotionValue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenanceStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenanceDeadline;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtStock;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevaPromocionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarPromocionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;

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
			this->cbPromotionType = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtPromotionValue = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dtpDeadline = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dgvPromotion1 = (gcnew System::Windows::Forms::DataGridView());
			this->promotionmaintenanceId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionmaintenanceName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionmaintenanceDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionmaintenancePromotionType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionmaintenancePromotionValue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionmaintenanceStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionmaintenanceDeadline = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevaPromocionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarPromocionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPromotion1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// cbPromotionType
			// 
			this->cbPromotionType->FormattingEnabled = true;
			this->cbPromotionType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Descuento", L"Vale" });
			this->cbPromotionType->Location = System::Drawing::Point(412, 236);
			this->cbPromotionType->Margin = System::Windows::Forms::Padding(4);
			this->cbPromotionType->Name = L"cbPromotionType";
			this->cbPromotionType->Size = System::Drawing::Size(121, 24);
			this->cbPromotionType->TabIndex = 91;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(409, 244);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 16);
			this->label6->TabIndex = 90;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(303, 263);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 16);
			this->label10->TabIndex = 89;
			this->label10->Text = L"promoción:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(303, 235);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 16);
			this->label4->TabIndex = 88;
			this->label4->Text = L"Tipo de ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(43, 285);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 16);
			this->label9->TabIndex = 87;
			this->label9->Text = L"promoción: ";
			// 
			// txtPromotionValue
			// 
			this->txtPromotionValue->Location = System::Drawing::Point(140, 260);
			this->txtPromotionValue->Margin = System::Windows::Forms::Padding(4);
			this->txtPromotionValue->Name = L"txtPromotionValue";
			this->txtPromotionValue->Size = System::Drawing::Size(98, 22);
			this->txtPromotionValue->TabIndex = 86;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(43, 260);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 16);
			this->label8->TabIndex = 85;
			this->label8->Text = L"Valor de la ";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// dtpDeadline
			// 
			this->dtpDeadline->Location = System::Drawing::Point(140, 185);
			this->dtpDeadline->Name = L"dtpDeadline";
			this->dtpDeadline->Size = System::Drawing::Size(393, 22);
			this->dtpDeadline->TabIndex = 84;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(43, 191);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 16);
			this->label7->TabIndex = 83;
			this->label7->Text = L"Deadline";
			// 
			// dgvPromotion1
			// 
			this->dgvPromotion1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPromotion1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->promotionmaintenanceId,
					this->promotionmaintenanceName, this->promotionmaintenanceDescription, this->promotionmaintenancePromotionType, this->promotionmaintenancePromotionValue,
					this->promotionmaintenanceStock, this->promotionmaintenanceDeadline
			});
			this->dgvPromotion1->Location = System::Drawing::Point(13, 318);
			this->dgvPromotion1->Margin = System::Windows::Forms::Padding(4);
			this->dgvPromotion1->Name = L"dgvPromotion1";
			this->dgvPromotion1->RowHeadersWidth = 51;
			this->dgvPromotion1->Size = System::Drawing::Size(748, 293);
			this->dgvPromotion1->TabIndex = 81;
			this->dgvPromotion1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PromotionsSearchs::dgvPromotion1_CellClick);
			// 
			// promotionmaintenanceId
			// 
			this->promotionmaintenanceId->HeaderText = L"Id";
			this->promotionmaintenanceId->MinimumWidth = 6;
			this->promotionmaintenanceId->Name = L"promotionmaintenanceId";
			this->promotionmaintenanceId->Width = 50;
			// 
			// promotionmaintenanceName
			// 
			this->promotionmaintenanceName->HeaderText = L"Nombre";
			this->promotionmaintenanceName->MinimumWidth = 6;
			this->promotionmaintenanceName->Name = L"promotionmaintenanceName";
			this->promotionmaintenanceName->Width = 150;
			// 
			// promotionmaintenanceDescription
			// 
			this->promotionmaintenanceDescription->HeaderText = L"Descripcion";
			this->promotionmaintenanceDescription->MinimumWidth = 6;
			this->promotionmaintenanceDescription->Name = L"promotionmaintenanceDescription";
			this->promotionmaintenanceDescription->Width = 250;
			// 
			// promotionmaintenancePromotionType
			// 
			this->promotionmaintenancePromotionType->HeaderText = L"Tipo";
			this->promotionmaintenancePromotionType->MinimumWidth = 6;
			this->promotionmaintenancePromotionType->Name = L"promotionmaintenancePromotionType";
			this->promotionmaintenancePromotionType->Width = 80;
			// 
			// promotionmaintenancePromotionValue
			// 
			this->promotionmaintenancePromotionValue->HeaderText = L"Valor";
			this->promotionmaintenancePromotionValue->MinimumWidth = 6;
			this->promotionmaintenancePromotionValue->Name = L"promotionmaintenancePromotionValue";
			this->promotionmaintenancePromotionValue->Width = 70;
			// 
			// promotionmaintenanceStock
			// 
			this->promotionmaintenanceStock->HeaderText = L"Stock";
			this->promotionmaintenanceStock->MinimumWidth = 6;
			this->promotionmaintenanceStock->Name = L"promotionmaintenanceStock";
			this->promotionmaintenanceStock->Width = 70;
			// 
			// promotionmaintenanceDeadline
			// 
			this->promotionmaintenanceDeadline->HeaderText = L"Deadline";
			this->promotionmaintenanceDeadline->MinimumWidth = 6;
			this->promotionmaintenanceDeadline->Name = L"promotionmaintenanceDeadline";
			this->promotionmaintenanceDeadline->Width = 150;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(572, 141);
			this->btnSearch->Margin = System::Windows::Forms::Padding(4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(189, 53);
			this->btnSearch->TabIndex = 78;
			this->btnSearch->Text = L"Buscar por ID";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &PromotionsSearchs::btnSearch_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(42, 222);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 16);
			this->label5->TabIndex = 76;
			this->label5->Text = L"Stock";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 122);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 75;
			this->label3->Text = L"Descripción";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 85);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 74;
			this->label2->Text = L"Nombre";
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(140, 222);
			this->txtStock->Margin = System::Windows::Forms::Padding(4);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(98, 22);
			this->txtStock->TabIndex = 73;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(140, 119);
			this->txtDescription->Margin = System::Windows::Forms::Padding(4);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(393, 54);
			this->txtDescription->TabIndex = 72;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(140, 86);
			this->txtName->Margin = System::Windows::Forms::Padding(4);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(393, 22);
			this->txtName->TabIndex = 71;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(140, 53);
			this->txtId->Margin = System::Windows::Forms::Padding(4);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(98, 22);
			this->txtId->TabIndex = 70;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 52);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 69;
			this->label1->Text = L"Id";
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(773, 28);
			this->menuStrip1->TabIndex = 68;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevaPromocionToolStripMenuItem,
					this->modificarPromocionToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevaPromocionToolStripMenuItem
			// 
			this->nuevaPromocionToolStripMenuItem->Name = L"nuevaPromocionToolStripMenuItem";
			this->nuevaPromocionToolStripMenuItem->Size = System::Drawing::Size(233, 26);
			this->nuevaPromocionToolStripMenuItem->Text = L"Nuevo promocion";
			// 
			// modificarPromocionToolStripMenuItem
			// 
			this->modificarPromocionToolStripMenuItem->Name = L"modificarPromocionToolStripMenuItem";
			this->modificarPromocionToolStripMenuItem->Size = System::Drawing::Size(233, 26);
			this->modificarPromocionToolStripMenuItem->Text = L"Modificar promocion";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(233, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// PromotionsSearchs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 624);
			this->Controls->Add(this->cbPromotionType);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtPromotionValue);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dtpDeadline);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dgvPromotion1);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"PromotionsSearchs";
			this->Text = L"PromotionsSearchs";
			this->Load += gcnew System::EventHandler(this, &PromotionsSearchs::PromotionsSearchs_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPromotion1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PromotionsSearchs_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshGrid();
	}
		   void RefreshGrid() {
			   List<Promotions^>^ PromotionList = Controller::QueryAllPromotions();
			   dgvPromotion1->Rows->Clear();
			   for (int i = 0; i < PromotionList->Count; i++) {
				   dgvPromotion1->Rows->Add(gcnew array<String^>{
					   "" + PromotionList[i]->Id,
						   PromotionList[i]->Name,
						   PromotionList[i]->Description,
						   "" + PromotionList[i]->PromotionType,
						   "" + PromotionList[i]->PromotionValue,
						   "" + PromotionList[i]->Stock,
						   "" + PromotionList[i]->DeadLine,
						   "" + PromotionList[i]->Status,
						   "" + PromotionList[i]->Photo,
				   });
			   }
		   }
			private: System::Void dgvPromotion1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
				int selectedRowIndex = dgvPromotion1->SelectedCells[0]->RowIndex;
				int PromotionsId = Int32::Parse(dgvPromotion1->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
				Promotions^ Promotion = Controller::QueryPromotionsById(PromotionsId);

				txtId->Text = "" + Promotion->Id;
				txtName->Text = Promotion->Name;
				txtDescription->Text = Promotion->Description;
				cbPromotionType->Text = "" + Promotion->PromotionType;
				txtPromotionValue->Text = "" + Promotion->PromotionValue;
				dtpDeadline->Text = "" + Promotion->DeadLine;
				txtStock->Text = "" + Promotion->Stock;

			}
			private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
				String^ a = txtId->Text;
				int promId = Int32::Parse(a);
				Promotions^ Promotion = Controller::QueryPromotionsById(promId);
				//MessageBox::Show(customer->ToString()); //Polimorfismo
				if (Promotion != nullptr) {
					txtId->Text = "" + Promotion->Id;
					txtName->Text = Promotion->Name;
					txtDescription->Text = Promotion->Description;
					cbPromotionType->Text = "" + Promotion->PromotionType;
					txtPromotionValue->Text = "" + Promotion->PromotionValue;
					dtpDeadline->Text = "" + Promotion->DeadLine;
					txtStock->Text = "" + Promotion->Stock;
				}
			}

};
}
