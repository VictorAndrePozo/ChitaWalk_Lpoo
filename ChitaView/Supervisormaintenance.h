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
	using namespace Threading;

	/// <summary>
	/// Resumen de Supervisormaintenance
	/// </summary>
	public ref class Supervisormaintenance : public System::Windows::Forms::Form
	{
	public:
		Supervisormaintenance(void)
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
		~Supervisormaintenance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAdd;
	protected:
	private: System::Windows::Forms::Label^ labelId;
	private: System::Windows::Forms::DataGridView^ dgvSupervisor;

















	private: System::Windows::Forms::RadioButton^ rbtnMasc;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ rbtnFem;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtAward;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtArea;


	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::TextBox^ txtId;

	private: System::Windows::Forms::TextBox^ txtDni;
	private: System::Windows::Forms::TextBox^ txtValoration;
	private: System::Windows::Forms::TextBox^ txtEmail;

	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtFirstName;

	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtStatus;

	private: System::Windows::Forms::PictureBox^ pccPhoto;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnChangePhoto;












	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ generalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminarToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisorId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisordni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisorname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisorlastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisorstatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisorgender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisordirection;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisoremail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisorusername;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisorvaloration;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisorarea;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisoraward;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisorPhoneNumber;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisorPassword;
private: System::Windows::Forms::TextBox^ txtPassword;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ supervisorDistrict;
private: System::Windows::Forms::ComboBox^ cmbDistrict;
private: System::Windows::Forms::Label^ label32;

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
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->labelId = (gcnew System::Windows::Forms::Label());
			this->dgvSupervisor = (gcnew System::Windows::Forms::DataGridView());
			this->supervisorId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisordni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisorname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisorlastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisorstatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisorgender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisordirection = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisoremail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisorusername = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisorvaloration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisorarea = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisoraward = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisorPhoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisorPassword = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supervisorDistrict = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rbtnMasc = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rbtnFem = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtAward = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtArea = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtDni = (gcnew System::Windows::Forms::TextBox());
			this->txtValoration = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtStatus = (gcnew System::Windows::Forms::TextBox());
			this->pccPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnChangePhoto = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->generalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmbDistrict = (gcnew System::Windows::Forms::ComboBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSupervisor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pccPhoto))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(66, 259);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(137, 46);
			this->btnAdd->TabIndex = 60;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Supervisormaintenance::btnAdd_Click);
			// 
			// labelId
			// 
			this->labelId->AutoSize = true;
			this->labelId->Location = System::Drawing::Point(52, 40);
			this->labelId->Name = L"labelId";
			this->labelId->Size = System::Drawing::Size(18, 16);
			this->labelId->TabIndex = 43;
			this->labelId->Text = L"Id";
			// 
			// dgvSupervisor
			// 
			this->dgvSupervisor->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSupervisor->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
				this->supervisorId,
					this->supervisordni, this->supervisorname, this->supervisorlastname, this->supervisorstatus, this->supervisorgender, this->supervisordirection,
					this->supervisoremail, this->supervisorusername, this->supervisorvaloration, this->supervisorarea, this->supervisoraward, this->supervisorPhoneNumber,
					this->supervisorPassword, this->supervisorDistrict
			});
			this->dgvSupervisor->Location = System::Drawing::Point(21, 320);
			this->dgvSupervisor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvSupervisor->Name = L"dgvSupervisor";
			this->dgvSupervisor->RowHeadersWidth = 51;
			this->dgvSupervisor->RowTemplate->Height = 24;
			this->dgvSupervisor->Size = System::Drawing::Size(1084, 278);
			this->dgvSupervisor->TabIndex = 77;
			this->dgvSupervisor->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Supervisormaintenance::dgvSupervisor_CellClick);
			// 
			// supervisorId
			// 
			this->supervisorId->HeaderText = L"Id";
			this->supervisorId->MinimumWidth = 6;
			this->supervisorId->Name = L"supervisorId";
			this->supervisorId->Width = 125;
			// 
			// supervisordni
			// 
			this->supervisordni->HeaderText = L"Dni";
			this->supervisordni->MinimumWidth = 6;
			this->supervisordni->Name = L"supervisordni";
			this->supervisordni->Width = 125;
			// 
			// supervisorname
			// 
			this->supervisorname->HeaderText = L"Nombres";
			this->supervisorname->MinimumWidth = 6;
			this->supervisorname->Name = L"supervisorname";
			this->supervisorname->Width = 125;
			// 
			// supervisorlastname
			// 
			this->supervisorlastname->HeaderText = L"Apellidos";
			this->supervisorlastname->MinimumWidth = 6;
			this->supervisorlastname->Name = L"supervisorlastname";
			this->supervisorlastname->Width = 125;
			// 
			// supervisorstatus
			// 
			this->supervisorstatus->HeaderText = L"Estado";
			this->supervisorstatus->MinimumWidth = 6;
			this->supervisorstatus->Name = L"supervisorstatus";
			this->supervisorstatus->Width = 125;
			// 
			// supervisorgender
			// 
			this->supervisorgender->HeaderText = L"Género";
			this->supervisorgender->MinimumWidth = 6;
			this->supervisorgender->Name = L"supervisorgender";
			this->supervisorgender->Width = 125;
			// 
			// supervisordirection
			// 
			this->supervisordirection->HeaderText = L"Dirección";
			this->supervisordirection->MinimumWidth = 6;
			this->supervisordirection->Name = L"supervisordirection";
			this->supervisordirection->Width = 125;
			// 
			// supervisoremail
			// 
			this->supervisoremail->HeaderText = L"Correo";
			this->supervisoremail->MinimumWidth = 6;
			this->supervisoremail->Name = L"supervisoremail";
			this->supervisoremail->Width = 125;
			// 
			// supervisorusername
			// 
			this->supervisorusername->HeaderText = L"Usuario";
			this->supervisorusername->MinimumWidth = 6;
			this->supervisorusername->Name = L"supervisorusername";
			this->supervisorusername->Width = 125;
			// 
			// supervisorvaloration
			// 
			this->supervisorvaloration->HeaderText = L"Valoración";
			this->supervisorvaloration->MinimumWidth = 6;
			this->supervisorvaloration->Name = L"supervisorvaloration";
			this->supervisorvaloration->Width = 125;
			// 
			// supervisorarea
			// 
			this->supervisorarea->HeaderText = L"Area";
			this->supervisorarea->MinimumWidth = 6;
			this->supervisorarea->Name = L"supervisorarea";
			this->supervisorarea->Width = 125;
			// 
			// supervisoraward
			// 
			this->supervisoraward->HeaderText = L"Award";
			this->supervisoraward->MinimumWidth = 6;
			this->supervisoraward->Name = L"supervisoraward";
			this->supervisoraward->Width = 125;
			// 
			// supervisorPhoneNumber
			// 
			this->supervisorPhoneNumber->HeaderText = L"Celular";
			this->supervisorPhoneNumber->MinimumWidth = 6;
			this->supervisorPhoneNumber->Name = L"supervisorPhoneNumber";
			this->supervisorPhoneNumber->Width = 125;
			// 
			// supervisorPassword
			// 
			this->supervisorPassword->HeaderText = L"Contraseña";
			this->supervisorPassword->MinimumWidth = 6;
			this->supervisorPassword->Name = L"supervisorPassword";
			this->supervisorPassword->Width = 125;
			// 
			// supervisorDistrict
			// 
			this->supervisorDistrict->HeaderText = L"Column1";
			this->supervisorDistrict->MinimumWidth = 6;
			this->supervisorDistrict->Name = L"supervisorDistrict";
			this->supervisorDistrict->Width = 125;
			// 
			// rbtnMasc
			// 
			this->rbtnMasc->AutoSize = true;
			this->rbtnMasc->Location = System::Drawing::Point(539, 63);
			this->rbtnMasc->Name = L"rbtnMasc";
			this->rbtnMasc->Size = System::Drawing::Size(64, 20);
			this->rbtnMasc->TabIndex = 81;
			this->rbtnMasc->Text = L"Varon";
			this->rbtnMasc->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 16);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Dni";
			// 
			// rbtnFem
			// 
			this->rbtnFem->AutoSize = true;
			this->rbtnFem->Checked = true;
			this->rbtnFem->Location = System::Drawing::Point(448, 63);
			this->rbtnFem->Name = L"rbtnFem";
			this->rbtnFem->Size = System::Drawing::Size(61, 20);
			this->rbtnFem->TabIndex = 80;
			this->rbtnFem->TabStop = true;
			this->rbtnFem->Text = L"Mujer";
			this->rbtnFem->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 45;
			this->label3->Text = L"Dirección";
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(936, 282);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(125, 22);
			this->txtPhoneNumber->TabIndex = 79;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(52, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 16);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Correo";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(826, 282);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 16);
			this->label10->TabIndex = 78;
			this->label10->Text = L"Celular";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(360, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 16);
			this->label5->TabIndex = 47;
			this->label5->Text = L"Género";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(54, 232);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 48;
			this->label6->Text = L"Usuario";
			// 
			// txtAward
			// 
			this->txtAward->Location = System::Drawing::Point(936, 128);
			this->txtAward->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAward->Multiline = true;
			this->txtAward->Name = L"txtAward";
			this->txtAward->Size = System::Drawing::Size(125, 99);
			this->txtAward->TabIndex = 76;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(52, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 16);
			this->label7->TabIndex = 49;
			this->label7->Text = L"Nombres";
			// 
			// txtArea
			// 
			this->txtArea->Location = System::Drawing::Point(936, 71);
			this->txtArea->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtArea->Multiline = true;
			this->txtArea->Name = L"txtArea";
			this->txtArea->Size = System::Drawing::Size(125, 46);
			this->txtArea->TabIndex = 75;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(360, 95);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 16);
			this->label8->TabIndex = 50;
			this->label8->Text = L"Apellidos";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(150, 33);
			this->txtId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(75, 22);
			this->txtId->TabIndex = 51;
			// 
			// txtDni
			// 
			this->txtDni->Location = System::Drawing::Point(150, 65);
			this->txtDni->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDni->Name = L"txtDni";
			this->txtDni->Size = System::Drawing::Size(161, 22);
			this->txtDni->TabIndex = 52;
			// 
			// txtValoration
			// 
			this->txtValoration->Location = System::Drawing::Point(936, 33);
			this->txtValoration->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtValoration->Name = L"txtValoration";
			this->txtValoration->Size = System::Drawing::Size(125, 22);
			this->txtValoration->TabIndex = 72;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(150, 190);
			this->txtEmail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(453, 22);
			this->txtEmail->TabIndex = 53;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(150, 128);
			this->txtAddress->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(453, 52);
			this->txtAddress->TabIndex = 54;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(360, 228);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(50, 16);
			this->label14->TabIndex = 70;
			this->label14->Text = L"Estado";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(150, 95);
			this->txtFirstName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(161, 22);
			this->txtFirstName->TabIndex = 55;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(448, 93);
			this->txtLastName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(155, 22);
			this->txtLastName->TabIndex = 56;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(826, 71);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 16);
			this->label13->TabIndex = 68;
			this->label13->Text = L"Area";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(150, 222);
			this->txtUsername->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(157, 22);
			this->txtUsername->TabIndex = 57;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(826, 152);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(45, 16);
			this->label12->TabIndex = 67;
			this->label12->Text = L"Award";
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(442, 222);
			this->txtStatus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(161, 22);
			this->txtStatus->TabIndex = 58;
			// 
			// pccPhoto
			// 
			this->pccPhoto->Location = System::Drawing::Point(625, 29);
			this->pccPhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pccPhoto->Name = L"pccPhoto";
			this->pccPhoto->Size = System::Drawing::Size(179, 218);
			this->pccPhoto->TabIndex = 59;
			this->pccPhoto->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(826, 37);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 16);
			this->label9->TabIndex = 65;
			this->label9->Text = L"Valoración";
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(260, 259);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(137, 46);
			this->btnUpdate->TabIndex = 61;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &Supervisormaintenance::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(448, 259);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(137, 46);
			this->btnDelete->TabIndex = 62;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &Supervisormaintenance::btnDelete_Click);
			// 
			// btnChangePhoto
			// 
			this->btnChangePhoto->Location = System::Drawing::Point(648, 259);
			this->btnChangePhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnChangePhoto->Name = L"btnChangePhoto";
			this->btnChangePhoto->Size = System::Drawing::Size(137, 46);
			this->btnChangePhoto->TabIndex = 63;
			this->btnChangePhoto->Text = L"Agregar foto";
			this->btnChangePhoto->UseVisualStyleBackColor = true;
			this->btnChangePhoto->Click += gcnew System::EventHandler(this, &Supervisormaintenance::btnChangePhoto_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->generalToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1126, 28);
			this->menuStrip1->TabIndex = 82;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// generalToolStripMenuItem
			// 
			this->generalToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->salirToolStripMenuItem,
					this->nuevoToolStripMenuItem, this->modificarToolStripMenuItem, this->eliminarToolStripMenuItem
			});
			this->generalToolStripMenuItem->Name = L"generalToolStripMenuItem";
			this->generalToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->generalToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->modificarToolStripMenuItem->Text = L"Editar";
			// 
			// eliminarToolStripMenuItem
			// 
			this->eliminarToolStripMenuItem->Name = L"eliminarToolStripMenuItem";
			this->eliminarToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->eliminarToolStripMenuItem->Text = L"Eliminar";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(936, 246);
			this->txtPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(125, 22);
			this->txtPassword->TabIndex = 84;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(826, 246);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 16);
			this->label1->TabIndex = 83;
			this->label1->Text = L"Contraseña";
			// 
			// cmbDistrict
			// 
			this->cmbDistrict->FormattingEnabled = true;
			this->cmbDistrict->Items->AddRange(gcnew cli::array< System::Object^  >(43) {
				L"Ancón", L"Ate", L"Barranco", L"Breña", L"Carabayllo",
					L"Cercado de Lima", L"Chaclacayo", L"Chorrillos", L"Cieneguilla", L"Comas", L"El agustino", L"Independencia", L"Jesús maría",
					L"La molina", L"La victoria", L"Lince", L"Los olivos", L"Lurigancho", L"Lurín", L"Magdalena del mar", L"Miraflores", L"Pachacámac",
					L"Pucusana", L"Pueblo libre", L"Puente piedra", L"Punta hermosa", L"Punta negra", L"Rímac", L"San bartolo", L"San borja", L"San isidro",
					L"San Juan de Lurigancho", L"San Juan de Miraflores", L"San Luis", L"San Martin de Porres", L"San Miguel", L"Santa Anita", L"Santa María del Mar",
					L"Santa Rosa", L"Santiago de Surco", L"Surquillo", L"Villa el Salvador", L"Villa Maria del Triunfo"
			});
			this->cmbDistrict->Location = System::Drawing::Point(351, 29);
			this->cmbDistrict->Name = L"cmbDistrict";
			this->cmbDistrict->Size = System::Drawing::Size(252, 24);
			this->cmbDistrict->TabIndex = 91;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(250, 34);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(61, 16);
			this->label32->TabIndex = 90;
			this->label32->Text = L"Distrito(*)";
			// 
			// Supervisormaintenance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1126, 613);
			this->Controls->Add(this->cmbDistrict);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->labelId);
			this->Controls->Add(this->dgvSupervisor);
			this->Controls->Add(this->rbtnMasc);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->rbtnFem);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtAward);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtArea);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->txtDni);
			this->Controls->Add(this->txtValoration);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtStatus);
			this->Controls->Add(this->pccPhoto);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnChangePhoto);
			this->Name = L"Supervisormaintenance";
			this->Text = L"Mantenimiento de Supervisor";
			this->Load += gcnew System::EventHandler(this, &Supervisormaintenance::Supervisormaintenance_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSupervisor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pccPhoto))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void RefreshGrid() {
			List<Supervisor^>^ supervisorList = Controller::QueryAllSupervisors();
			dgvSupervisor->Rows->Clear();
			for (int i = 0; i < supervisorList->Count; i++) {
				dgvSupervisor->Rows->Add(gcnew array<String^>{
						"" + supervisorList[i]->Id,
					    "" + supervisorList[i]->Dni,
							 supervisorList[i]->Firstname,
							 supervisorList[i]->Lastname,
						"" + supervisorList[i]->Status,
						"" + supervisorList[i]->Gender,
						supervisorList[i]->Address,
						supervisorList[i]->Email,
						supervisorList[i]->username,
						"" + supervisorList[i]->Valoration,
			         	     supervisorList[i]->Award,
						     supervisorList[i]->Area,
						   	 supervisorList[i]->PhoneNumber,
							 supervisorList[i]->password,
							supervisorList[i]->District

						//"" + supervisorList[i]->Photo,

				});
			}
		}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Supervisor^ c = gcnew Supervisor();

		c->Dni = Int32::Parse(txtDni->Text);
		c->Address = txtAddress->Text;
		c->PhoneNumber = txtPhoneNumber->Text;
		c->Email = txtEmail->Text;
		//c->Gender = Char::Parse(txtGender->Text);
		c->Id = Int32::Parse(txtId->Text);
		c->username = txtUsername->Text;
		c->Lastname = txtLastName->Text;
		c->Firstname = txtFirstName->Text;
		c->Valoration = Int32::Parse(txtValoration->Text);
		c->Award = txtAward->Text;
		c->Area = txtArea->Text;
		c->password = txtPassword->Text;
		c->District = cmbDistrict->Text;

		//c->Photo = array::Parse(PicturePhoto->Picture);
		c->Status = 'A';

		Controller::AddSupervisor(c);
		RefreshGrid();
		ClearControls();
	}
	
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		Supervisor^ c = gcnew Supervisor();
		c->Dni = Int32::Parse(txtDni->Text);
		c->Address = txtAddress->Text;
		c->PhoneNumber = txtPhoneNumber->Text;
		c->Email = txtEmail->Text;
		c->Gender = rbtnMasc->Checked ? 'M' : 'F';
		c->Id = Int32::Parse(txtId->Text);
		c->username = txtUsername->Text;
		c->Lastname = txtLastName->Text;
		c->Firstname = txtFirstName->Text;
		c->Valoration = Int32::Parse(txtValoration->Text);
		c->Award = txtAward->Text;
		c->Area = txtArea->Text;
		c->password = txtPassword->Text;
		c->District = cmbDistrict->Text;


		//c->Photo = array::Parse(PicturePhoto->Picture);
		c->Status = 'A';

		Controller::UpdateSupervisor(c);
		RefreshGrid();

	}
	
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int SupervisorId = Int32::Parse(txtId->Text);
		Controller::DeleteSupervisor(SupervisorId);
		RefreshGrid();
		ClearControls();

	}
	private: System::Void dgvSupervisor_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvSupervisor->CurrentCell != nullptr &&
			dgvSupervisor->CurrentCell->Value != nullptr &&
			dgvSupervisor->CurrentCell->Value->ToString() != "") {
			int selectedrowindex = dgvSupervisor->SelectedCells[0]->RowIndex;
			DataGridViewRow^ selectedRow = dgvSupervisor->Rows[selectedrowindex];
			String^ a = selectedRow->Cells[0]->Value->ToString();

			int supervisorId = Int32::Parse(a);
			Supervisor^ supervisor = Controller::QuerySupervisorById(supervisorId);
			//MessageBox::Show(customer->ToString()); //Polimorfismo
			if (supervisor != nullptr && supervisor->GetType() == Supervisor::typeid) {
				
				txtId->Text = "" + supervisor->Id;
				txtDni->Text = "" + supervisor->Dni;
				txtFirstName->Text = dynamic_cast<Supervisor^>(supervisor)->Firstname;
				txtLastName->Text = dynamic_cast<Supervisor^>(supervisor)->Lastname;
				txtStatus->Text = "A" ;
				rbtnMasc->Checked = dynamic_cast<Supervisor^>(supervisor)->Gender == 'M';
				rbtnFem->Checked = dynamic_cast<Supervisor^>(supervisor)->Gender == 'F';
				txtAddress->Text = supervisor->Address;
				txtEmail->Text = supervisor->Email;
				txtUsername->Text = supervisor->username;
				txtValoration->Text = "" + supervisor->Valoration;
				txtAward->Text = supervisor->Award;
				txtArea->Text = supervisor->Area;
				txtPhoneNumber->Text = supervisor->PhoneNumber;
				txtPassword->Text = supervisor->password;
				cmbDistrict->Text = supervisor->District;

				//txtLastName->Text = supervisor->password;



				//txt->Text = "" + c->Photo;

			}
		}

}
		   
		   void ClearControls() {
			   txtDni->Clear();
			   txtAddress->Clear();
			   txtPhoneNumber->Clear();
			   txtEmail->Clear();
			   //txtGender->Clear();
			   txtId->Clear();
			   txtUsername->Clear();
			   //txtLastName->Text = c->password;
			   txtLastName->Clear();
			   txtFirstName->Clear();
			   txtValoration->Clear();
			   txtAward->Clear();
			   txtArea->Clear();
			   txtStatus->Clear();
			   //CmbPosition->Clear();

		   }
	
