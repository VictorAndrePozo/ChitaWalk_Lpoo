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




	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtStatus;
	private: System::Windows::Forms::PictureBox^ pccPhoto;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnChangePhoto;













	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;



	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::TextBox^ txtValoration;
	private: System::Windows::Forms::TextBox^ txtLevel;
	private: System::Windows::Forms::TextBox^ txtExperience;
	private: System::Windows::Forms::TextBox^ txtSalary;

	private: System::Windows::Forms::DataGridView^ dgvKeeper;
























	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ generalToolStripMenuItem;



private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
private: System::Windows::Forms::RadioButton^ rbtnFem;

private: System::Windows::Forms::RadioButton^ rbtnMasc;



private: System::Windows::Forms::ToolTip^ toolTip1;
private: System::Windows::Forms::ToolTip^ toolTip2;
private: System::Windows::Forms::ToolTip^ toolTip3;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ eliminarToolStripMenuItem;
private: System::Windows::Forms::Button^ btnAddWalker;

private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::DataGridView^ dgvWalker;
private: System::Windows::Forms::RadioButton^ rbtnMascWalker;



















private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::RadioButton^ rbtnFemWalker;



private: System::Windows::Forms::Label^ label18;


private: System::Windows::Forms::Label^ label19;

private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;


private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ txtSalaryWalker;

private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ txtExperienceWalker;

private: System::Windows::Forms::TextBox^ txtIdWalker;
private: System::Windows::Forms::TextBox^ txtLevelWalker;
private: System::Windows::Forms::TextBox^ txtDniWalker;




private: System::Windows::Forms::TextBox^ txtValorationWalker;



private: System::Windows::Forms::TextBox^ txtEmailWalker;


private: System::Windows::Forms::TextBox^ txtAddressWalker;

private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ txtFirstNameWalker;



private: System::Windows::Forms::TextBox^ txtLastNameWalker;



private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ txtUsernameWalker;



private: System::Windows::Forms::TextBox^ txtStatusWalker;

private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::PictureBox^ pcpPhoto;


private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Button^ btnUpdateWalker;

private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Button^ btnDeleteWalker;

private: System::Windows::Forms::Button^ button4;
















private: System::Windows::Forms::ComboBox^ cmbWarranty;
private: System::Windows::Forms::TextBox^ txtPassword;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::ComboBox^ cmbWarrantyWalker;
private: System::Windows::Forms::TextBox^ txtPasswordWalker;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ txtPhoneNumberWalker;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label28;
















private: System::Windows::Forms::ComboBox^ cmbDistrict;
private: System::Windows::Forms::Label^ Distrito;
private: System::Windows::Forms::ComboBox^ cmbDistrictWalker;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperdni;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keepername;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperlastname;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperstatus;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keepergender;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperdirection;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperemail;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperusername;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keepervaloration;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperlevel;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperPassword;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperexperience;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keepersalary;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperwarranty;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperPhoneNumber;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperDistrict;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerDocNumber;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerFirstname;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerLastName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerStatus;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerGender;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerAddress;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerEmail;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerUsername;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerValoration;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerLevel;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerExperience;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerSalary;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerWarranty;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerPhoneNumber;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerPassword;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walkerDistrict;













































































