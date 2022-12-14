#pragma once
#include "PetForm.h"

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ChitaModel;
	using namespace ChitaController;
	using namespace System::Collections::Generic;	//para listas


	/// <summary>
	/// Resumen de PetForm
	/// </summary>
	public ref class PetForm : public System::Windows::Forms::Form
	{
	public:
		PetForm(void)
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
		~PetForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::Button^ btnRemove;
	private: System::Windows::Forms::TextBox^ txtPetName;
	private: System::Windows::Forms::TextBox^ txtPetAge;

	private: System::Windows::Forms::ComboBox^ cbPetKind;
	private: System::Windows::Forms::ComboBox^ cbPetVaccines;

	private: System::Windows::Forms::ComboBox^ cbPetConduct;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pbPetPhoto;
	private: System::Windows::Forms::DataGridView^ dgvPetList;

	private: System::Windows::Forms::TextBox^ txtPetId;







	private: System::Windows::Forms::Button^ btnAddPetPhoto;
	private: System::Windows::Forms::ComboBox^ cbPetSpecies;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPetId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPetName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPedKind;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPetSpecies;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPetAge;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPetConduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPetVaccines;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->txtPetName = (gcnew System::Windows::Forms::TextBox());
			this->txtPetAge = (gcnew System::Windows::Forms::TextBox());
			this->cbPetKind = (gcnew System::Windows::Forms::ComboBox());
			this->cbPetVaccines = (gcnew System::Windows::Forms::ComboBox());
			this->cbPetConduct = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pbPetPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->dgvPetList = (gcnew System::Windows::Forms::DataGridView());
			this->txtPetId = (gcnew System::Windows::Forms::TextBox());
			this->btnAddPetPhoto = (gcnew System::Windows::Forms::Button());
			this->cbPetSpecies = (gcnew System::Windows::Forms::ComboBox());
			this->dgvPetId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPetName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPedKind = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPetSpecies = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPetAge = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPetConduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPetVaccines = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPetPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPetList))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 54);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(288, 129);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Edad:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 91);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo de mascota:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 129);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Especie:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 202);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(203, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"¿Cuenta con todas sus vacunas\?";
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(16, 251);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 28);
			this->btnAdd->TabIndex = 17;
			this->btnAdd->Text = L"Añadir";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &PetForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(140, 251);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(100, 28);
			this->btnUpdate->TabIndex = 18;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &PetForm::btnUpdate_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(268, 251);
			this->btnRemove->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(100, 28);
			this->btnRemove->TabIndex = 19;
			this->btnRemove->Text = L"Eliminar";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &PetForm::btnRemove_Click);
			// 
			// txtPetName
			// 
			this->txtPetName->Location = System::Drawing::Point(101, 50);
			this->txtPetName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtPetName->Name = L"txtPetName";
			this->txtPetName->Size = System::Drawing::Size(303, 22);
			this->txtPetName->TabIndex = 20;
			// 
			// txtPetAge
			// 
			this->txtPetAge->Location = System::Drawing::Point(347, 126);
			this->txtPetAge->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtPetAge->Name = L"txtPetAge";
			this->txtPetAge->Size = System::Drawing::Size(57, 22);
			this->txtPetAge->TabIndex = 21;
			// 
			// cbPetKind
			// 
			this->cbPetKind->FormattingEnabled = true;
			this->cbPetKind->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Doméstico", L"Exótico" });
			this->cbPetKind->Location = System::Drawing::Point(145, 87);
			this->cbPetKind->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cbPetKind->Name = L"cbPetKind";
			this->cbPetKind->Size = System::Drawing::Size(259, 24);
			this->cbPetKind->TabIndex = 23;
			// 
			// cbPetVaccines
			// 
			this->cbPetVaccines->FormattingEnabled = true;
			this->cbPetVaccines->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No", L"Sí" });
			this->cbPetVaccines->Location = System::Drawing::Point(255, 198);
			this->cbPetVaccines->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cbPetVaccines->Name = L"cbPetVaccines";
			this->cbPetVaccines->Size = System::Drawing::Size(61, 24);
			this->cbPetVaccines->TabIndex = 25;
			// 
			// cbPetConduct
			// 
			this->cbPetConduct->FormattingEnabled = true;
			this->cbPetConduct->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Juguetón", L"Tranquilo", L"Hiperactivo", L"Agresivo" });
			this->cbPetConduct->Location = System::Drawing::Point(101, 160);
			this->cbPetConduct->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cbPetConduct->Name = L"cbPetConduct";
			this->cbPetConduct->Size = System::Drawing::Size(177, 24);
			this->cbPetConduct->TabIndex = 26;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 164);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 16);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Conducta:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(19, 18);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 16);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Id:";
			// 
			// pbPetPhoto
			// 
			this->pbPetPhoto->Location = System::Drawing::Point(435, 15);
			this->pbPetPhoto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pbPetPhoto->Name = L"pbPetPhoto";
			this->pbPetPhoto->Size = System::Drawing::Size(183, 222);
			this->pbPetPhoto->TabIndex = 29;
			this->pbPetPhoto->TabStop = false;
			// 
			// dgvPetList
			// 
			this->dgvPetList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPetList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dgvPetId,
					this->dgvPetName, this->dgvPedKind, this->dgvPetSpecies, this->dgvPetAge, this->dgvPetConduct, this->dgvPetVaccines
			});
			this->dgvPetList->Location = System::Drawing::Point(9, 318);
			this->dgvPetList->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgvPetList->Name = L"dgvPetList";
			this->dgvPetList->RowHeadersWidth = 51;
			this->dgvPetList->Size = System::Drawing::Size(644, 251);
			this->dgvPetList->TabIndex = 30;
			this->dgvPetList->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PetForm::dgvPetList_CellClick);
			// 
			// txtPetId
			// 
			this->txtPetId->Location = System::Drawing::Point(101, 15);
			this->txtPetId->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtPetId->Name = L"txtPetId";
			this->txtPetId->Size = System::Drawing::Size(303, 22);
			this->txtPetId->TabIndex = 31;
			// 
			// btnAddPetPhoto
			// 
			this->btnAddPetPhoto->Location = System::Drawing::Point(479, 251);
			this->btnAddPetPhoto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnAddPetPhoto->Name = L"btnAddPetPhoto";
			this->btnAddPetPhoto->Size = System::Drawing::Size(100, 28);
			this->btnAddPetPhoto->TabIndex = 32;
			this->btnAddPetPhoto->Text = L"Añadir Foto";
			this->btnAddPetPhoto->UseVisualStyleBackColor = true;
			// 
			// cbPetSpecies
			// 
			this->cbPetSpecies->FormattingEnabled = true;
			this->cbPetSpecies->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Doméstico", L"Exótico" });
			this->cbPetSpecies->Location = System::Drawing::Point(101, 124);
			this->cbPetSpecies->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cbPetSpecies->Name = L"cbPetSpecies";
			this->cbPetSpecies->Size = System::Drawing::Size(177, 24);
			this->cbPetSpecies->TabIndex = 33;
			// 
			// dgvPetId
			// 
			this->dgvPetId->HeaderText = L"Id";
			this->dgvPetId->MinimumWidth = 6;
			this->dgvPetId->Name = L"dgvPetId";
			this->dgvPetId->Width = 70;
			// 
			// dgvPetName
			// 
			this->dgvPetName->HeaderText = L"Nombre";
			this->dgvPetName->MinimumWidth = 6;
			this->dgvPetName->Name = L"dgvPetName";
			// 
			// dgvPedKind
			// 
			this->dgvPedKind->HeaderText = L"Tipo";
			this->dgvPedKind->MinimumWidth = 6;
			this->dgvPedKind->Name = L"dgvPedKind";
			// 
			// dgvPetSpecies
			// 
			this->dgvPetSpecies->HeaderText = L"Especie";
			this->dgvPetSpecies->MinimumWidth = 6;
			this->dgvPetSpecies->Name = L"dgvPetSpecies";
			this->dgvPetSpecies->Width = 90;
			// 
			// dgvPetAge
			// 
			this->dgvPetAge->HeaderText = L"Edad";
			this->dgvPetAge->MinimumWidth = 6;
			this->dgvPetAge->Name = L"dgvPetAge";
			this->dgvPetAge->Width = 60;
			// 
			// dgvPetConduct
			// 
			this->dgvPetConduct->HeaderText = L"Conducta";
			this->dgvPetConduct->MinimumWidth = 6;
			this->dgvPetConduct->Name = L"dgvPetConduct";
			this->dgvPetConduct->Width = 90;
			// 
			// dgvPetVaccines
			// 
			this->dgvPetVaccines->HeaderText = L"Vacunado";
			this->dgvPetVaccines->MinimumWidth = 6;
			this->dgvPetVaccines->Name = L"dgvPetVaccines";
			this->dgvPetVaccines->Width = 80;
			// 
			// PetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(664, 583);
			this->Controls->Add(this->cbPetSpecies);
			this->Controls->Add(this->btnAddPetPhoto);
			this->Controls->Add(this->txtPetId);
			this->Controls->Add(this->dgvPetList);
			this->Controls->Add(this->pbPetPhoto);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cbPetConduct);
			this->Controls->Add(this->cbPetVaccines);
			this->Controls->Add(this->cbPetKind);
			this->Controls->Add(this->txtPetAge);
			this->Controls->Add(this->txtPetName);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"PetForm";
			this->Text = L"Inscripción de Mascota";
			this->Load += gcnew System::EventHandler(this, &PetForm::PetForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPetPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPetList))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		public:
			void RefreshGrid() {
				List<Pet^>^ petList = Controller::QueryAllPets();
				dgvPetList->Rows->Clear();

				for (int i = 0; i < petList->Count; i++) {
					dgvPetList->Rows->Add(gcnew array<String^>{
						" " + petList[i] -> Id,
							  petList[i] -> Name,
							  petList[i] -> Kind,
							  petList[i] -> Species,
						" " + petList[i] -> Age,
							  petList[i] -> Conduct,
					     	  petList[i] -> Vaccines,
					});
				
				}
			}
		Void ClearControls() {
			txtPetId->Text = "";
			txtPetName->Text = "";
			cbPetKind->Text = "";
			cbPetSpecies->Text = "";
			txtPetAge->Text = "";
			cbPetConduct->Text = "";
			cbPetVaccines->Text = "";
		}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		Pet^ p = gcnew Pet();					//definimos un objeto p (mascota)
		p->Id = Int32::Parse(txtPetId->Text);	//pasamos el escrito en txtId al atributo Id de p
												//Int32::Parse() transforma el string a entero lo que está dentro del ().
		p->Name = txtPetName->Text;				//Toma el Texto de txtName y lo carga en Name de p.
		p->Kind = cbPetKind->Text;
		p->Species = cbPetSpecies->Text;
		p->Age = Int32::Parse(txtPetAge->Text);
    	p->Conduct = cbPetConduct->Text;
		p->Vaccines = cbPetVaccines->Text;
	

		Controller::AddPet(p);	//Invocamos al controller y agregamos el objeto p.

		RefreshGrid();
	}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

	Pet^ p = gcnew Pet();					//definimos un objeto p (mascota)
	p->Id = Int32::Parse(txtPetId->Text);	//pasamos el escrito en txtId al atributo Id de p
											//Int32::Parse() transforma el string a entero lo que está dentro del ().
	p->Name = txtPetName->Text;				//Toma el Texto de txtName y lo carga en Name de p.
	p->Kind = cbPetKind->Text;
	p->Species = cbPetSpecies->Text;
	p->Age = Int32::Parse(txtPetAge->Text);
	p->Conduct = cbPetConduct->Text;
	p->Vaccines = cbPetVaccines->Text;


	Controller::UpdatePet(p);	//Invocamos al controller y agregamos el objeto p.

	RefreshGrid();

}
private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
	int petId = Int32::Parse(txtPetId->Text);
	Controller::DeletePet(petId);
	RefreshGrid();

}
private: System::Void dgvPetList_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int selectedRowIndex = dgvPetList->SelectedCells[0]->RowIndex;
		int petId = Int32::Parse(dgvPetList->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Pet^ p = Controller::QueryPetById(petId);

		txtPetId->  Text = " " + p->Id;
		txtPetName->Text = p->Name;
		cbPetKind-> Text = p->Kind;
		cbPetSpecies->Text = p->Species;
		txtPetAge->Text = " " + p->Age;
		cbPetConduct->Text = p->Conduct;
		cbPetVaccines->Text = p->Vaccines;
}
private: System::Void PetForm_Load(System::Object^ sender, System::EventArgs^ e) {

	RefreshGrid();
}
};
}
