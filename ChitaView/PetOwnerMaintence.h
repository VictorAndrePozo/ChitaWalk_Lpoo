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
	/// Resumen de PetOwnerMaintence
	/// </summary>
	public ref class PetOwnerMaintence : public System::Windows::Forms::Form
	{
	public:
		property char UseType;
		property Form^ RefDiscountsForm;
	public:
		PetOwnerMaintence(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			UseType = 'M';
		}
	
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PetOwnerMaintence()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtEmail;

	private: System::Windows::Forms::TextBox^ txtApellido;


	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::TextBox^ txtAddress;



	private: System::Windows::Forms::TextBox^ txtDni;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ NombrePO;
	private: System::Windows::Forms::Label^ UsuarioPO;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ CorreoPO;

	private: System::Windows::Forms::Label^ DireccionPO;

	private: System::Windows::Forms::Label^ DniPO;

	private: System::Windows::Forms::Label^ IdPO;

	private: System::Windows::Forms::Button^ btnChangePhoto;
	private: System::Windows::Forms::PictureBox^ picturePhoto;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::RadioButton^ radioFemale;
	private: System::Windows::Forms::RadioButton^ radioMale;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::Label^ CelularPO;
	private: System::Windows::Forms::MenuStrip^ MenuPetOwner;

	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultaToolStripMenuItem1;
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;
	private: System::Windows::Forms::Label^ CumpleanosPO;
	private: System::Windows::Forms::DataGridView^ dgvPetOwner;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdColumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UsuarioColumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreColumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoColumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DniColumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CorreoColumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CumpleanosColumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DireccionColumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ GeneroColumna;












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
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtDni = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->NombrePO = (gcnew System::Windows::Forms::Label());
			this->UsuarioPO = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->CorreoPO = (gcnew System::Windows::Forms::Label());
			this->DireccionPO = (gcnew System::Windows::Forms::Label());
			this->DniPO = (gcnew System::Windows::Forms::Label());
			this->IdPO = (gcnew System::Windows::Forms::Label());
			this->btnChangePhoto = (gcnew System::Windows::Forms::Button());
			this->picturePhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->radioFemale = (gcnew System::Windows::Forms::RadioButton());
			this->radioMale = (gcnew System::Windows::Forms::RadioButton());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->CelularPO = (gcnew System::Windows::Forms::Label());
			this->MenuPetOwner = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->CumpleanosPO = (gcnew System::Windows::Forms::Label());
			this->dgvPetOwner = (gcnew System::Windows::Forms::DataGridView());
			this->IdColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UsuarioColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DniColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CorreoColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CumpleanosColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DireccionColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GeneroColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePhoto))->BeginInit();
			this->MenuPetOwner->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPetOwner))->BeginInit();
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(195, 52);
			this->txtUsername->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(251, 22);
			this->txtUsername->TabIndex = 47;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(655, 223);
			this->txtEmail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(251, 22);
			this->txtEmail->TabIndex = 46;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(195, 164);
			this->txtApellido->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(251, 22);
			this->txtApellido->TabIndex = 45;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(195, 128);
			this->txtFirstName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(251, 22);
			this->txtFirstName->TabIndex = 44;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(655, 149);
			this->txtAddress->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(251, 68);
			this->txtAddress->TabIndex = 43;
			// 
			// txtDni
			// 
			this->txtDni->Location = System::Drawing::Point(655, 86);
			this->txtDni->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDni->Name = L"txtDni";
			this->txtDni->Size = System::Drawing::Size(251, 22);
			this->txtDni->TabIndex = 41;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(655, 119);
			this->txtId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(251, 22);
			this->txtId->TabIndex = 40;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(52, 164);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 16);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Apellidos(*)";
			// 
			// NombrePO
			// 
			this->NombrePO->AutoSize = true;
			this->NombrePO->Location = System::Drawing::Point(52, 132);
			this->NombrePO->Name = L"NombrePO";
			this->NombrePO->Size = System::Drawing::Size(76, 16);
			this->NombrePO->TabIndex = 38;
			this->NombrePO->Text = L"Nombres(*)";
			// 
			// UsuarioPO
			// 
			this->UsuarioPO->AutoSize = true;
			this->UsuarioPO->Location = System::Drawing::Point(52, 55);
			this->UsuarioPO->Name = L"UsuarioPO";
			this->UsuarioPO->Size = System::Drawing::Size(67, 16);
			this->UsuarioPO->TabIndex = 37;
			this->UsuarioPO->Text = L"Usuario(*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(512, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 16);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Género(*)";
			// 
			// CorreoPO
			// 
			this->CorreoPO->AutoSize = true;
			this->CorreoPO->Location = System::Drawing::Point(512, 223);
			this->CorreoPO->Name = L"CorreoPO";
			this->CorreoPO->Size = System::Drawing::Size(61, 16);
			this->CorreoPO->TabIndex = 35;
			this->CorreoPO->Text = L"Correo(*)";
			// 
			// DireccionPO
			// 
			this->DireccionPO->AutoSize = true;
			this->DireccionPO->Location = System::Drawing::Point(512, 161);
			this->DireccionPO->Name = L"DireccionPO";
			this->DireccionPO->Size = System::Drawing::Size(77, 16);
			this->DireccionPO->TabIndex = 34;
			this->DireccionPO->Text = L"Dirección(*)";
			// 
			// DniPO
			// 
			this->DniPO->AutoSize = true;
			this->DniPO->Location = System::Drawing::Point(512, 86);
			this->DniPO->Name = L"DniPO";
			this->DniPO->Size = System::Drawing::Size(40, 16);
			this->DniPO->TabIndex = 33;
			this->DniPO->Text = L"Dni(*)";
			// 
			// IdPO
			// 
			this->IdPO->AutoSize = true;
			this->IdPO->Location = System::Drawing::Point(512, 119);
			this->IdPO->Name = L"IdPO";
			this->IdPO->Size = System::Drawing::Size(31, 16);
			this->IdPO->TabIndex = 32;
			this->IdPO->Text = L"Id(*)";
			// 
			// btnChangePhoto
			// 
			this->btnChangePhoto->Location = System::Drawing::Point(976, 286);
			this->btnChangePhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnChangePhoto->Name = L"btnChangePhoto";
			this->btnChangePhoto->Size = System::Drawing::Size(137, 39);
			this->btnChangePhoto->TabIndex = 53;
			this->btnChangePhoto->Text = L"Agregar foto";
			this->btnChangePhoto->UseVisualStyleBackColor = true;
			this->btnChangePhoto->Click += gcnew System::EventHandler(this, &PetOwnerMaintence::btnChangePhoto_Click);
			// 
			// picturePhoto
			// 
			this->picturePhoto->Location = System::Drawing::Point(948, 52);
			this->picturePhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->picturePhoto->Name = L"picturePhoto";
			this->picturePhoto->Size = System::Drawing::Size(179, 218);
			this->picturePhoto->TabIndex = 52;
			this->picturePhoto->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 16);
			this->label1->TabIndex = 54;
			this->label1->Text = L"Contrasena(*)";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(195, 87);
			this->txtPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(251, 22);
			this->txtPassword->TabIndex = 55;
			// 
			// radioFemale
			// 
			this->radioFemale->AutoSize = true;
			this->radioFemale->Location = System::Drawing::Point(663, 53);
			this->radioFemale->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioFemale->Name = L"radioFemale";
			this->radioFemale->Size = System::Drawing::Size(61, 20);
			this->radioFemale->TabIndex = 56;
			this->radioFemale->TabStop = true;
			this->radioFemale->Text = L"Mujer";
			this->radioFemale->UseVisualStyleBackColor = true;
			// 
			// radioMale
			// 
			this->radioMale->AutoSize = true;
			this->radioMale->Location = System::Drawing::Point(797, 53);
			this->radioMale->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioMale->Name = L"radioMale";
			this->radioMale->Size = System::Drawing::Size(77, 20);
			this->radioMale->TabIndex = 57;
			this->radioMale->TabStop = true;
			this->radioMale->Text = L"Hombre";
			this->radioMale->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(1007, 382);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(73, 31);
			this->btnDelete->TabIndex = 60;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &PetOwnerMaintence::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(951, 342);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(81, 34);
			this->btnUpdate->TabIndex = 59;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &PetOwnerMaintence::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(1053, 342);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(76, 34);
			this->btnAdd->TabIndex = 58;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &PetOwnerMaintence::btnAdd_Click);
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(195, 238);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(251, 22);
			this->txtPhoneNumber->TabIndex = 62;
			// 
			// CelularPO
			// 
			this->CelularPO->AutoSize = true;
			this->CelularPO->Location = System::Drawing::Point(52, 241);
			this->CelularPO->Name = L"CelularPO";
			this->CelularPO->Size = System::Drawing::Size(62, 16);
			this->CelularPO->TabIndex = 61;
			this->CelularPO->Text = L"Celular(*)";
			// 
			// MenuPetOwner
			// 
			this->MenuPetOwner->BackColor = System::Drawing::Color::Transparent;
			this->MenuPetOwner->ImageScalingSize = System::Drawing::Size(20, 20);
			this->MenuPetOwner->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->archivoToolStripMenuItem,
					this->consultaToolStripMenuItem
			});
			this->MenuPetOwner->Location = System::Drawing::Point(0, 0);
			this->MenuPetOwner->Name = L"MenuPetOwner";
			this->MenuPetOwner->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->MenuPetOwner->Size = System::Drawing::Size(1155, 28);
			this->MenuPetOwner->TabIndex = 63;
			this->MenuPetOwner->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &PetOwnerMaintence::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &PetOwnerMaintence::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &PetOwnerMaintence::salirToolStripMenuItem_Click);
			// 
			// consultaToolStripMenuItem
			// 
			this->consultaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->consultaToolStripMenuItem1 });
			this->consultaToolStripMenuItem->Name = L"consultaToolStripMenuItem";
			this->consultaToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->consultaToolStripMenuItem->Text = L"Reporte";
			// 
			// consultaToolStripMenuItem1
			// 
			this->consultaToolStripMenuItem1->Name = L"consultaToolStripMenuItem1";
			this->consultaToolStripMenuItem1->Size = System::Drawing::Size(149, 26);
			this->consultaToolStripMenuItem1->Text = L"Consulta";
			this->consultaToolStripMenuItem1->Click += gcnew System::EventHandler(this, &PetOwnerMaintence::consultaToolStripMenuItem1_Click);
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(195, 194);
			this->dtpBirthday->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(251, 22);
			this->dtpBirthday->TabIndex = 64;
			// 
			// CumpleanosPO
			// 
			this->CumpleanosPO->AutoSize = true;
			this->CumpleanosPO->Location = System::Drawing::Point(53, 202);
			this->CumpleanosPO->Name = L"CumpleanosPO";
			this->CumpleanosPO->Size = System::Drawing::Size(96, 16);
			this->CumpleanosPO->TabIndex = 65;
			this->CumpleanosPO->Text = L"Cumpleaños(*)";
			// 
			// dgvPetOwner
			// 
			this->dgvPetOwner->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPetOwner->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->IdColumna,
					this->UsuarioColumna, this->NombreColumna, this->ApellidoColumna, this->DniColumna, this->CorreoColumna, this->CumpleanosColumna,
					this->DireccionColumna, this->GeneroColumna
			});
			this->dgvPetOwner->Location = System::Drawing::Point(16, 279);
			this->dgvPetOwner->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgvPetOwner->Name = L"dgvPetOwner";
			this->dgvPetOwner->RowHeadersWidth = 51;
			this->dgvPetOwner->Size = System::Drawing::Size(891, 352);
			this->dgvPetOwner->TabIndex = 66;
			this->dgvPetOwner->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PetOwnerMaintence::dgvPetOwner_CellClick);
			this->dgvPetOwner->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PetOwnerMaintence::dataGridView1_CellContentClick);
			// 
			// IdColumna
			// 
			this->IdColumna->HeaderText = L"Id";
			this->IdColumna->MinimumWidth = 6;
			this->IdColumna->Name = L"IdColumna";
			this->IdColumna->Width = 125;
			// 
			// UsuarioColumna
			// 
			this->UsuarioColumna->HeaderText = L"Usuario";
			this->UsuarioColumna->MinimumWidth = 6;
			this->UsuarioColumna->Name = L"UsuarioColumna";
			this->UsuarioColumna->Width = 125;
			// 
			// NombreColumna
			// 
			this->NombreColumna->HeaderText = L"Nombre";
			this->NombreColumna->MinimumWidth = 6;
			this->NombreColumna->Name = L"NombreColumna";
			this->NombreColumna->Width = 125;
			// 
			// ApellidoColumna
			// 
			this->ApellidoColumna->HeaderText = L"Apellido";
			this->ApellidoColumna->MinimumWidth = 6;
			this->ApellidoColumna->Name = L"ApellidoColumna";
			this->ApellidoColumna->Width = 125;
			// 
			// DniColumna
			// 
			this->DniColumna->HeaderText = L"Dni";
			this->DniColumna->MinimumWidth = 6;
			this->DniColumna->Name = L"DniColumna";
			this->DniColumna->Width = 125;
			// 
			// CorreoColumna
			// 
			this->CorreoColumna->HeaderText = L"Correo";
			this->CorreoColumna->MinimumWidth = 6;
			this->CorreoColumna->Name = L"CorreoColumna";
			this->CorreoColumna->Width = 125;
			// 
			// CumpleanosColumna
			// 
			this->CumpleanosColumna->HeaderText = L"Cumpleanos";
			this->CumpleanosColumna->MinimumWidth = 6;
			this->CumpleanosColumna->Name = L"CumpleanosColumna";
			this->CumpleanosColumna->Width = 125;
			// 
			// DireccionColumna
			// 
			this->DireccionColumna->HeaderText = L"Direccion";
			this->DireccionColumna->MinimumWidth = 6;
			this->DireccionColumna->Name = L"DireccionColumna";
			this->DireccionColumna->Width = 125;
			// 
			// GeneroColumna
			// 
			this->GeneroColumna->HeaderText = L"Genero";
			this->GeneroColumna->MinimumWidth = 6;
			this->GeneroColumna->Name = L"GeneroColumna";
			this->GeneroColumna->Width = 125;
			// 
			// PetOwnerMaintence
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1155, 646);
			this->Controls->Add(this->dgvPetOwner);
			this->Controls->Add(this->CumpleanosPO);
			this->Controls->Add(this->dtpBirthday);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->CelularPO);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->radioMale);
			this->Controls->Add(this->radioFemale);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnChangePhoto);
			this->Controls->Add(this->picturePhoto);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtDni);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->NombrePO);
			this->Controls->Add(this->UsuarioPO);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->CorreoPO);
			this->Controls->Add(this->DireccionPO);
			this->Controls->Add(this->DniPO);
			this->Controls->Add(this->IdPO);
			this->Controls->Add(this->MenuPetOwner);
			this->MainMenuStrip = this->MenuPetOwner;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"PetOwnerMaintence";
			this->Text = L"PetOwnerMaintence";
			this->Load += gcnew System::EventHandler(this, &PetOwnerMaintence::refrescarToolStripMenuItem_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePhoto))->EndInit();
			this->MenuPetOwner->ResumeLayout(false);
			this->MenuPetOwner->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPetOwner))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/// --------------------------------------------------
	///						Metodos
	///---------------------------------------------------
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearControls();
		EnableControls();
		btnAdd->Enabled = true;
		dtpBirthday->Enabled = true;
		btnChangePhoto->Enabled = true;
		btnDelete->Enabled = false;
		btnUpdate->Enabled = false;
	}
	Void DisableControls() {
		txtId->ReadOnly = true;
		txtFirstName->ReadOnly = true;
		txtApellido->ReadOnly = true;
		txtAddress->ReadOnly = true;
		txtDni->ReadOnly = false;
		txtEmail->ReadOnly = true;
		txtPassword->ReadOnly = true;
		txtPhoneNumber->ReadOnly = true;
		txtUsername->ReadOnly = false;
		dtpBirthday->Enabled = false;
		btnAdd->Enabled = false;
		btnUpdate->Enabled = false;
		btnDelete->Enabled = false;	
	}
	Void EnableControls() {
		txtId->ReadOnly = false;
		txtFirstName->ReadOnly = false;
		txtApellido->ReadOnly = false;
		txtAddress->ReadOnly = false;
		txtDni->ReadOnly = false;
		txtEmail->ReadOnly = false;
		txtPassword->ReadOnly = false;
		txtPhoneNumber->ReadOnly = false;
		txtUsername->ReadOnly = false;
		dtpBirthday->Enabled = false;
		btnAdd->Enabled = true;
		btnUpdate->Enabled = true;
		btnDelete->Enabled = true;
	}
	
	private: System::Void consultaToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		DisableControls();
	}
	private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		EnableControls();
		dtpBirthday->Enabled = true;
		btnAdd->Enabled = false;
		btnUpdate->Enabled = true;
		btnDelete->Enabled = true;
		btnChangePhoto->Enabled = true;
	}
	public:
		void RefreshPetOwnerGrid() {
			List<PetOwner^>^ PetOwnerList = Controller::QueryAllPetOwner();
			dgvPetOwner->Rows->Clear();

			for (int i = 0; i < PetOwnerList->Count; i++) {
				dgvPetOwner->Rows->Add(gcnew array<String^>{
										" " + PetOwnerList[i]->Id.ToString(),
											PetOwnerList[i]->username,
											PetOwnerList[i]->Firstname,
											PetOwnerList[i]->Lastname,
											PetOwnerList[i]->Dni.ToString(),
											PetOwnerList[i]->Email,
											PetOwnerList[i]->Birthday,
											PetOwnerList[i]->Address,
										" "	+ PetOwnerList[i]->Gender
				});
			}
		}
	Void ClearControls() {
		txtId->Text = "";
		txtFirstName->Text = "";
		txtApellido->Text = "";
		txtAddress->Text = "";
		txtDni->Text = "";
		txtEmail->Text = "";
		txtPassword->Text = "";
		txtPhoneNumber->Text = "";
		txtUsername->Text = "";
		dtpBirthday->Text = "";
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) { //Boton Agregar
		PetOwner^ p;
		try {
			p = gcnew PetOwner();
			p->Id = Int32::Parse(txtId->Text);
			p->Dni = Int32::Parse(txtDni->Text); 
			p->DocNumbrer = txtDni->Text;
			p->Lastname = txtApellido->Text;
			p->Firstname = txtFirstName->Text;
			p->Address = txtAddress->Text;
			p->PhoneNumber = txtPhoneNumber->Text;
			p->Email = txtEmail->Text;
			p->Gender = Convert::ToChar(radioMale->Checked ? 'M' : 'F');
			p->username = txtUsername->Text;
			p->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
			p->password = txtPassword->Text;
		}
		catch(Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Comparta el error al área de Servicio al Cliente.");
			return;
		}
		Controller::AddPetOwner(p);
		RefreshPetOwnerGrid();
		ClearControls();
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnChangePhoto_Click(System::Object^ sender, System::EventArgs^ e) {
} 
private: System::Void refrescarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshPetOwnerGrid();
	ClearControls();
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	PetOwner^ p = gcnew PetOwner();
	try {
		if (txtId->Text->Trim() == "") {
			MessageBox::Show("El Id no debe estar vacío.");
			return;
		}
		p->Id = Int32::Parse(txtId->Text);
		p->Dni = Int32::Parse(txtDni->Text);
		p->DocNumbrer = txtDni->Text;
		p->Lastname = txtApellido->Text;
		p->Firstname = txtFirstName->Text;
		p->Address = txtAddress->Text;
		p->PhoneNumber = txtPhoneNumber->Text;
		p->Email = txtEmail->Text;
		p->Gender = Convert::ToChar(radioMale->Checked ? 'M' : 'F');
		p->username = txtUsername->Text;
		p->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
		p->password = txtPassword->Text;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Comparta el error al área de TI.");
		return;
	}

	Controller::UpdatePetOwner(p);
	RefreshPetOwnerGrid();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int PetOwnerId = Int32::Parse(txtId->Text);
	Controller::DeletePetOwner(PetOwnerId);
	RefreshPetOwnerGrid();
	ClearControls();
}
private: System::Void dgvPetOwner_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);

};
}
