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
	/// Resumen de carermaintenance
	/// </summary>
	public ref class carermaintenance : public System::Windows::Forms::Form
	{
	public:
		carermaintenance(void)
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
		~carermaintenance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelId;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtDni;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtAddress;





	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::TextBox^ txtLastName;


	private: System::Windows::Forms::TextBox^ txtGender;

	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtStatus;
	private: System::Windows::Forms::PictureBox^ picturePhoto;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnChangePhoto;













	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ CmbPosition;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtValoration;
	private: System::Windows::Forms::TextBox^ txtLevel;
	private: System::Windows::Forms::TextBox^ txtExperience;
	private: System::Windows::Forms::TextBox^ txtSalary;
	private: System::Windows::Forms::TextBox^ txtWarranty;





	private: System::Windows::Forms::DataGridView^ dgvCarer;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerdni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carername;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerlastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerposition;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerstatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carergender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerdirection;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ careremail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerusername;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carervaloration;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerlevel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerexperience;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carersalary;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerwarranty;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carernombres;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelId = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtDni = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtGender = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtStatus = (gcnew System::Windows::Forms::TextBox());
			this->picturePhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnChangePhoto = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->CmbPosition = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtValoration = (gcnew System::Windows::Forms::TextBox());
			this->txtLevel = (gcnew System::Windows::Forms::TextBox());
			this->txtExperience = (gcnew System::Windows::Forms::TextBox());
			this->txtSalary = (gcnew System::Windows::Forms::TextBox());
			this->txtWarranty = (gcnew System::Windows::Forms::TextBox());
			this->dgvCarer = (gcnew System::Windows::Forms::DataGridView());
			this->carerId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerdni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carername = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerlastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerposition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerstatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carergender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerdirection = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->careremail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerusername = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carervaloration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerlevel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerexperience = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carersalary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerwarranty = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carernombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCarer))->BeginInit();
			this->SuspendLayout();
			// 
			// labelId
			// 
			this->labelId->AutoSize = true;
			this->labelId->Location = System::Drawing::Point(47, 56);
			this->labelId->Name = L"labelId";
			this->labelId->Size = System::Drawing::Size(18, 16);
			this->labelId->TabIndex = 0;
			this->labelId->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Dni";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Dirección";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(47, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Correo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(354, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Género";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(49, 248);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Usuario";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(47, 112);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Nombres";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(354, 112);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Apellidos";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(145, 50);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(75, 22);
			this->txtId->TabIndex = 8;
			// 
			// txtDni
			// 
			this->txtDni->Location = System::Drawing::Point(145, 82);
			this->txtDni->Name = L"txtDni";
			this->txtDni->Size = System::Drawing::Size(161, 22);
			this->txtDni->TabIndex = 9;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(145, 207);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(453, 22);
			this->txtEmail->TabIndex = 10;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(145, 145);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(453, 52);
			this->txtAddress->TabIndex = 11;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(145, 112);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(161, 22);
			this->txtFirstName->TabIndex = 12;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(443, 109);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(155, 22);
			this->txtLastName->TabIndex = 13;
			// 
			// txtGender
			// 
			this->txtGender->Location = System::Drawing::Point(443, 79);
			this->txtGender->Name = L"txtGender";
			this->txtGender->Size = System::Drawing::Size(155, 22);
			this->txtGender->TabIndex = 14;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(145, 239);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(157, 22);
			this->txtUsername->TabIndex = 15;
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(437, 239);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(161, 22);
			this->txtStatus->TabIndex = 16;
			// 
			// picturePhoto
			// 
			this->picturePhoto->Location = System::Drawing::Point(620, 46);
			this->picturePhoto->Name = L"picturePhoto";
			this->picturePhoto->Size = System::Drawing::Size(178, 218);
			this->picturePhoto->TabIndex = 17;
			this->picturePhoto->TabStop = false;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(61, 276);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(137, 45);
			this->btnAdd->TabIndex = 18;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &carermaintenance::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(255, 276);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(137, 45);
			this->btnUpdate->TabIndex = 19;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &carermaintenance::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(443, 276);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(137, 45);
			this->btnDelete->TabIndex = 20;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &carermaintenance::btnDelete_Click);
			// 
			// btnChangePhoto
			// 
			this->btnChangePhoto->Location = System::Drawing::Point(642, 276);
			this->btnChangePhoto->Name = L"btnChangePhoto";
			this->btnChangePhoto->Size = System::Drawing::Size(137, 45);
			this->btnChangePhoto->TabIndex = 21;
			this->btnChangePhoto->Text = L"Agregar foto";
			this->btnChangePhoto->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(821, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 16);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Nivel";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(821, 54);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 16);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Valoración";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(821, 118);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 16);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Experiencia";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(821, 213);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 16);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Garantía";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(821, 157);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 16);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Salario";
			// 
			// CmbPosition
			// 
			this->CmbPosition->FormattingEnabled = true;
			this->CmbPosition->Location = System::Drawing::Point(443, 46);
			this->CmbPosition->Name = L"CmbPosition";
			this->CmbPosition->Size = System::Drawing::Size(155, 24);
			this->CmbPosition->TabIndex = 29;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(354, 245);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(50, 16);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Estado";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(354, 50);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(59, 16);
			this->label15->TabIndex = 31;
			this->label15->Text = L"Posición";
			// 
			// txtValoration
			// 
			this->txtValoration->Location = System::Drawing::Point(931, 50);
			this->txtValoration->Name = L"txtValoration";
			this->txtValoration->Size = System::Drawing::Size(125, 22);
			this->txtValoration->TabIndex = 32;
			// 
			// txtLevel
			// 
			this->txtLevel->Location = System::Drawing::Point(931, 82);
			this->txtLevel->Name = L"txtLevel";
			this->txtLevel->Size = System::Drawing::Size(125, 22);
			this->txtLevel->TabIndex = 33;
			// 
			// txtExperience
			// 
			this->txtExperience->Location = System::Drawing::Point(931, 115);
			this->txtExperience->Name = L"txtExperience";
			this->txtExperience->Size = System::Drawing::Size(125, 22);
			this->txtExperience->TabIndex = 34;
			// 
			// txtSalary
			// 
			this->txtSalary->Location = System::Drawing::Point(931, 145);
			this->txtSalary->Multiline = true;
			this->txtSalary->Name = L"txtSalary";
			this->txtSalary->Size = System::Drawing::Size(125, 52);
			this->txtSalary->TabIndex = 35;
			// 
			// txtWarranty
			// 
			this->txtWarranty->Location = System::Drawing::Point(931, 206);
			this->txtWarranty->Multiline = true;
			this->txtWarranty->Name = L"txtWarranty";
			this->txtWarranty->Size = System::Drawing::Size(125, 83);
			this->txtWarranty->TabIndex = 36;
			// 
			// dgvCarer
			// 
			this->dgvCarer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCarer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(16) {
				this->carerId, this->carerdni,
					this->carername, this->carerlastname, this->carerposition, this->carerstatus, this->carergender, this->carerdirection, this->careremail,
					this->carerusername, this->carervaloration, this->carerlevel, this->carerexperience, this->carersalary, this->carerwarranty,
					this->carernombres
			});
			this->dgvCarer->Location = System::Drawing::Point(12, 335);
			this->dgvCarer->Name = L"dgvCarer";
			this->dgvCarer->RowHeadersWidth = 51;
			this->dgvCarer->RowTemplate->Height = 24;
			this->dgvCarer->Size = System::Drawing::Size(1084, 278);
			this->dgvCarer->TabIndex = 37;
			this->dgvCarer->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &carermaintenance::dgvCarer_CellClick);
			// 
			// carerId
			// 
			this->carerId->HeaderText = L"Id";
			this->carerId->MinimumWidth = 6;
			this->carerId->Name = L"carerId";
			this->carerId->Width = 125;
			// 
			// carerdni
			// 
			this->carerdni->HeaderText = L"Dni";
			this->carerdni->MinimumWidth = 6;
			this->carerdni->Name = L"carerdni";
			this->carerdni->Width = 125;
			// 
			// carername
			// 
			this->carername->HeaderText = L"Nombres";
			this->carername->MinimumWidth = 6;
			this->carername->Name = L"carername";
			this->carername->Width = 125;
			// 
			// carerlastname
			// 
			this->carerlastname->HeaderText = L"Apellidos";
			this->carerlastname->MinimumWidth = 6;
			this->carerlastname->Name = L"carerlastname";
			this->carerlastname->Width = 125;
			// 
			// carerposition
			// 
			this->carerposition->HeaderText = L"Posicion";
			this->carerposition->MinimumWidth = 6;
			this->carerposition->Name = L"carerposition";
			this->carerposition->Width = 125;
			// 
			// carerstatus
			// 
			this->carerstatus->HeaderText = L"Estado";
			this->carerstatus->MinimumWidth = 6;
			this->carerstatus->Name = L"carerstatus";
			this->carerstatus->Width = 125;
			// 
			// carergender
			// 
			this->carergender->HeaderText = L"Género";
			this->carergender->MinimumWidth = 6;
			this->carergender->Name = L"carergender";
			this->carergender->Width = 125;
			// 
			// carerdirection
			// 
			this->carerdirection->HeaderText = L"Dirección";
			this->carerdirection->MinimumWidth = 6;
			this->carerdirection->Name = L"carerdirection";
			this->carerdirection->Width = 125;
			// 
			// careremail
			// 
			this->careremail->HeaderText = L"Correo";
			this->careremail->MinimumWidth = 6;
			this->careremail->Name = L"careremail";
			this->careremail->Width = 125;
			// 
			// carerusername
			// 
			this->carerusername->HeaderText = L"Usuario";
			this->carerusername->MinimumWidth = 6;
			this->carerusername->Name = L"carerusername";
			this->carerusername->Width = 125;
			// 
			// carervaloration
			// 
			this->carervaloration->HeaderText = L"Valoración";
			this->carervaloration->MinimumWidth = 6;
			this->carervaloration->Name = L"carervaloration";
			this->carervaloration->Width = 125;
			// 
			// carerlevel
			// 
			this->carerlevel->HeaderText = L"Nivel";
			this->carerlevel->MinimumWidth = 6;
			this->carerlevel->Name = L"carerlevel";
			this->carerlevel->Width = 125;
			// 
			// carerexperience
			// 
			this->carerexperience->HeaderText = L"Experiencia";
			this->carerexperience->MinimumWidth = 6;
			this->carerexperience->Name = L"carerexperience";
			this->carerexperience->Width = 125;
			// 
			// carersalary
			// 
			this->carersalary->HeaderText = L"Salario";
			this->carersalary->MinimumWidth = 6;
			this->carersalary->Name = L"carersalary";
			this->carersalary->Width = 125;
			// 
			// carerwarranty
			// 
			this->carerwarranty->HeaderText = L"Garantía";
			this->carerwarranty->MinimumWidth = 6;
			this->carerwarranty->Name = L"carerwarranty";
			this->carerwarranty->Width = 125;
			// 
			// carernombres
			// 
			this->carernombres->HeaderText = L"Nombres";
			this->carernombres->MinimumWidth = 6;
			this->carernombres->Name = L"carernombres";
			this->carernombres->Width = 125;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(830, 299);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 16);
			this->label10->TabIndex = 38;
			this->label10->Text = L"Celular";
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(931, 299);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(125, 22);
			this->txtPhoneNumber->TabIndex = 39;
			// 
			// carermaintenance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1108, 625);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->dgvCarer);
			this->Controls->Add(this->txtWarranty);
			this->Controls->Add(this->txtSalary);
			this->Controls->Add(this->txtExperience);
			this->Controls->Add(this->txtLevel);
			this->Controls->Add(this->txtValoration);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->CmbPosition);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnChangePhoto);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->picturePhoto);
			this->Controls->Add(this->txtStatus);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtGender);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtDni);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelId);
			this->Name = L"carermaintenance";
			this->Text = L"carermaintenance";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCarer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void RefreshGrid() {
			List<Carer^>^ carerList = Controller::QueryAllCarers();
			dgvCarer->Rows->Clear();
			for (int i = 0; i < carerList->Count; i++) {
				dgvCarer->Rows->Add(gcnew array<String^>{
					"" + carerList[i]->Dni,
						carerList[i]->Address,
						carerList[i]->PhoneNumber,
						carerList[i]->Email,
						"" + carerList[i]->Gender,
						"" + carerList[i]->Id,
						carerList[i]->username,
						carerList[i]->password,
						carerList[i]->Lastname,
						carerList[i]->Firstname,
						"" + carerList[i]->Valoration,
						carerList[i]->Award,
						"" + carerList[i]->Experience,
						"" + carerList[i]->Level,
						"" + carerList[i]->Warranty,
						"" + carerList[i]->Salary,
						"" + carerList[i]->Photo,
						"" + carerList[i]->Status,
						"" + carerList[i]->Position
				});
			}
		}



	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Carer^ c = gcnew Carer();

		c->Dni = Int32::Parse(txtDni->Text);
		c->Address = txtAddress->Text;
		c->PhoneNumber = txtPhoneNumber->Text;
		c->Email = txtEmail->Text;
		c->Gender = Char::Parse(txtGender->Text);
		c->Id = Int32::Parse(txtId->Text);
		c->username = txtUsername->Text;
		c->Lastname = txtLastName->Text;
		c->Firstname = txtFirstName->Text;
		c->Valoration = Int32::Parse(txtValoration->Text);
		c->Experience = Int32::Parse(txtExperience->Text);
		c->Level = Int32::Parse(txtLevel->Text);
		c->Warranty = Int32::Parse(txtWarranty->Text);
		c->Salary = Double::Parse(txtSalary->Text);
		//c->Photo = array::Parse(PicturePhoto->Picture);
		c->Status = 'A';
		c->Position = CmbPosition->Text;

		Controller::AddCarer(c);
		RefreshGrid();
		ClearControls();
	}

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		Carer^ c = gcnew Carer();
		c->Dni = Int32::Parse(txtDni->Text);
		c->Address = txtAddress->Text;
		c->PhoneNumber = txtPhoneNumber->Text;
		c->Email = txtEmail->Text;
		c->Gender = Char::Parse(txtGender->Text);
		c->Id = Int32::Parse(txtId->Text);
		c->username = txtUsername->Text;
		c->Lastname = txtLastName->Text;
		c->Firstname = txtFirstName->Text;
		c->Valoration = Int32::Parse(txtValoration->Text);
		c->Experience = Int32::Parse(txtExperience->Text);
		c->Level = Int32::Parse(txtLevel->Text);
		c->Warranty = Int32::Parse(txtWarranty->Text);
		c->Salary = Double::Parse(txtSalary->Text);
		//c->Photo = array::Parse(PicturePhoto->Picture);
		c->Status = 'A';
		c->Position = CmbPosition->Text;

		Controller::UpdateCarer(c);
		RefreshGrid();

	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int carerId = Int32::Parse(txtId->Text);
		Controller::DeleteCarer(carerId);
		RefreshGrid();
		ClearControls();
	}
	private: System::Void dgvCarer_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int selectedRowIndex = dgvCarer->SelectedCells[0]->RowIndex;
		int carerId = Int32::Parse(dgvCarer->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Carer^ c = Controller::QueryCarerById(carerId);


		txtDni->Text = "" + c->Dni;
		txtAddress->Text = c->Address;
		txtPhoneNumber->Text = c->PhoneNumber;
		txtEmail->Text = c->Email;
		txtGender->Text = "" + c->Gender;
		txtId->Text = "" + c->Id;
		txtUsername->Text = c->username;
		//txtLastName->Text = c->password;
		txtLastName->Text = c->Lastname;
		txtFirstName->Text = c->Firstname;
		txtValoration->Text = "" + c->Valoration;
		txtExperience->Text = "" + c->Experience;
		txtLevel->Text = "" + c->Level;
		txtWarranty->Text = "" + c->Warranty;
		txtSalary->Text = "" + c->Salary;
		//txt->Text = "" + c->Photo;
		txtStatus->Text = "" + c->Status;
		CmbPosition->Text = "" + c->Position;

	}

		   void ClearControls() {
			   txtDni->Clear();
			   txtAddress->Clear();
			   txtPhoneNumber->Clear();
			   txtEmail->Clear();
			   txtGender->Clear();
			   txtId->Clear();
			   txtUsername->Clear();
			   //txtLastName->Text = c->password;
			   txtLastName->Clear();
			   txtFirstName->Clear();
			   txtValoration->Clear();
			   txtExperience->Clear();
			   txtLevel->Clear();
			   txtWarranty->Clear();
			   txtSalary->Clear();
			   //txt->Text = "" + c->Photo;
			   txtStatus->Clear();
			   //CmbPosition->Clear();

		   }




	
};
}
