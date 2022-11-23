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
	/// Resumen de Promotionsmaintenance
	/// </summary>
	public ref class Promotionsmaintenance : public System::Windows::Forms::Form
	{
	public:
		Promotionsmaintenance(void)
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
		~Promotionsmaintenance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtpDeadline;
	protected:

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Button^ btnPhoto;
	private: System::Windows::Forms::DataGridView^ dgvPromotion;









	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::PictureBox^ pbPhoto;
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
	private: System::Windows::Forms::TextBox^ txtPromotionValue;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenanceId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenanceName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenanceDescription;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenancePromotionType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenancePromotionValue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenanceStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ promotionmaintenanceDeadline;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cbPromotionType;










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
			this->dtpDeadline = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnPhoto = (gcnew System::Windows::Forms::Button());
			this->dgvPromotion = (gcnew System::Windows::Forms::DataGridView());
			this->promotionmaintenanceId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionmaintenanceName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionmaintenanceDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionmaintenancePromotionType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionmaintenancePromotionValue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionmaintenanceStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->promotionmaintenanceDeadline = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
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
			this->txtPromotionValue = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cbPromotionType = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPromotion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dtpDeadline
			// 
			this->dtpDeadline->Location = System::Drawing::Point(149, 183);
			this->dtpDeadline->Name = L"dtpDeadline";
			this->dtpDeadline->Size = System::Drawing::Size(393, 22);
			this->dtpDeadline->TabIndex = 59;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(52, 189);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 16);
			this->label7->TabIndex = 57;
			this->label7->Text = L"Deadline";
			// 
			// btnPhoto
			// 
			this->btnPhoto->Location = System::Drawing::Point(591, 239);
			this->btnPhoto->Margin = System::Windows::Forms::Padding(4);
			this->btnPhoto->Name = L"btnPhoto";
			this->btnPhoto->Size = System::Drawing::Size(180, 41);
			this->btnPhoto->TabIndex = 55;
			this->btnPhoto->Text = L"Agregar foto";
			this->btnPhoto->UseVisualStyleBackColor = true;
			this->btnPhoto->Click += gcnew System::EventHandler(this, &Promotionsmaintenance::btnPhoto_Click);
			// 
			// dgvPromotion
			// 
			this->dgvPromotion->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPromotion->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->promotionmaintenanceId,
					this->promotionmaintenanceName, this->promotionmaintenanceDescription, this->promotionmaintenancePromotionType, this->promotionmaintenancePromotionValue,
					this->promotionmaintenanceStock, this->promotionmaintenanceDeadline
			});
			this->dgvPromotion->Location = System::Drawing::Point(22, 374);
			this->dgvPromotion->Margin = System::Windows::Forms::Padding(4);
			this->dgvPromotion->Name = L"dgvPromotion";
			this->dgvPromotion->RowHeadersWidth = 51;
			this->dgvPromotion->Size = System::Drawing::Size(748, 185);
			this->dgvPromotion->TabIndex = 54;
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
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(559, 315);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(178, 41);
			this->btnDelete->TabIndex = 53;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &Promotionsmaintenance::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(315, 315);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(4);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(175, 41);
			this->btnUpdate->TabIndex = 52;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &Promotionsmaintenance::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(55, 315);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(189, 41);
			this->btnAdd->TabIndex = 51;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Promotionsmaintenance::btnAdd_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(591, 49);
			this->pbPhoto->Margin = System::Windows::Forms::Padding(4);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(179, 168);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhoto->TabIndex = 50;
			this->pbPhoto->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(51, 220);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 16);
			this->label5->TabIndex = 49;
			this->label5->Text = L"Stock";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 120);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Descripción";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 83);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Nombre";
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(149, 220);
			this->txtStock->Margin = System::Windows::Forms::Padding(4);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(98, 22);
			this->txtStock->TabIndex = 45;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(149, 117);
			this->txtDescription->Margin = System::Windows::Forms::Padding(4);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(393, 54);
			this->txtDescription->TabIndex = 43;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(149, 84);
			this->txtName->Margin = System::Windows::Forms::Padding(4);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(393, 22);
			this->txtName->TabIndex = 42;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(149, 51);
			this->txtId->Margin = System::Windows::Forms::Padding(4);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(98, 22);
			this->txtId->TabIndex = 41;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 50);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Id";
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(794, 28);
			this->menuStrip1->TabIndex = 39;
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
			// txtPromotionValue
			// 
			this->txtPromotionValue->Location = System::Drawing::Point(149, 258);
			this->txtPromotionValue->Margin = System::Windows::Forms::Padding(4);
			this->txtPromotionValue->Name = L"txtPromotionValue";
			this->txtPromotionValue->Size = System::Drawing::Size(98, 22);
			this->txtPromotionValue->TabIndex = 61;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(52, 258);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 16);
			this->label8->TabIndex = 60;
			this->label8->Text = L"Valor de la ";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(52, 283);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 16);
			this->label9->TabIndex = 62;
			this->label9->Text = L"promoción: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(312, 233);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 16);
			this->label4->TabIndex = 63;
			this->label4->Text = L"Tipo de ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(312, 261);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 16);
			this->label10->TabIndex = 64;
			this->label10->Text = L"promoción:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(418, 242);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 16);
			this->label6->TabIndex = 66;
			// 
			// cbPromotionType
			// 
			this->cbPromotionType->FormattingEnabled = true;
			this->cbPromotionType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Descuento", L"Vale" });
			this->cbPromotionType->Location = System::Drawing::Point(421, 234);
			this->cbPromotionType->Margin = System::Windows::Forms::Padding(4);
			this->cbPromotionType->Name = L"cbPromotionType";
			this->cbPromotionType->Size = System::Drawing::Size(121, 24);
			this->cbPromotionType->TabIndex = 67;
			// 
			// Promotionsmaintenance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 585);
			this->Controls->Add(this->cbPromotionType);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtPromotionValue);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dtpDeadline);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnPhoto);
			this->Controls->Add(this->dgvPromotion);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Promotionsmaintenance";
			this->Text = L"Promotionsmaintenance";
			this->Load += gcnew System::EventHandler(this, &Promotionsmaintenance::Promotionsmaintenance_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPromotion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void RefreshGrid() {
			List<Promotions^>^ PromotionList = Controller::QueryAllPromotions();
			dgvPromotion->Rows->Clear();
			for (int i = 0; i < PromotionList->Count; i++) {
				dgvPromotion->Rows->Add(gcnew array<String^>{
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

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Promotions^ c = gcnew Promotions();

		c->Id = Int32::Parse(txtId->Text);
		c->Name = txtName->Text;
		c->Description = txtDescription->Text;
		c->Stock = Int32::Parse(txtStock->Text);
		c->Status = 'A';
		c->PromotionType = cbPromotionType->Text;
		c->PromotionValue = Double::Parse(txtPromotionValue->Text);
		c->DeadLine = dtpDeadline->Value.ToString("yyyy-MM-dd");
		//c->Photo = array::Parse(PicturePhoto->Picture);

		Controller::AddPromotions(c);
		RefreshGrid();
		ClearControls();
	}

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		Promotions^ c = gcnew Promotions();

		c->Id = Int32::Parse(txtId->Text);
		c->Name = txtName->Text;
		c->Description = txtDescription->Text;
		c->Stock = Int32::Parse(txtStock->Text);
		c->Status = 'A';
		//c->Photo = array::Parse(PicturePhoto->Picture);
		c->PromotionType = cbPromotionType->Text;
		c->PromotionValue = Double::Parse(txtPromotionValue->Text);
		c->DeadLine = dtpDeadline->Value.ToString("yyyy-MM-dd");

		Controller::UpdatePromotions(c);
		RefreshGrid();

	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int PromotionsId = Int32::Parse(txtId->Text);
		Controller::DeletePromotions(PromotionsId);
		RefreshGrid();
		ClearControls();

	}

	private: System::Void dgvPromotion_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int selectedRowIndex = dgvPromotion->SelectedCells[0]->RowIndex;
		int PromotionsId = Int32::Parse(dgvPromotion->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Promotions^ Promotion = Controller::QueryPromotionsById(PromotionsId);

				txtId->Text = "" + Promotion->Id;
				txtName->Text = Promotion->Name;
				txtDescription->Text = Promotion->Description;
				cbPromotionType->Text = "" + Promotion->PromotionType;
				txtPromotionValue->Text = "" + Promotion->PromotionValue;
				dtpDeadline->Text = "" + Promotion->DeadLine;
				txtStock->Text = "" + Promotion->Stock;

	}

		   void ClearControls() {
			   txtId->Clear();
			   txtName->Clear();
			   txtDescription->Clear();
			   //cbPromotionType->Clear();
			   txtPromotionValue->Clear();
			   txtStock->Clear();

		   }

	public:
		Void DisableControls() {

			btnAdd->Enabled = false;
			btnUpdate->Enabled = false;
			btnDelete->Enabled = false;
		}

		Void EnableControls(){
		
			btnAdd->Enabled = true;
			btnUpdate->Enabled = false;
			btnDelete->Enabled = false;
		}

private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	EnableControls();
	btnAdd->Enabled = true;
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;


}
private: System::Void modificarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	btnAdd->Enabled = false;
	btnUpdate->Enabled = true;
	btnDelete->Enabled = true;

}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void Promotionsmaintenance_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
}

private: System::Void btnPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}
}


};
}