private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
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
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtStatus = (gcnew System::Windows::Forms::TextBox());
			this->pccPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnChangePhoto = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtValoration = (gcnew System::Windows::Forms::TextBox());
			this->txtLevel = (gcnew System::Windows::Forms::TextBox());
			this->txtExperience = (gcnew System::Windows::Forms::TextBox());
			this->txtSalary = (gcnew System::Windows::Forms::TextBox());
			this->dgvKeeper = (gcnew System::Windows::Forms::DataGridView());
			this->keeperId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperdni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keepername = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperlastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperstatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keepergender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperdirection = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperemail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperusername = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keepervaloration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperlevel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperPassword = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperexperience = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keepersalary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperwarranty = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperPhoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperDistrict = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->generalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rbtnFem = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnMasc = (gcnew System::Windows::Forms::RadioButton());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip3 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->cmbDistrict = (gcnew System::Windows::Forms::ComboBox());
			this->Distrito = (gcnew System::Windows::Forms::Label());
			this->cmbWarranty = (gcnew System::Windows::Forms::ComboBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->cmbDistrictWalker = (gcnew System::Windows::Forms::ComboBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->cmbWarrantyWalker = (gcnew System::Windows::Forms::ComboBox());
			this->txtPasswordWalker = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txtPhoneNumberWalker = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->btnAddWalker = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dgvWalker = (gcnew System::Windows::Forms::DataGridView());
			this->walkerId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerDocNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerFirstname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerLastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerGender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerAddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerUsername = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerValoration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerLevel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerExperience = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerSalary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerWarranty = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerPhoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerPassword = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->walkerDistrict = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rbtnMascWalker = (gcnew System::Windows::Forms::RadioButton());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->rbtnFemWalker = (gcnew System::Windows::Forms::RadioButton());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txtSalaryWalker = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtExperienceWalker = (gcnew System::Windows::Forms::TextBox());
			this->txtIdWalker = (gcnew System::Windows::Forms::TextBox());
			this->txtLevelWalker = (gcnew System::Windows::Forms::TextBox());
			this->txtDniWalker = (gcnew System::Windows::Forms::TextBox());
			this->txtValorationWalker = (gcnew System::Windows::Forms::TextBox());
			this->txtEmailWalker = (gcnew System::Windows::Forms::TextBox());
			this->txtAddressWalker = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->txtFirstNameWalker = (gcnew System::Windows::Forms::TextBox());
			this->txtLastNameWalker = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txtUsernameWalker = (gcnew System::Windows::Forms::TextBox());
			this->txtStatusWalker = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pcpPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->btnUpdateWalker = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteWalker = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pccPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvKeeper))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWalker))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcpPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// labelId
			// 
			this->labelId->AutoSize = true;
			this->labelId->Location = System::Drawing::Point(45, 26);
			this->labelId->Name = L"labelId";
			this->labelId->Size = System::Drawing::Size(18, 16);
			this->labelId->TabIndex = 0;
			this->labelId->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Dni";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Dirección";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Correo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(353, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Género";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(47, 218);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Usuario";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(45, 81);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Nombres";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(353, 81);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Apellidos";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(143, 19);
			this->txtId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(75, 22);
			this->txtId->TabIndex = 8;
			// 
			// txtDni
			// 
			this->txtDni->Location = System::Drawing::Point(143, 51);
			this->txtDni->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDni->Name = L"txtDni";
			this->txtDni->Size = System::Drawing::Size(161, 22);
			this->txtDni->TabIndex = 9;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(143, 176);
			this->txtEmail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(453, 22);
			this->txtEmail->TabIndex = 10;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(143, 114);
			this->txtAddress->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(453, 52);
			this->txtAddress->TabIndex = 11;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(143, 81);
			this->txtFirstName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(161, 22);
			this->txtFirstName->TabIndex = 12;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(441, 79);
			this->txtLastName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(155, 22);
			this->txtLastName->TabIndex = 13;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(143, 208);
			this->txtUsername->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(157, 22);
			this->txtUsername->TabIndex = 15;
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(435, 208);
			this->txtStatus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(161, 22);
			this->txtStatus->TabIndex = 16;
			// 
			// pccPhoto
			// 
			this->pccPhoto->Location = System::Drawing::Point(618, 15);
			this->pccPhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pccPhoto->Name = L"pccPhoto";
			this->pccPhoto->Size = System::Drawing::Size(179, 218);
			this->pccPhoto->TabIndex = 17;
			this->pccPhoto->TabStop = false;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(59, 245);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(137, 46);
			this->btnAdd->TabIndex = 18;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &carermaintenance::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(253, 245);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(137, 46);
			this->btnUpdate->TabIndex = 19;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &carermaintenance::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(441, 245);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(137, 46);
			this->btnDelete->TabIndex = 20;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &carermaintenance::btnDelete_Click);
			// 
			// btnChangePhoto
			// 
			this->btnChangePhoto->Location = System::Drawing::Point(641, 245);
			this->btnChangePhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnChangePhoto->Name = L"btnChangePhoto";
			this->btnChangePhoto->Size = System::Drawing::Size(137, 46);
			this->btnChangePhoto->TabIndex = 21;
			this->btnChangePhoto->Text = L"Agregar foto";
			this->btnChangePhoto->UseVisualStyleBackColor = true;
			this->btnChangePhoto->Click += gcnew System::EventHandler(this, &carermaintenance::btnChangePhoto_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(819, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 16);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Nivel";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(819, 23);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 16);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Valoración";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(819, 87);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 16);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Experiencia";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(819, 182);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 16);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Garantía";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(819, 127);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 16);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Salario";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(353, 214);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(50, 16);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Estado";
			// 
			// txtValoration
			// 
			this->txtValoration->Location = System::Drawing::Point(929, 19);
			this->txtValoration->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtValoration->Name = L"txtValoration";
			this->txtValoration->Size = System::Drawing::Size(125, 22);
			this->txtValoration->TabIndex = 32;
			// 
			// txtLevel
			// 
			this->txtLevel->Location = System::Drawing::Point(929, 51);
			this->txtLevel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLevel->Name = L"txtLevel";
			this->txtLevel->Size = System::Drawing::Size(125, 22);
			this->txtLevel->TabIndex = 33;
			// 
			// txtExperience
			// 
			this->txtExperience->Location = System::Drawing::Point(929, 83);
			this->txtExperience->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtExperience->Name = L"txtExperience";
			this->txtExperience->Size = System::Drawing::Size(125, 22);
			this->txtExperience->TabIndex = 34;
			// 
			// txtSalary
			// 
			this->txtSalary->Location = System::Drawing::Point(929, 114);
			this->txtSalary->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSalary->Multiline = true;
			this->txtSalary->Name = L"txtSalary";
			this->txtSalary->Size = System::Drawing::Size(125, 52);
			this->txtSalary->TabIndex = 35;
			// 
			// dgvKeeper
			// 
			this->dgvKeeper->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvKeeper->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(17) {
				this->keeperId, this->keeperdni,
					this->keepername, this->keeperlastname, this->keeperstatus, this->keepergender, this->keeperdirection, this->keeperemail, this->keeperusername,
					this->keepervaloration, this->keeperlevel, this->keeperPassword, this->keeperexperience, this->keepersalary, this->keeperwarranty,
					this->keeperPhoneNumber, this->keeperDistrict
			});
			this->dgvKeeper->Location = System::Drawing::Point(14, 306);
			this->dgvKeeper->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvKeeper->Name = L"dgvKeeper";
			this->dgvKeeper->RowHeadersWidth = 51;
			this->dgvKeeper->RowTemplate->Height = 24;
			this->dgvKeeper->Size = System::Drawing::Size(1084, 278);
			this->dgvKeeper->TabIndex = 37;
			this->dgvKeeper->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &carermaintenance::dgvKeeper_CellClick);
			// 
			// keeperId
			// 
			this->keeperId->HeaderText = L"Id";
			this->keeperId->MinimumWidth = 6;
			this->keeperId->Name = L"keeperId";
			this->keeperId->Width = 125;
			// 
			// keeperdni
			// 
			this->keeperdni->HeaderText = L"Dni";
			this->keeperdni->MinimumWidth = 6;
			this->keeperdni->Name = L"keeperdni";
			this->keeperdni->Width = 125;
			// 
			// keepername
			// 
			this->keepername->HeaderText = L"Nombres";
			this->keepername->MinimumWidth = 6;
			this->keepername->Name = L"keepername";
			this->keepername->Width = 125;
			// 
			// keeperlastname
			// 
			this->keeperlastname->HeaderText = L"Apellidos";
			this->keeperlastname->MinimumWidth = 6;
			this->keeperlastname->Name = L"keeperlastname";
			this->keeperlastname->Width = 125;
			// 
			// keeperstatus
			// 
			this->keeperstatus->HeaderText = L"Estado";
			this->keeperstatus->MinimumWidth = 6;
			this->keeperstatus->Name = L"keeperstatus";
			this->keeperstatus->Width = 125;
			// 
			// keepergender
			// 
			this->keepergender->HeaderText = L"Género";
			this->keepergender->MinimumWidth = 6;
			this->keepergender->Name = L"keepergender";
			this->keepergender->Width = 125;
			// 
			// keeperdirection
			// 
			this->keeperdirection->HeaderText = L"Dirección";
			this->keeperdirection->MinimumWidth = 6;
			this->keeperdirection->Name = L"keeperdirection";
			this->keeperdirection->Width = 125;
			// 
			// keeperemail
			// 
			this->keeperemail->HeaderText = L"Correo";
			this->keeperemail->MinimumWidth = 6;
			this->keeperemail->Name = L"keeperemail";
			this->keeperemail->Width = 125;
			// 
			// keeperusername
			// 
			this->keeperusername->HeaderText = L"Usuario";
			this->keeperusername->MinimumWidth = 6;
			this->keeperusername->Name = L"keeperusername";
			this->keeperusername->Width = 125;
			// 
			// keepervaloration
			// 
			this->keepervaloration->HeaderText = L"Valoración";
			this->keepervaloration->MinimumWidth = 6;
			this->keepervaloration->Name = L"keepervaloration";
			this->keepervaloration->Width = 125;
			// 
			// keeperlevel
			// 
			this->keeperlevel->HeaderText = L"Nivel";
			this->keeperlevel->MinimumWidth = 6;
			this->keeperlevel->Name = L"keeperlevel";
			this->keeperlevel->Width = 125;
			// 
			// keeperPassword
			// 
			this->keeperPassword->HeaderText = L"Contraseña";
			this->keeperPassword->MinimumWidth = 6;
			this->keeperPassword->Name = L"keeperPassword";
			this->keeperPassword->Width = 125;
			// 
			// keeperexperience
			// 
			this->keeperexperience->HeaderText = L"Experiencia";
			this->keeperexperience->MinimumWidth = 6;
			this->keeperexperience->Name = L"keeperexperience";
			this->keeperexperience->Width = 125;
			// 
			// keepersalary
			// 
			this->keepersalary->HeaderText = L"Salario";
			this->keepersalary->MinimumWidth = 6;
			this->keepersalary->Name = L"keepersalary";
			this->keepersalary->Width = 125;
			// 
			// keeperwarranty
			// 
			this->keeperwarranty->HeaderText = L"Garantía";
			this->keeperwarranty->MinimumWidth = 6;
			this->keeperwarranty->Name = L"keeperwarranty";
			this->keeperwarranty->Width = 125;
			// 
			// keeperPhoneNumber
			// 
			this->keeperPhoneNumber->HeaderText = L"Celular";
			this->keeperPhoneNumber->MinimumWidth = 6;
			this->keeperPhoneNumber->Name = L"keeperPhoneNumber";
			this->keeperPhoneNumber->Width = 125;
			// 
			// keeperDistrict
			// 
			this->keeperDistrict->HeaderText = L"Distrito";
			this->keeperDistrict->MinimumWidth = 6;
			this->keeperDistrict->Name = L"keeperDistrict";
			this->keeperDistrict->Width = 125;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(820, 268);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 16);
			this->label10->TabIndex = 38;
			this->label10->Text = L"Celular";
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(929, 268);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(125, 22);
			this->txtPhoneNumber->TabIndex = 39;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->generalToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1161, 28);
			this->menuStrip1->TabIndex = 40;
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
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &carermaintenance::salirToolStripMenuItem_Click);
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &carermaintenance::nuevoToolStripMenuItem_Click);
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->modificarToolStripMenuItem->Text = L"Editar";
			this->modificarToolStripMenuItem->Click += gcnew System::EventHandler(this, &carermaintenance::modificarToolStripMenuItem_Click);
			// 
			// eliminarToolStripMenuItem
			// 
			this->eliminarToolStripMenuItem->Name = L"eliminarToolStripMenuItem";
			this->eliminarToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->eliminarToolStripMenuItem->Text = L"Eliminar";
			// 
			// rbtnFem
			// 
			this->rbtnFem->AutoSize = true;
			this->rbtnFem->Checked = true;
			this->rbtnFem->Location = System::Drawing::Point(441, 49);
			this->rbtnFem->Name = L"rbtnFem";
			this->rbtnFem->Size = System::Drawing::Size(61, 20);
			this->rbtnFem->TabIndex = 41;
			this->rbtnFem->TabStop = true;
			this->rbtnFem->Text = L"Mujer";
			this->rbtnFem->UseVisualStyleBackColor = true;
			// 
			// rbtnMasc
			// 
			this->rbtnMasc->AutoSize = true;
			this->rbtnMasc->Location = System::Drawing::Point(532, 49);
			this->rbtnMasc->Name = L"rbtnMasc";
			this->rbtnMasc->Size = System::Drawing::Size(64, 20);
			this->rbtnMasc->TabIndex = 42;
			this->rbtnMasc->Text = L"Varon";
			this->rbtnMasc->UseVisualStyleBackColor = true;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(28, 42);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1121, 633);
			this->tabControl1->TabIndex = 43;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->cmbDistrict);
			this->tabPage1->Controls->Add(this->Distrito);
			this->tabPage1->Controls->Add(this->cmbWarranty);
			this->tabPage1->Controls->Add(this->txtPassword);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->btnAdd);
			this->tabPage1->Controls->Add(this->labelId);
			this->tabPage1->Controls->Add(this->dgvKeeper);
			this->tabPage1->Controls->Add(this->rbtnMasc);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->rbtnFem);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->txtPhoneNumber);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->txtSalary);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->txtExperience);
			this->tabPage1->Controls->Add(this->txtId);
			this->tabPage1->Controls->Add(this->txtLevel);
			this->tabPage1->Controls->Add(this->txtDni);
			this->tabPage1->Controls->Add(this->txtValoration);
			this->tabPage1->Controls->Add(this->txtEmail);
			this->tabPage1->Controls->Add(this->txtAddress);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->txtFirstName);
			this->tabPage1->Controls->Add(this->txtLastName);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->txtUsername);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->txtStatus);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->pccPhoto);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->btnUpdate);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->btnDelete);
			this->tabPage1->Controls->Add(this->btnChangePhoto);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1113, 604);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Cuidador";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &carermaintenance::tabPage1_Click);
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
			this->cmbDistrict->Location = System::Drawing::Point(344, 18);
			this->cmbDistrict->Name = L"cmbDistrict";
			this->cmbDistrict->Size = System::Drawing::Size(252, 24);
			this->cmbDistrict->TabIndex = 71;
			// 
			// Distrito
			// 
			this->Distrito->AutoSize = true;
			this->Distrito->Location = System::Drawing::Point(243, 23);
			this->Distrito->Name = L"Distrito";
			this->Distrito->Size = System::Drawing::Size(61, 16);
			this->Distrito->TabIndex = 70;
			this->Distrito->Text = L"Distrito(*)";
			// 
			// cmbWarranty
			// 
			this->cmbWarranty->FormattingEnabled = true;
			this->cmbWarranty->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Etapa 0:  No cuenta con ninguna verificación",
					L"Etapa 1:  Se verificó la foto y/o la identificación oficial del perfil (DNI/pasap"
					L"orte)", L"Etapa 2:  Se verificó la ubicación del domicilio actual + Etapa 1",
					L"Etapa 3:  Se verifica que la persona no tiene antecedentes penales, especialmente"
					L" relacionado al maltrato animal + Etapas 1, 2",
					L"Etapa 4:  Se verificó la actividad/continuidad en la página  + Etapas 1, 2, 3"
			});
			this->cmbWarranty->Location = System::Drawing::Point(929, 182);
			this->cmbWarranty->Name = L"cmbWarranty";
			this->cmbWarranty->Size = System::Drawing::Size(125, 24);
			this->cmbWarranty->TabIndex = 45;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(929, 238);
			this->txtPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(125, 22);
			this->txtPassword->TabIndex = 44;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(820, 238);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(76, 16);
			this->label15->TabIndex = 43;
			this->label15->Text = L"Contraseña";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->cmbDistrictWalker);
			this->tabPage2->Controls->Add(this->label32);
			this->tabPage2->Controls->Add(this->cmbWarrantyWalker);
			this->tabPage2->Controls->Add(this->txtPasswordWalker);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->txtPhoneNumberWalker);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->btnAddWalker);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->dgvWalker);
			this->tabPage2->Controls->Add(this->rbtnMascWalker);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->rbtnFemWalker);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->txtSalaryWalker);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->txtExperienceWalker);
			this->tabPage2->Controls->Add(this->txtIdWalker);
			this->tabPage2->Controls->Add(this->txtLevelWalker);
			this->tabPage2->Controls->Add(this->txtDniWalker);
			this->tabPage2->Controls->Add(this->txtValorationWalker);
			this->tabPage2->Controls->Add(this->txtEmailWalker);
			this->tabPage2->Controls->Add(this->txtAddressWalker);
			this->tabPage2->Controls->Add(this->label26);
			this->tabPage2->Controls->Add(this->txtFirstNameWalker);
			this->tabPage2->Controls->Add(this->txtLastNameWalker);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->txtUsernameWalker);
			this->tabPage2->Controls->Add(this->txtStatusWalker);
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Controls->Add(this->pcpPhoto);
			this->tabPage2->Controls->Add(this->label30);
			this->tabPage2->Controls->Add(this->btnUpdateWalker);
			this->tabPage2->Controls->Add(this->label31);
			this->tabPage2->Controls->Add(this->btnDeleteWalker);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1113, 604);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Paseador";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// cmbDistrictWalker
			// 
			this->cmbDistrictWalker->FormattingEnabled = true;
			this->cmbDistrictWalker->Items->AddRange(gcnew cli::array< System::Object^  >(43) {
				L"Ancón", L"Ate", L"Barranco", L"Breña",
					L"Carabayllo", L"Cercado de Lima", L"Chaclacayo", L"Chorrillos", L"Cieneguilla", L"Comas", L"El agustino", L"Independencia",
					L"Jesús maría", L"La molina", L"La victoria", L"Lince", L"Los olivos", L"Lurigancho", L"Lurín", L"Magdalena del mar", L"Miraflores",
					L"Pachacámac", L"Pucusana", L"Pueblo libre", L"Puente piedra", L"Punta hermosa", L"Punta negra", L"Rímac", L"San bartolo", L"San borja",
					L"San isidro", L"San Juan de Lurigancho", L"San Juan de Miraflores", L"San Luis", L"San Martin de Porres", L"San Miguel", L"Santa Anita",
					L"Santa María del Mar", L"Santa Rosa", L"Santiago de Surco", L"Surquillo", L"Villa el Salvador", L"Villa Maria del Triunfo"
			});
			this->cmbDistrictWalker->Location = System::Drawing::Point(344, 20);
			this->cmbDistrictWalker->Name = L"cmbDistrictWalker";
			this->cmbDistrictWalker->Size = System::Drawing::Size(252, 24);
			this->cmbDistrictWalker->TabIndex = 89;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(243, 25);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(61, 16);
			this->label32->TabIndex = 88;
			this->label32->Text = L"Distrito(*)";
			// 
			// cmbWarrantyWalker
			// 
			this->cmbWarrantyWalker->FormattingEnabled = true;
			this->cmbWarrantyWalker->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Etapa 0:  No cuenta con ninguna verificación",
					L"Etapa 1:  Se verificó la foto y/o la identificación oficial del perfil (DNI/pasap"
					L"orte)", L"Etapa 2:  Se verificó la ubicación del domicilio actual + Etapa 1",
					L"Etapa 3:  Se verifica que la persona no tiene antecedentes penales, especialmente"
					L" relacionado al maltrato animal + Etapas 1, 2",
					L"Etapa 4:  Se verificó la actividad/continuidad en la página  + Etapas 1, 2, 3"
			});
			this->cmbWarrantyWalker->Location = System::Drawing::Point(929, 192);
			this->cmbWarrantyWalker->Name = L"cmbWarrantyWalker";
			this->cmbWarrantyWalker->Size = System::Drawing::Size(125, 24);
			this->cmbWarrantyWalker->TabIndex = 87;
			// 
			// txtPasswordWalker
			// 
			this->txtPasswordWalker->Location = System::Drawing::Point(929, 230);
			this->txtPasswordWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPasswordWalker->Name = L"txtPasswordWalker";
			this->txtPasswordWalker->Size = System::Drawing::Size(125, 22);
			this->txtPasswordWalker->TabIndex = 86;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(820, 230);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(76, 16);
			this->label20->TabIndex = 85;
			this->label20->Text = L"Contraseña";
			// 
			// txtPhoneNumberWalker
			// 
			this->txtPhoneNumberWalker->Location = System::Drawing::Point(929, 272);
			this->txtPhoneNumberWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPhoneNumberWalker->Name = L"txtPhoneNumberWalker";
			this->txtPhoneNumberWalker->Size = System::Drawing::Size(125, 22);
			this->txtPhoneNumberWalker->TabIndex = 84;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(820, 272);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(49, 16);
			this->label25->TabIndex = 83;
			this->label25->Text = L"Celular";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(819, 192);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(58, 16);
			this->label28->TabIndex = 82;
			this->label28->Text = L"Garantía";
			// 
			// btnAddWalker
			// 
			this->btnAddWalker->Location = System::Drawing::Point(59, 248);
			this->btnAddWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddWalker->Name = L"btnAddWalker";
			this->btnAddWalker->Size = System::Drawing::Size(137, 46);
			this->btnAddWalker->TabIndex = 60;
			this->btnAddWalker->Text = L"Agregar";
			this->btnAddWalker->UseVisualStyleBackColor = true;
			this->btnAddWalker->Click += gcnew System::EventHandler(this, &carermaintenance::btnAddWalker_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(45, 29);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(18, 16);
			this->label16->TabIndex = 43;
			this->label16->Text = L"Id";
			// 
			// dgvWalker
			// 
			this->dgvWalker->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvWalker->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(17) {
				this->walkerId, this->walkerDocNumber,
					this->walkerFirstname, this->walkerLastName, this->walkerStatus, this->walkerGender, this->walkerAddress, this->walkerEmail,
					this->walkerUsername, this->walkerValoration, this->walkerLevel, this->walkerExperience, this->walkerSalary, this->walkerWarranty,
					this->walkerPhoneNumber, this->walkerPassword, this->walkerDistrict
			});
			this->dgvWalker->Location = System::Drawing::Point(14, 309);
			this->dgvWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvWalker->Name = L"dgvWalker";
			this->dgvWalker->RowHeadersWidth = 51;
			this->dgvWalker->RowTemplate->Height = 24;
			this->dgvWalker->Size = System::Drawing::Size(1084, 278);
			this->dgvWalker->TabIndex = 77;
			this->dgvWalker->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &carermaintenance::dgvWalker_CellClick);
			// 
			// walkerId
			// 
			this->walkerId->HeaderText = L"Id";
			this->walkerId->MinimumWidth = 6;
			this->walkerId->Name = L"walkerId";
			this->walkerId->Width = 125;
			// 
			// walkerDocNumber
			// 
			this->walkerDocNumber->HeaderText = L"Dni";
			this->walkerDocNumber->MinimumWidth = 6;
			this->walkerDocNumber->Name = L"walkerDocNumber";
			this->walkerDocNumber->Width = 125;
			// 
			// walkerFirstname
			// 
			this->walkerFirstname->HeaderText = L"Nombres";
			this->walkerFirstname->MinimumWidth = 6;
			this->walkerFirstname->Name = L"walkerFirstname";
			this->walkerFirstname->Width = 125;
			// 
			// walkerLastName
			// 
			this->walkerLastName->HeaderText = L"Apellidos";
			this->walkerLastName->MinimumWidth = 6;
			this->walkerLastName->Name = L"walkerLastName";
			this->walkerLastName->Width = 125;
			// 
			// walkerStatus
			// 
			this->walkerStatus->HeaderText = L"Estado";
			this->walkerStatus->MinimumWidth = 6;
			this->walkerStatus->Name = L"walkerStatus";
			this->walkerStatus->Width = 125;
			// 
			// walkerGender
			// 
			this->walkerGender->HeaderText = L"Género";
			this->walkerGender->MinimumWidth = 6;
			this->walkerGender->Name = L"walkerGender";
			this->walkerGender->Width = 125;
			// 
			// walkerAddress
			// 
			this->walkerAddress->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->walkerAddress->HeaderText = L"Dirección";
			this->walkerAddress->MinimumWidth = 6;
			this->walkerAddress->Name = L"walkerAddress";
			this->walkerAddress->Width = 125;
			// 
			// walkerEmail
			// 
			this->walkerEmail->HeaderText = L"Correo";
			this->walkerEmail->MinimumWidth = 6;
			this->walkerEmail->Name = L"walkerEmail";
			this->walkerEmail->Width = 125;
			// 
			// walkerUsername
			// 
			this->walkerUsername->HeaderText = L"Usuario";
			this->walkerUsername->MinimumWidth = 6;
			this->walkerUsername->Name = L"walkerUsername";
			this->walkerUsername->Width = 125;
			// 
			// walkerValoration
			// 
			this->walkerValoration->HeaderText = L"Valoración";
			this->walkerValoration->MinimumWidth = 6;
			this->walkerValoration->Name = L"walkerValoration";
			this->walkerValoration->Width = 125;
			// 
			// walkerLevel
			// 
			this->walkerLevel->HeaderText = L"Nivel";
			this->walkerLevel->MinimumWidth = 6;
			this->walkerLevel->Name = L"walkerLevel";
			this->walkerLevel->Width = 125;
			// 
			// walkerExperience
			// 
			this->walkerExperience->HeaderText = L"Experiencia";
			this->walkerExperience->MinimumWidth = 6;
			this->walkerExperience->Name = L"walkerExperience";
			this->walkerExperience->Width = 125;
			// 
			// walkerSalary
			// 
			this->walkerSalary->HeaderText = L"Salario";
			this->walkerSalary->MinimumWidth = 6;
			this->walkerSalary->Name = L"walkerSalary";
			this->walkerSalary->Width = 125;
			// 
			// walkerWarranty
			// 
			this->walkerWarranty->HeaderText = L"Garantía";
			this->walkerWarranty->MinimumWidth = 6;
			this->walkerWarranty->Name = L"walkerWarranty";
			this->walkerWarranty->Width = 125;
			// 
			// walkerPhoneNumber
			// 
			this->walkerPhoneNumber->HeaderText = L"Celular";
			this->walkerPhoneNumber->MinimumWidth = 6;
			this->walkerPhoneNumber->Name = L"walkerPhoneNumber";
			this->walkerPhoneNumber->Width = 125;
			// 
			// walkerPassword
			// 
			this->walkerPassword->HeaderText = L"Contraseña";
			this->walkerPassword->MinimumWidth = 6;
			this->walkerPassword->Name = L"walkerPassword";
			this->walkerPassword->Width = 125;
			// 
			// walkerDistrict
			// 
			this->walkerDistrict->HeaderText = L"Distrito";
			this->walkerDistrict->MinimumWidth = 6;
			this->walkerDistrict->Name = L"walkerDistrict";
			this->walkerDistrict->Width = 125;
			// 
			// rbtnMascWalker
			// 
			this->rbtnMascWalker->AutoSize = true;
			this->rbtnMascWalker->Location = System::Drawing::Point(532, 52);
			this->rbtnMascWalker->Name = L"rbtnMascWalker";
			this->rbtnMascWalker->Size = System::Drawing::Size(64, 20);
			this->rbtnMascWalker->TabIndex = 81;
			this->rbtnMascWalker->Text = L"Varon";
			this->rbtnMascWalker->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(45, 57);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(27, 16);
			this->label17->TabIndex = 44;
			this->label17->Text = L"Dni";
			// 
			// rbtnFemWalker
			// 
			this->rbtnFemWalker->AutoSize = true;
			this->rbtnFemWalker->Checked = true;
			this->rbtnFemWalker->Location = System::Drawing::Point(441, 52);
			this->rbtnFemWalker->Name = L"rbtnFemWalker";
			this->rbtnFemWalker->Size = System::Drawing::Size(61, 20);
			this->rbtnFemWalker->TabIndex = 80;
			this->rbtnFemWalker->TabStop = true;
			this->rbtnFemWalker->Text = L"Mujer";
			this->rbtnFemWalker->UseVisualStyleBackColor = true;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(47, 117);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(64, 16);
			this->label18->TabIndex = 45;
			this->label18->Text = L"Dirección";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(45, 182);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(48, 16);
			this->label19->TabIndex = 46;
			this->label19->Text = L"Correo";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(353, 54);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(52, 16);
			this->label21->TabIndex = 47;
			this->label21->Text = L"Género";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(47, 221);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(54, 16);
			this->label22->TabIndex = 48;
			this->label22->Text = L"Usuario";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(45, 84);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(63, 16);
			this->label23->TabIndex = 49;
			this->label23->Text = L"Nombres";
			// 
			// txtSalaryWalker
			// 
			this->txtSalaryWalker->Location = System::Drawing::Point(929, 117);
			this->txtSalaryWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSalaryWalker->Multiline = true;
			this->txtSalaryWalker->Name = L"txtSalaryWalker";
			this->txtSalaryWalker->Size = System::Drawing::Size(125, 52);
			this->txtSalaryWalker->TabIndex = 75;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(353, 84);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(64, 16);
			this->label24->TabIndex = 50;
			this->label24->Text = L"Apellidos";
			// 
			// txtExperienceWalker
			// 
			this->txtExperienceWalker->Location = System::Drawing::Point(929, 86);
			this->txtExperienceWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtExperienceWalker->Name = L"txtExperienceWalker";
			this->txtExperienceWalker->Size = System::Drawing::Size(125, 22);
			this->txtExperienceWalker->TabIndex = 74;
			// 
			// txtIdWalker
			// 
			this->txtIdWalker->Location = System::Drawing::Point(143, 22);
			this->txtIdWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIdWalker->Name = L"txtIdWalker";
			this->txtIdWalker->Size = System::Drawing::Size(75, 22);
			this->txtIdWalker->TabIndex = 51;
			// 
			// txtLevelWalker
			// 
			this->txtLevelWalker->Location = System::Drawing::Point(929, 54);
			this->txtLevelWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLevelWalker->Name = L"txtLevelWalker";
			this->txtLevelWalker->Size = System::Drawing::Size(125, 22);
			this->txtLevelWalker->TabIndex = 73;
			// 
			// txtDniWalker
			// 
			this->txtDniWalker->Location = System::Drawing::Point(143, 54);
			this->txtDniWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDniWalker->Name = L"txtDniWalker";
			this->txtDniWalker->Size = System::Drawing::Size(161, 22);
			this->txtDniWalker->TabIndex = 52;
			// 
			// txtValorationWalker
			// 
			this->txtValorationWalker->Location = System::Drawing::Point(929, 22);
			this->txtValorationWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtValorationWalker->Name = L"txtValorationWalker";
			this->txtValorationWalker->Size = System::Drawing::Size(125, 22);
			this->txtValorationWalker->TabIndex = 72;
			// 
			// txtEmailWalker
			// 
			this->txtEmailWalker->Location = System::Drawing::Point(143, 179);
			this->txtEmailWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtEmailWalker->Name = L"txtEmailWalker";
			this->txtEmailWalker->Size = System::Drawing::Size(453, 22);
			this->txtEmailWalker->TabIndex = 53;
			// 
			// txtAddressWalker
			// 
			this->txtAddressWalker->Location = System::Drawing::Point(143, 117);
			this->txtAddressWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAddressWalker->Multiline = true;
			this->txtAddressWalker->Name = L"txtAddressWalker";
			this->txtAddressWalker->Size = System::Drawing::Size(453, 52);
			this->txtAddressWalker->TabIndex = 54;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(353, 217);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(50, 16);
			this->label26->TabIndex = 70;
			this->label26->Text = L"Estado";
			// 
			// txtFirstNameWalker
			// 
			this->txtFirstNameWalker->Location = System::Drawing::Point(143, 84);
			this->txtFirstNameWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtFirstNameWalker->Name = L"txtFirstNameWalker";
			this->txtFirstNameWalker->Size = System::Drawing::Size(161, 22);
			this->txtFirstNameWalker->TabIndex = 55;
			// 
			// txtLastNameWalker
			// 
			this->txtLastNameWalker->Location = System::Drawing::Point(441, 82);
			this->txtLastNameWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLastNameWalker->Name = L"txtLastNameWalker";
			this->txtLastNameWalker->Size = System::Drawing::Size(155, 22);
			this->txtLastNameWalker->TabIndex = 56;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(819, 130);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(50, 16);
			this->label27->TabIndex = 68;
			this->label27->Text = L"Salario";
			// 
			// txtUsernameWalker
			// 
			this->txtUsernameWalker->Location = System::Drawing::Point(143, 211);
			this->txtUsernameWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUsernameWalker->Name = L"txtUsernameWalker";
			this->txtUsernameWalker->Size = System::Drawing::Size(157, 22);
			this->txtUsernameWalker->TabIndex = 57;
			// 
			// txtStatusWalker
			// 
			this->txtStatusWalker->Location = System::Drawing::Point(435, 211);
			this->txtStatusWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtStatusWalker->Name = L"txtStatusWalker";
			this->txtStatusWalker->Size = System::Drawing::Size(161, 22);
			this->txtStatusWalker->TabIndex = 58;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(819, 90);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(78, 16);
			this->label29->TabIndex = 66;
			this->label29->Text = L"Experiencia";
			// 
			// pcpPhoto
			// 
			this->pcpPhoto->Location = System::Drawing::Point(618, 18);
			this->pcpPhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pcpPhoto->Name = L"pcpPhoto";
			this->pcpPhoto->Size = System::Drawing::Size(179, 218);
			this->pcpPhoto->TabIndex = 59;
			this->pcpPhoto->TabStop = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(819, 26);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(72, 16);
			this->label30->TabIndex = 65;
			this->label30->Text = L"Valoración";
			// 
			// btnUpdateWalker
			// 
			this->btnUpdateWalker->Location = System::Drawing::Point(253, 248);
			this->btnUpdateWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateWalker->Name = L"btnUpdateWalker";
			this->btnUpdateWalker->Size = System::Drawing::Size(137, 46);
			this->btnUpdateWalker->TabIndex = 61;
			this->btnUpdateWalker->Text = L"Modificar";
			this->btnUpdateWalker->UseVisualStyleBackColor = true;
			this->btnUpdateWalker->Click += gcnew System::EventHandler(this, &carermaintenance::btnUpdateWalker_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(819, 57);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(38, 16);
			this->label31->TabIndex = 64;
			this->label31->Text = L"Nivel";
			// 
			// btnDeleteWalker
			// 
			this->btnDeleteWalker->Location = System::Drawing::Point(441, 248);
			this->btnDeleteWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDeleteWalker->Name = L"btnDeleteWalker";
			this->btnDeleteWalker->Size = System::Drawing::Size(137, 46);
			this->btnDeleteWalker->TabIndex = 62;
			this->btnDeleteWalker->Text = L"Eliminar";
			this->btnDeleteWalker->UseVisualStyleBackColor = true;
			this->btnDeleteWalker->Click += gcnew System::EventHandler(this, &carermaintenance::btnDeleteWalker_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(641, 248);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 46);
			this->button4->TabIndex = 63;
			this->button4->Text = L"Agregar foto";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &carermaintenance::button4_Click);
			// 
			// carermaintenance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1161, 687);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"carermaintenance";
			this->Text = L"carermaintenance";
			this->Load += gcnew System::EventHandler(this, &carermaintenance::carermaintenance_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pccPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvKeeper))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWalker))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcpPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void RefreshGrid() {
			List<Keeper^>^ keeperList = Controller::QueryAllKeepers();
			dgvKeeper->Rows->Clear();
			for (int i = 0; i < keeperList->Count; i++) {
				dgvKeeper->Rows->Add(gcnew array<String^>{
					"" + keeperList[i]->Id,
					"" + keeperList[i]->Dni,
						 keeperList[i]->Firstname,
						 keeperList[i]->Lastname,
					"" + keeperList[i]->Status,
					"" + keeperList[i]->Gender,
						 keeperList[i]->Address,
						 keeperList[i]->Email,
						 keeperList[i]->username,
					"" + keeperList[i]->Valoration,
					"" + keeperList[i]->Level,
					"" + keeperList[i]->Experience,
					"" + keeperList[i]->Salary,
					     keeperList[i]->Warranty,
					"" + keeperList[i]->PhoneNumber,
					"" + keeperList[i]->password,
					     keeperList[i]->District
						//keeperList[i]->Award,
						//"" + keeperList[i]->Photo,
				});
			}
		}

		void RefreshGrid_Walker() {
			List<Walker^>^ walkerList = Controller::QueryAllWalkers();
			dgvWalker->Rows->Clear();
			for (int i = 0; i < walkerList->Count; i++) {
				dgvWalker->Rows->Add(gcnew array<String^>{
					"" + walkerList[i]->Id,
						"" + walkerList[i]->Dni,
						walkerList[i]->Firstname,
						walkerList[i]->Lastname,
						"" + walkerList[i]->Status,
						"" + walkerList[i]->Gender,
						walkerList[i]->Address,
						walkerList[i]->Email,
						walkerList[i]->username,
						"" + walkerList[i]->Valoration,
						"" + walkerList[i]->Level,
						"" + walkerList[i]->Experience,
						"" + walkerList[i]->Salary,
						walkerList[i]->Warranty,
						"" + walkerList[i]->PhoneNumber,
						"" + walkerList[i]->password,
						     walkerList[i]->District
				});
			}
		}


	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Keeper^ c = gcnew Keeper();

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
		c->Experience = Int32::Parse(txtExperience->Text);
		c->Level = Int32::Parse(txtLevel->Text);
		c->Warranty = cmbWarranty->Text;
		c->Salary = Double::Parse(txtSalary->Text);
		//c->Photo = array::Parse(PicturePhoto->Picture);
		c->Status = 'A';
		c->password = txtPassword->Text;
		c->District = cmbDistrict->Text;

		Controller::AddKeeper(c);
		RefreshGrid();
		ClearControls();
	}

	private: System::Void btnAddWalker_Click(System::Object^ sender, System::EventArgs^ e) {
		 Walker^ c = gcnew Walker();

		 c->Dni = Int32::Parse(txtDniWalker->Text);
		 c->Address = txtAddressWalker->Text;
		 c->PhoneNumber = txtPhoneNumberWalker->Text;
		 c->Email = txtEmailWalker->Text;
		 //c->Gender = Char::Parse(txtGender->Text);
		 c->Id = Int32::Parse(txtIdWalker->Text);
		 c->username = txtUsernameWalker->Text;
		 c->Lastname = txtLastNameWalker->Text;
		 c->Firstname = txtFirstNameWalker->Text;
		 c->Valoration = Int32::Parse(txtValorationWalker->Text);
		 c->Experience = Int32::Parse(txtExperienceWalker->Text);
		 c->Level = Int32::Parse(txtLevelWalker->Text);
		 c->Warranty = cmbWarrantyWalker->Text;
		 c->Salary = Double::Parse(txtSalaryWalker->Text);
		 //c->Photo = array::Parse(PicturePhoto->Picture);
		 c->Status = 'A';
		 c->password = txtPasswordWalker->Text;
		 c->District = cmbDistrictWalker->Text;

		 Controller::AddWalker(c);
		 RefreshGrid_Walker();
		 ClearControls();
	 }

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		Keeper^ c = gcnew Keeper();
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
		c->Experience = Int32::Parse(txtExperience->Text);
		c->Level = Int32::Parse(txtLevel->Text);
		c->Warranty = cmbWarranty->Text;
		c->Salary = Double::Parse(txtSalary->Text);
		//c->Photo = array::Parse(PicturePhoto->Picture);
		c->Status = 'A';
		c->password = txtPassword->Text;
		c->District = cmbDistrict->Text;

		Controller::UpdateKeeper(c);
		RefreshGrid();

	}

	private: System::Void btnUpdateWalker_Click(System::Object^ sender, System::EventArgs^ e) {
		Walker^ c = gcnew Walker();
		c->Dni = Int32::Parse(txtDniWalker->Text);
		c->Address = txtAddressWalker->Text;
		c->PhoneNumber = txtPhoneNumberWalker->Text;
		c->Email = txtEmailWalker->Text;
		c->Gender = rbtnMascWalker->Checked ? 'M' : 'F';
		c->Id = Int32::Parse(txtIdWalker->Text);
		c->username = txtUsernameWalker->Text;
		c->Lastname = txtLastNameWalker->Text;
		c->Firstname = txtFirstNameWalker->Text;
		c->Valoration = Int32::Parse(txtValorationWalker->Text);
		c->Experience = Int32::Parse(txtExperienceWalker->Text);
		c->Level = Int32::Parse(txtLevelWalker->Text);
		c->Warranty = cmbWarrantyWalker->Text;
		c->Salary = Double::Parse(txtSalaryWalker->Text);
		//c->Photo = array::Parse(PicturePhoto->Picture);
		c->Status = 'A';
		c->password = txtPasswordWalker->Text;
		c->District = cmbDistrictWalker->Text;

		Controller::UpdateWalker(c);
		RefreshGrid_Walker();

	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int KeeperId = Int32::Parse(txtId->Text);
		Controller::DeleteKeeper(KeeperId);
		RefreshGrid();
		ClearControls();

	}

	private: System::Void btnDeleteWalker_Click(System::Object^ sender, System::EventArgs^ e) {
		int WalkerId = Int32::Parse(txtId->Text);
		Controller::DeleteKeeper(WalkerId);
		RefreshGrid_Walker();
		ClearControls();

	}
	private: System::Void dgvKeeper_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		/*int selectedRowIndex = dgvKeeper->SelectedCells[0]->RowIndex;
		int KeeperId = Int32::Parse(dgvKeeper->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Keeper^ c = Controller::QueryKeeperById(KeeperId);


		txtDni->Text = "" + c->Dni;
		txtAddress->Text = c->Address;
		txtPhoneNumber->Text = c->PhoneNumber;
		txtEmail->Text = c->Email;
		rbtnMasc->Checked = dynamic_cast<Natural^>(c)->Gender == 'M';
		rbtnFem->Checked = dynamic_cast<Natural^>(c)->Gender == 'F';
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
		*/

		if (dgvKeeper->CurrentCell != nullptr &&
			dgvKeeper->CurrentCell->Value != nullptr &&
			dgvKeeper->CurrentCell->Value->ToString() != "") {
			int selectedrowindex = dgvKeeper->SelectedCells[0]->RowIndex;
			DataGridViewRow^ selectedRow = dgvKeeper->Rows[selectedrowindex];
			String^ a = selectedRow->Cells[0]->Value->ToString();

			int keeperId = Int32::Parse(a);
			Keeper^ keeper = Controller::QueryKeeperById(keeperId);
			//MessageBox::Show(customer->ToString()); //Polimorfismo
			if (keeper != nullptr && keeper->GetType() == Keeper::typeid) {
				
				txtDni->Text = "" + keeper->Dni;
				txtAddress->Text = keeper->Address;
				txtPhoneNumber->Text = keeper->PhoneNumber;
				txtEmail->Text = keeper->Email;
				rbtnMasc->Checked = dynamic_cast<Keeper^>(keeper)->Gender == 'M';
				rbtnFem->Checked = dynamic_cast<Keeper^>(keeper)->Gender == 'F';
				txtId->Text = "" + keeper->Id;
				txtUsername->Text = keeper->username;
				//txtLastName->Text = keeper->password;
				txtLastName->Text = dynamic_cast<Keeper^>(keeper)->Lastname;
				txtFirstName->Text = dynamic_cast<Keeper^>(keeper)->Firstname;
				txtValoration->Text = "" + keeper->Valoration;
				txtExperience->Text = "" + keeper->Experience;
				txtLevel->Text = "" + keeper->Level;
				cmbWarranty->Text =  keeper->Warranty;
				txtSalary->Text = "" + keeper->Salary;
				//txt->Text = "" + c->Photo;
				txtStatus->Text = "" + keeper->Status;
				txtPassword->Text = "" + keeper->password;
			}
		}

	}

