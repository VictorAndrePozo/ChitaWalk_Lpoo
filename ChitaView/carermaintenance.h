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
	private: System::Windows::Forms::DataGridView^ dgvKeeper;
























	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ generalToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ cuidadoresToolStripMenuItem;


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
private: System::Windows::Forms::TextBox^ txtPhoneNumberWalker;

private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ txtWarrantyWalker;

private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ txtSalaryWalker;

private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ txtExperienceWalker;

private: System::Windows::Forms::TextBox^ txtIdWalker;
private: System::Windows::Forms::TextBox^ txtLevelWalker;
private: System::Windows::Forms::TextBox^ txtDniWalker;




private: System::Windows::Forms::TextBox^ txtValorationWalker;



private: System::Windows::Forms::TextBox^ txtEmailWalker;

private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ txtAddressWalker;

private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ txtFirstNameWalker;
private: System::Windows::Forms::ComboBox^ CmbPositionWalker;


private: System::Windows::Forms::TextBox^ txtLastNameWalker;



private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ txtUsernameWalker;


private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ txtStatusWalker;

private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Button^ btnUpdateWalker;

private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Button^ btnDeleteWalker;

private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperdni;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keepername;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperlastname;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperposition;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperstatus;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keepergender;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperdirection;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperemail;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperusername;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keepervaloration;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperlevel;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperexperience;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keepersalary;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keeperwarranty;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ keepernombres;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ walker;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
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
			this->dgvKeeper = (gcnew System::Windows::Forms::DataGridView());
			this->keeperId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperdni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keepername = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperlastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperposition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperstatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keepergender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperdirection = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperemail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperusername = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keepervaloration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperlevel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperexperience = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keepersalary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keeperwarranty = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keepernombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->generalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cuidadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rbtnFem = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnMasc = (gcnew System::Windows::Forms::RadioButton());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip3 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnAddWalker = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dgvWalker = (gcnew System::Windows::Forms::DataGridView());
			this->walker = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rbtnMascWalker = (gcnew System::Windows::Forms::RadioButton());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->rbtnFemWalker = (gcnew System::Windows::Forms::RadioButton());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtPhoneNumberWalker = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->txtWarrantyWalker = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txtSalaryWalker = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtExperienceWalker = (gcnew System::Windows::Forms::TextBox());
			this->txtIdWalker = (gcnew System::Windows::Forms::TextBox());
			this->txtLevelWalker = (gcnew System::Windows::Forms::TextBox());
			this->txtDniWalker = (gcnew System::Windows::Forms::TextBox());
			this->txtValorationWalker = (gcnew System::Windows::Forms::TextBox());
			this->txtEmailWalker = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->txtAddressWalker = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->txtFirstNameWalker = (gcnew System::Windows::Forms::TextBox());
			this->CmbPositionWalker = (gcnew System::Windows::Forms::ComboBox());
			this->txtLastNameWalker = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txtUsernameWalker = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->txtStatusWalker = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->btnUpdateWalker = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteWalker = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvKeeper))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWalker))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			// picturePhoto
			// 
			this->picturePhoto->Location = System::Drawing::Point(618, 15);
			this->picturePhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->picturePhoto->Name = L"picturePhoto";
			this->picturePhoto->Size = System::Drawing::Size(179, 218);
			this->picturePhoto->TabIndex = 17;
			this->picturePhoto->TabStop = false;
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
			// CmbPosition
			// 
			this->CmbPosition->FormattingEnabled = true;
			this->CmbPosition->Location = System::Drawing::Point(441, 15);
			this->CmbPosition->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CmbPosition->Name = L"CmbPosition";
			this->CmbPosition->Size = System::Drawing::Size(155, 24);
			this->CmbPosition->TabIndex = 29;
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
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(353, 19);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(59, 16);
			this->label15->TabIndex = 31;
			this->label15->Text = L"Posición";
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
			// txtWarranty
			// 
			this->txtWarranty->Location = System::Drawing::Point(929, 175);
			this->txtWarranty->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtWarranty->Multiline = true;
			this->txtWarranty->Name = L"txtWarranty";
			this->txtWarranty->Size = System::Drawing::Size(125, 83);
			this->txtWarranty->TabIndex = 36;
			// 
			// dgvKeeper
			// 
			this->dgvKeeper->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvKeeper->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(16) {
				this->keeperId, this->keeperdni,
					this->keepername, this->keeperlastname, this->keeperposition, this->keeperstatus, this->keepergender, this->keeperdirection,
					this->keeperemail, this->keeperusername, this->keepervaloration, this->keeperlevel, this->keeperexperience, this->keepersalary,
					this->keeperwarranty, this->keepernombres
			});
			this->dgvKeeper->Location = System::Drawing::Point(14, 306);
			this->dgvKeeper->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvKeeper->Name = L"dgvKeeper";
			this->dgvKeeper->RowHeadersWidth = 51;
			this->dgvKeeper->RowTemplate->Height = 24;
			this->dgvKeeper->Size = System::Drawing::Size(1084, 278);
			this->dgvKeeper->TabIndex = 37;
			this->dgvKeeper->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &carermaintenance::dgvKeeper_CellClick);
			this->dgvKeeper->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &carermaintenance::dgvKeeper_CellContentClick);
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
			// keeperposition
			// 
			this->keeperposition->HeaderText = L"Posicion";
			this->keeperposition->MinimumWidth = 6;
			this->keeperposition->Name = L"keeperposition";
			this->keeperposition->Width = 125;
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
			// keepernombres
			// 
			this->keepernombres->HeaderText = L"Nombres";
			this->keepernombres->MinimumWidth = 6;
			this->keepernombres->Name = L"keepernombres";
			this->keepernombres->Width = 125;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(827, 268);
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->generalToolStripMenuItem,
					this->cuidadoresToolStripMenuItem
			});
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
			// cuidadoresToolStripMenuItem
			// 
			this->cuidadoresToolStripMenuItem->Name = L"cuidadoresToolStripMenuItem";
			this->cuidadoresToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->cuidadoresToolStripMenuItem->Text = L"Reporte";
			this->cuidadoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &carermaintenance::cuidadoresToolStripMenuItem_Click);
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
			this->tabControl1->Location = System::Drawing::Point(21, 43);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1121, 633);
			this->tabControl1->TabIndex = 43;
			// 
			// tabPage1
			// 
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
			this->tabPage1->Controls->Add(this->txtWarranty);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->txtSalary);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->txtExperience);
			this->tabPage1->Controls->Add(this->txtId);
			this->tabPage1->Controls->Add(this->txtLevel);
			this->tabPage1->Controls->Add(this->txtDni);
			this->tabPage1->Controls->Add(this->txtValoration);
			this->tabPage1->Controls->Add(this->txtEmail);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->txtAddress);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->txtFirstName);
			this->tabPage1->Controls->Add(this->CmbPosition);
			this->tabPage1->Controls->Add(this->txtLastName);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->txtUsername);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->txtStatus);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->picturePhoto);
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
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->btnAddWalker);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->dgvWalker);
			this->tabPage2->Controls->Add(this->rbtnMascWalker);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->rbtnFemWalker);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->txtPhoneNumberWalker);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->txtWarrantyWalker);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->txtSalaryWalker);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->txtExperienceWalker);
			this->tabPage2->Controls->Add(this->txtIdWalker);
			this->tabPage2->Controls->Add(this->txtLevelWalker);
			this->tabPage2->Controls->Add(this->txtDniWalker);
			this->tabPage2->Controls->Add(this->txtValorationWalker);
			this->tabPage2->Controls->Add(this->txtEmailWalker);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->txtAddressWalker);
			this->tabPage2->Controls->Add(this->label26);
			this->tabPage2->Controls->Add(this->txtFirstNameWalker);
			this->tabPage2->Controls->Add(this->CmbPositionWalker);
			this->tabPage2->Controls->Add(this->txtLastNameWalker);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->txtUsernameWalker);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->txtStatusWalker);
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Controls->Add(this->pictureBox1);
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
			// btnAddWalker
			// 
			this->btnAddWalker->Location = System::Drawing::Point(59, 248);
			this->btnAddWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddWalker->Name = L"btnAddWalker";
			this->btnAddWalker->Size = System::Drawing::Size(137, 46);
			this->btnAddWalker->TabIndex = 60;
			this->btnAddWalker->Text = L"Agregar";
			this->btnAddWalker->UseVisualStyleBackColor = true;
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
			this->dgvWalker->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(16) {
				this->walker, this->dataGridViewTextBoxColumn2,
					this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14,
					this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16
			});
			this->dgvWalker->Location = System::Drawing::Point(14, 309);
			this->dgvWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvWalker->Name = L"dgvWalker";
			this->dgvWalker->RowHeadersWidth = 51;
			this->dgvWalker->RowTemplate->Height = 24;
			this->dgvWalker->Size = System::Drawing::Size(1084, 278);
			this->dgvWalker->TabIndex = 77;
			// 
			// walker
			// 
			this->walker->HeaderText = L"Id";
			this->walker->MinimumWidth = 6;
			this->walker->Name = L"walker";
			this->walker->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Dni";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Nombres";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Apellidos";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Posicion";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Estado";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Género";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 125;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Dirección";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 125;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Correo";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 125;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Usuario";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 125;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Valoración";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Width = 125;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Nivel";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 125;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Experiencia";
			this->dataGridViewTextBoxColumn13->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->Width = 125;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Salario";
			this->dataGridViewTextBoxColumn14->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->Width = 125;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"Garantía";
			this->dataGridViewTextBoxColumn15->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->Width = 125;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"Nombres";
			this->dataGridViewTextBoxColumn16->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->Width = 125;
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
			// txtPhoneNumberWalker
			// 
			this->txtPhoneNumberWalker->Location = System::Drawing::Point(929, 271);
			this->txtPhoneNumberWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPhoneNumberWalker->Name = L"txtPhoneNumberWalker";
			this->txtPhoneNumberWalker->Size = System::Drawing::Size(125, 22);
			this->txtPhoneNumberWalker->TabIndex = 79;
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
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(827, 271);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(49, 16);
			this->label20->TabIndex = 78;
			this->label20->Text = L"Celular";
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
			// txtWarrantyWalker
			// 
			this->txtWarrantyWalker->Location = System::Drawing::Point(929, 178);
			this->txtWarrantyWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtWarrantyWalker->Multiline = true;
			this->txtWarrantyWalker->Name = L"txtWarrantyWalker";
			this->txtWarrantyWalker->Size = System::Drawing::Size(125, 83);
			this->txtWarrantyWalker->TabIndex = 76;
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
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(353, 22);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(59, 16);
			this->label25->TabIndex = 71;
			this->label25->Text = L"Posición";
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
			// CmbPositionWalker
			// 
			this->CmbPositionWalker->FormattingEnabled = true;
			this->CmbPositionWalker->Location = System::Drawing::Point(441, 18);
			this->CmbPositionWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CmbPositionWalker->Name = L"CmbPositionWalker";
			this->CmbPositionWalker->Size = System::Drawing::Size(155, 24);
			this->CmbPositionWalker->TabIndex = 69;
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
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(819, 185);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(58, 16);
			this->label28->TabIndex = 67;
			this->label28->Text = L"Garantía";
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
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(618, 18);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(179, 218);
			this->pictureBox1->TabIndex = 59;
			this->pictureBox1->TabStop = false;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvKeeper))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWalker))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
					"" + keeperList[i]->Dni,
						keeperList[i]->Address,
						keeperList[i]->PhoneNumber,
						keeperList[i]->Email,
						"" + keeperList[i]->Gender,
						"" + keeperList[i]->Id,
						keeperList[i]->username,
						keeperList[i]->password,
						keeperList[i]->Lastname,
						keeperList[i]->Firstname,
						"" + keeperList[i]->Valoration,
						keeperList[i]->Award,
						"" + keeperList[i]->Experience,
						"" + keeperList[i]->Level,
						"" + keeperList[i]->Warranty,
						"" + keeperList[i]->Salary,
						"" + keeperList[i]->Photo,
						"" + keeperList[i]->Status,
						"" + keeperList[i]->Position
				});
			}
		}

		void RefreshGrid_Walker() {
			List<Walker^>^ walkerList = Controller::QueryAllWalkers();
			dgvWalker->Rows->Clear();
			for (int i = 0; i < walkerList->Count; i++) {
				dgvWalker->Rows->Add(gcnew array<String^>{
					"" + walkerList[i]->Dni,
						walkerList[i]->Address,
						walkerList[i]->PhoneNumber,
						walkerList[i]->Email,
						"" + walkerList[i]->Gender,
						"" + walkerList[i]->Id,
						walkerList[i]->username,
						walkerList[i]->password,
						walkerList[i]->Lastname,
						walkerList[i]->Firstname,
						"" + walkerList[i]->Valoration,
						walkerList[i]->Award,
						"" + walkerList[i]->Experience,
						"" + walkerList[i]->Level,
						"" + walkerList[i]->Warranty,
						"" + walkerList[i]->Salary,
						"" + walkerList[i]->Photo,
						"" + walkerList[i]->Status,
						"" + walkerList[i]->Position
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
		c->Warranty = Int32::Parse(txtWarranty->Text);
		c->Salary = Double::Parse(txtSalary->Text);
		//c->Photo = array::Parse(PicturePhoto->Picture);
		c->Status = 'A';
		c->Position = CmbPosition->Text;

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
		 c->Warranty = Int32::Parse(txtWarrantyWalker->Text);
		 c->Salary = Double::Parse(txtSalaryWalker->Text);
		 //c->Photo = array::Parse(PicturePhoto->Picture);
		 c->Status = 'A';
		 c->Position = CmbPositionWalker->Text;

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
		c->Warranty = Int32::Parse(txtWarranty->Text);
		c->Salary = Double::Parse(txtSalary->Text);
		//c->Photo = array::Parse(PicturePhoto->Picture);
		c->Status = 'A';
		c->Position = CmbPosition->Text;

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
		c->Warranty = Int32::Parse(txtWarrantyWalker->Text);
		c->Salary = Double::Parse(txtSalaryWalker->Text);
		//c->Photo = array::Parse(PicturePhoto->Picture);
		c->Status = 'A';
		c->Position = CmbPositionWalker->Text;

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
				txtWarranty->Text = "" + keeper->Warranty;
				txtSalary->Text = "" + keeper->Salary;
				//txt->Text = "" + c->Photo;
				txtStatus->Text = "" + keeper->Status;
				CmbPosition->Text = "" + keeper->Position;
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
			   txtExperience->Clear();
			   txtLevel->Clear();
			   txtWarranty->Clear();
			   txtSalary->Clear();
			   //txt->Text = "" + c->Photo;
			   txtStatus->Clear();
			   //CmbPosition->Clear();

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

private: System::Void dgvKeeper_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void carermaintenance_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
}
};
}