private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearControls();
		EnableControls();
		btnAdd->Enabled = true;
		btnUpdate->Enabled = false;
		btnDelete->Enabled = false;
		//btnAddWalker->Enabled = true;
		//btnUpdateWalker->Enabled = false;
		//btnDeleteWalker->Enabled = false;

	}


	public:
		Void DisableControls() {
			//Keeper Controls
			//txtId->ReadOnly = true;
			//txtPhoneNumber->ReadOnly = true;
			//txtAddress->ReadOnly = true;
			//txtDni->ReadOnly = true;
			//txtFirstName->ReadOnly = true;
			//txtLastName->ReadOnly = true;
			//txtEmail->ReadOnly = true;
			//dtpBirthday->Enabled = false;
			btnAdd->Enabled = false;
			btnUpdate->Enabled = false;
			btnDelete->Enabled = false;

			//Walker Controls
			//txtWalkerId->ReadOnly = true;
			//btnAddWalker->Enabled = false;
			//btnUpdateWalker->Enabled = false;
			//btnDeleteWalker->Enabled = false;
		}

		Void EnableControls() {
			//Keeper Controls
			//txtId->ReadOnly = true;
			//txtPhoneNumber->ReadOnly = false;
			//txtAddress->ReadOnly = false;
			//txtDni->ReadOnly = false;
			//txtFirstName->ReadOnly = false;
			//txtLastName->ReadOnly = false;
			//txtEmail->ReadOnly = false;

			btnAdd->Enabled = true;
			btnUpdate->Enabled = false;
			btnDelete->Enabled = false;

			//Walker Controls
			//btnAddWalker->Enabled = true;
			//btnUpdateWalker->Enabled = false;
			//btnDeleteWalker->Enabled = false;
		}

		private: System::Void modificarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			EnableControls();
			btnAdd->Enabled = false;
			btnUpdate->Enabled = true;
			btnDelete->Enabled = true;

			//btnAddWalker->Enabled = false;
			//btnUpdateWalker->Enabled = true;
			//btnDeleteWalker->Enabled = true;

		}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void Supervisormaintenance_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshGrid();
	}

	private: System::Void btnChangePhoto_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ opnfd = gcnew OpenFileDialog();
		opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pccPhoto->Image = gcnew Bitmap(opnfd->FileName);
		}
	}






};
}