private: System::Void dgvWalker_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	if (dgvWalker->CurrentCell != nullptr &&
		dgvWalker->CurrentCell->Value != nullptr &&
		dgvWalker->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvWalker->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvWalker ->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int walkerId = Int32::Parse(a);
		Walker^ walker = Controller::QueryWalkerById(walkerId);
		//MessageBox::Show(customer->ToString()); //Polimorfismo
		if (walker != nullptr && walker->GetType() == Walker::typeid) {

			txtDniWalker->Text = "" + walker->Dni;
			txtAddressWalker->Text = walker->Address;
			txtPhoneNumberWalker->Text = walker->PhoneNumber;
			txtEmailWalker->Text = walker->Email;
			rbtnMascWalker->Checked = dynamic_cast<Walker^>(walker)->Gender == 'M';
			rbtnFemWalker->Checked = dynamic_cast<Walker^>(walker)->Gender == 'F';
			txtIdWalker->Text = "" + walker->Id;
			txtUsernameWalker->Text = walker->username;
			//txtLastName->Text = walker->password;
			txtLastNameWalker->Text = dynamic_cast<Walker^>(walker)->Lastname;
			txtFirstNameWalker->Text = dynamic_cast<Walker^>(walker)->Firstname;
			txtValorationWalker->Text = "" + walker->Valoration;
			txtExperienceWalker->Text = "" + walker->Experience;
			txtLevelWalker->Text = "" + walker->Level;
			cmbWarrantyWalker->Text = "" + walker->Warranty;
			txtSalaryWalker->Text = "" + walker->Salary;
			//txt->Text = "" + c->Photo;
			txtStatusWalker->Text = "" + walker->Status;
			txtPasswordWalker->Text = walker->password;
		}
	}

}

		   void ClearControls() {
			   // PARA KEEPER
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
			   txtExperience->Clear();
			   txtLevel->Clear();
			   //cmbWarranty->Clear();
			   txtSalary->Clear();
			   //txt->Text = "" + c->Photo;
			   txtStatus->Clear();
			   txtPassword->Clear();
			   cmbDistrict->Text = "";
			   
			   // PARA WALKER
			   txtDniWalker->Clear();
			   txtAddressWalker->Clear();
			   txtPhoneNumberWalker->Clear();
			   txtEmailWalker->Clear();
			   //txtGender->Clear();
			   txtIdWalker->Clear();
			   txtUsernameWalker->Clear();
			   //txtLastName->Text = c->password;
			   txtLastNameWalker->Clear();
			   txtFirstNameWalker->Clear();
			   txtValorationWalker->Clear();
			   txtExperienceWalker->Clear();
			   txtLevelWalker->Clear();
			   //cmbWarranty->Clear();
			   txtSalaryWalker->Clear();
			   //txt->Text = "" + c->Photo;
			   txtStatusWalker->Clear();
			   txtPasswordWalker->Clear();
			   //CmbPosition->Clear();
			   cmbDistrictWalker->Text = "";
		   }




	

/*private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}*/
private: System::Void cuidadoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//carermaintenance^ Carermaintenance = gcnew carermaintenance();
	//Carermaintenance->MdiParent = this;
	//Carermaintenance->Show();
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

	//public: System::Void ClearControls();
	//public: System::Void RefreshGrid();


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

/*private: System::Void consultasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DisableControls();
}*/
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


private: System::Void carermaintenance_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
	RefreshGrid_Walker();
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnChangePhoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pccPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pcpPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}
}




};
}
