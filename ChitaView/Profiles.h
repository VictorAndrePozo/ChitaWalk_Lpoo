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
	/// Resumen de Profiles
	/// </summary>
	public ref class Profiles : public System::Windows::Forms::Form
	{
	public:
		Profiles(void)
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
		~Profiles()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ txtUserPetOwner;
	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::ComboBox^ cmbWarranty;


	private: System::Windows::Forms::Button^ btnSearch;

	private: System::Windows::Forms::Label^ labelId;
	private: System::Windows::Forms::DataGridView^ dgvKeeper1;

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
	private: System::Windows::Forms::RadioButton^ rbtnMasc;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ rbtnFem;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtSalary;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtExperience;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtLevel;
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
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ComboBox^ cmbWarrantyWalker;


	private: System::Windows::Forms::TextBox^ txtPhoneNumberWalker;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label28;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::DataGridView^ dgvWalker1;

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

	private: System::Windows::Forms::Label^ label30;

	private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Button^ btnSearchWalker;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::Button^ btnSearchPetOwner;
private: System::Windows::Forms::DataGridView^ dgvPetOwner1;


private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdColumna;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ UsuarioColumna;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreColumna;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoColumna;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DniColumna;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CorreoColumna;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CumpleanosColumna;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DireccionColumna;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ GeneroColumna;
private: System::Windows::Forms::Label^ CumpleanosPO;
private: System::Windows::Forms::DateTimePicker^ dtpBirthdayPetOwner;
private: System::Windows::Forms::TextBox^ txtPhoneNumberPetOwner;


private: System::Windows::Forms::Label^ CelularPO;
private: System::Windows::Forms::RadioButton^ radioMalePetOwner;

private: System::Windows::Forms::RadioButton^ radioFemalePetOwner;
private: System::Windows::Forms::TextBox^ txtUserPetOwnerr;





private: System::Windows::Forms::TextBox^ txtEmailPetOwner;

private: System::Windows::Forms::TextBox^ txtApellidoPetOwner;

private: System::Windows::Forms::TextBox^ txtFirstnamePetOwner;
private: System::Windows::Forms::TextBox^ txtDirectionPetOwner;


private: System::Windows::Forms::TextBox^ txtDniPetOwner;
private: System::Windows::Forms::TextBox^ txtIdPetOwner;


private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ NombrePO;
private: System::Windows::Forms::Label^ UsuarioPO;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ CorreoPO;
private: System::Windows::Forms::Label^ DireccionPO;
private: System::Windows::Forms::Label^ DniPO;
private: System::Windows::Forms::Label^ IdPO;
private: System::Windows::Forms::ComboBox^ cbPetSpecies;
private: System::Windows::Forms::TextBox^ txtPetId;
private: System::Windows::Forms::DataGridView^ dgvPetList1;








private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::ComboBox^ cbPetConduct;
private: System::Windows::Forms::ComboBox^ cbPetVaccines;
private: System::Windows::Forms::ComboBox^ cbPetKind;
private: System::Windows::Forms::TextBox^ txtPetAge;
private: System::Windows::Forms::TextBox^ txtPetName;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Button^ btnSearchPet;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPetId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPetName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPedKind;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPetSpecies;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPetAge;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPetConduct;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPetVaccines;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ generalToolStripMenuItem;
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
			this->txtUserPetOwner = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->cmbWarranty = (gcnew System::Windows::Forms::ComboBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->labelId = (gcnew System::Windows::Forms::Label());
			this->dgvKeeper1 = (gcnew System::Windows::Forms::DataGridView());
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
			this->rbtnMasc = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rbtnFem = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtSalary = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtExperience = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtLevel = (gcnew System::Windows::Forms::TextBox());
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
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnSearchWalker = (gcnew System::Windows::Forms::Button());
			this->cmbWarrantyWalker = (gcnew System::Windows::Forms::ComboBox());
			this->txtPhoneNumberWalker = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dgvWalker1 = (gcnew System::Windows::Forms::DataGridView());
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
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->btnSearchPetOwner = (gcnew System::Windows::Forms::Button());
			this->dgvPetOwner1 = (gcnew System::Windows::Forms::DataGridView());
			this->IdColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UsuarioColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DniColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CorreoColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CumpleanosColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DireccionColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GeneroColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CumpleanosPO = (gcnew System::Windows::Forms::Label());
			this->dtpBirthdayPetOwner = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtPhoneNumberPetOwner = (gcnew System::Windows::Forms::TextBox());
			this->CelularPO = (gcnew System::Windows::Forms::Label());
			this->radioMalePetOwner = (gcnew System::Windows::Forms::RadioButton());
			this->radioFemalePetOwner = (gcnew System::Windows::Forms::RadioButton());
			this->txtUserPetOwnerr = (gcnew System::Windows::Forms::TextBox());
			this->txtEmailPetOwner = (gcnew System::Windows::Forms::TextBox());
			this->txtApellidoPetOwner = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstnamePetOwner = (gcnew System::Windows::Forms::TextBox());
			this->txtDirectionPetOwner = (gcnew System::Windows::Forms::TextBox());
			this->txtDniPetOwner = (gcnew System::Windows::Forms::TextBox());
			this->txtIdPetOwner = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->NombrePO = (gcnew System::Windows::Forms::Label());
			this->UsuarioPO = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->CorreoPO = (gcnew System::Windows::Forms::Label());
			this->DireccionPO = (gcnew System::Windows::Forms::Label());
			this->DniPO = (gcnew System::Windows::Forms::Label());
			this->IdPO = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->btnSearchPet = (gcnew System::Windows::Forms::Button());
			this->cbPetSpecies = (gcnew System::Windows::Forms::ComboBox());
			this->txtPetId = (gcnew System::Windows::Forms::TextBox());
			this->dgvPetList1 = (gcnew System::Windows::Forms::DataGridView());
			this->dgvPetId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPetName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPedKind = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPetSpecies = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPetAge = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPetConduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPetVaccines = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->cbPetConduct = (gcnew System::Windows::Forms::ComboBox());
			this->cbPetVaccines = (gcnew System::Windows::Forms::ComboBox());
			this->cbPetKind = (gcnew System::Windows::Forms::ComboBox());
			this->txtPetAge = (gcnew System::Windows::Forms::TextBox());
			this->txtPetName = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->generalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtUserPetOwner->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvKeeper1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWalker1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPetOwner1))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPetList1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtUserPetOwner
			// 
			this->txtUserPetOwner->Controls->Add(this->tabPage1);
			this->txtUserPetOwner->Controls->Add(this->tabPage2);
			this->txtUserPetOwner->Controls->Add(this->tabPage3);
			this->txtUserPetOwner->Controls->Add(this->tabPage4);
			this->txtUserPetOwner->Location = System::Drawing::Point(23, 28);
			this->txtUserPetOwner->Name = L"txtUserPetOwner";
			this->txtUserPetOwner->SelectedIndex = 0;
			this->txtUserPetOwner->Size = System::Drawing::Size(1121, 615);
			this->txtUserPetOwner->TabIndex = 44;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->cmbWarranty);
			this->tabPage1->Controls->Add(this->btnSearch);
			this->tabPage1->Controls->Add(this->labelId);
			this->tabPage1->Controls->Add(this->dgvKeeper1);
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
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1113, 586);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Cuidadores";
			this->tabPage1->UseVisualStyleBackColor = true;
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
			this->cmbWarranty->Location = System::Drawing::Point(752, 176);
			this->cmbWarranty->Name = L"cmbWarranty";
			this->cmbWarranty->Size = System::Drawing::Size(125, 24);
			this->cmbWarranty->TabIndex = 45;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(931, 108);
			this->btnSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(137, 46);
			this->btnSearch->TabIndex = 18;
			this->btnSearch->Text = L"Buscar por ID";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &Profiles::btnSearch_Click);
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
			// dgvKeeper1
			// 
			this->dgvKeeper1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvKeeper1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(16) {
				this->keeperId,
					this->keeperdni, this->keepername, this->keeperlastname, this->keeperstatus, this->keepergender, this->keeperdirection, this->keeperemail,
					this->keeperusername, this->keepervaloration, this->keeperlevel, this->keeperPassword, this->keeperexperience, this->keepersalary,
					this->keeperwarranty, this->keeperPhoneNumber
			});
			this->dgvKeeper1->Location = System::Drawing::Point(14, 255);
			this->dgvKeeper1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvKeeper1->Name = L"dgvKeeper1";
			this->dgvKeeper1->RowHeadersWidth = 51;
			this->dgvKeeper1->RowTemplate->Height = 24;
			this->dgvKeeper1->Size = System::Drawing::Size(1084, 318);
			this->dgvKeeper1->TabIndex = 37;
			this->dgvKeeper1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Profiles::dgvKeeper1_CellClick);
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Dni";
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Dirección";
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(752, 208);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(125, 22);
			this->txtPhoneNumber->TabIndex = 39;
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
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(642, 211);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 16);
			this->label10->TabIndex = 38;
			this->label10->Text = L"Celular";
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
			// txtSalary
			// 
			this->txtSalary->Location = System::Drawing::Point(752, 110);
			this->txtSalary->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSalary->Multiline = true;
			this->txtSalary->Name = L"txtSalary";
			this->txtSalary->Size = System::Drawing::Size(125, 52);
			this->txtSalary->TabIndex = 35;
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
			// txtExperience
			// 
			this->txtExperience->Location = System::Drawing::Point(752, 79);
			this->txtExperience->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtExperience->Name = L"txtExperience";
			this->txtExperience->Size = System::Drawing::Size(125, 22);
			this->txtExperience->TabIndex = 34;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(143, 19);
			this->txtId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(75, 22);
			this->txtId->TabIndex = 8;
			// 
			// txtLevel
			// 
			this->txtLevel->Location = System::Drawing::Point(752, 47);
			this->txtLevel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLevel->Name = L"txtLevel";
			this->txtLevel->Size = System::Drawing::Size(125, 22);
			this->txtLevel->TabIndex = 33;
			// 
			// txtDni
			// 
			this->txtDni->Location = System::Drawing::Point(143, 51);
			this->txtDni->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDni->Name = L"txtDni";
			this->txtDni->Size = System::Drawing::Size(161, 22);
			this->txtDni->TabIndex = 9;
			// 
			// txtValoration
			// 
			this->txtValoration->Location = System::Drawing::Point(752, 15);
			this->txtValoration->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtValoration->Name = L"txtValoration";
			this->txtValoration->Size = System::Drawing::Size(125, 22);
			this->txtValoration->TabIndex = 32;
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
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(353, 214);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(50, 16);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Estado";
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
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(642, 123);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 16);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Salario";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(143, 208);
			this->txtUsername->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(157, 22);
			this->txtUsername->TabIndex = 15;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(642, 176);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 16);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Garantía";
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(435, 208);
			this->txtStatus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(161, 22);
			this->txtStatus->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(642, 83);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 16);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Experiencia";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(642, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 16);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Valoración";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(642, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 16);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Nivel";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->btnSearchWalker);
			this->tabPage2->Controls->Add(this->cmbWarrantyWalker);
			this->tabPage2->Controls->Add(this->txtPhoneNumberWalker);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->dgvWalker1);
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
			this->tabPage2->Controls->Add(this->label30);
			this->tabPage2->Controls->Add(this->label31);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1113, 586);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Paseadores";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnSearchWalker
			// 
			this->btnSearchWalker->Location = System::Drawing::Point(925, 99);
			this->btnSearchWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSearchWalker->Name = L"btnSearchWalker";
			this->btnSearchWalker->Size = System::Drawing::Size(137, 46);
			this->btnSearchWalker->TabIndex = 88;
			this->btnSearchWalker->Text = L"Buscar por ID";
			this->btnSearchWalker->UseVisualStyleBackColor = true;
			this->btnSearchWalker->Click += gcnew System::EventHandler(this, &Profiles::btnSearchWalker_Click);
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
			this->cmbWarrantyWalker->Location = System::Drawing::Point(745, 182);
			this->cmbWarrantyWalker->Name = L"cmbWarrantyWalker";
			this->cmbWarrantyWalker->Size = System::Drawing::Size(125, 24);
			this->cmbWarrantyWalker->TabIndex = 87;
			// 
			// txtPhoneNumberWalker
			// 
			this->txtPhoneNumberWalker->Location = System::Drawing::Point(745, 214);
			this->txtPhoneNumberWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPhoneNumberWalker->Name = L"txtPhoneNumberWalker";
			this->txtPhoneNumberWalker->Size = System::Drawing::Size(125, 22);
			this->txtPhoneNumberWalker->TabIndex = 84;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(636, 220);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(49, 16);
			this->label25->TabIndex = 83;
			this->label25->Text = L"Celular";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(635, 182);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(58, 16);
			this->label28->TabIndex = 82;
			this->label28->Text = L"Garantía";
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
			// dgvWalker1
			// 
			this->dgvWalker1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvWalker1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(16) {
				this->walkerId,
					this->walkerDocNumber, this->walkerFirstname, this->walkerLastName, this->walkerStatus, this->walkerGender, this->walkerAddress,
					this->walkerEmail, this->walkerUsername, this->walkerValoration, this->walkerLevel, this->walkerExperience, this->walkerSalary,
					this->walkerWarranty, this->walkerPhoneNumber, this->walkerPassword
			});
			this->dgvWalker1->Location = System::Drawing::Point(14, 257);
			this->dgvWalker1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvWalker1->Name = L"dgvWalker1";
			this->dgvWalker1->RowHeadersWidth = 51;
			this->dgvWalker1->RowTemplate->Height = 24;
			this->dgvWalker1->Size = System::Drawing::Size(1084, 312);
			this->dgvWalker1->TabIndex = 77;
			this->dgvWalker1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Profiles::dgvWalker1_CellClick);
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
			this->txtSalaryWalker->Location = System::Drawing::Point(745, 111);
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
			this->txtExperienceWalker->Location = System::Drawing::Point(745, 80);
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
			this->txtLevelWalker->Location = System::Drawing::Point(745, 48);
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
			this->txtValorationWalker->Location = System::Drawing::Point(745, 16);
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
			this->label27->Location = System::Drawing::Point(635, 124);
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
			this->label29->Location = System::Drawing::Point(635, 84);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(78, 16);
			this->label29->TabIndex = 66;
			this->label29->Text = L"Experiencia";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(635, 20);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(72, 16);
			this->label30->TabIndex = 65;
			this->label30->Text = L"Valoración";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(635, 51);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(38, 16);
			this->label31->TabIndex = 64;
			this->label31->Text = L"Nivel";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->btnSearchPetOwner);
			this->tabPage3->Controls->Add(this->dgvPetOwner1);
			this->tabPage3->Controls->Add(this->CumpleanosPO);
			this->tabPage3->Controls->Add(this->dtpBirthdayPetOwner);
			this->tabPage3->Controls->Add(this->txtPhoneNumberPetOwner);
			this->tabPage3->Controls->Add(this->CelularPO);
			this->tabPage3->Controls->Add(this->radioMalePetOwner);
			this->tabPage3->Controls->Add(this->radioFemalePetOwner);
			this->tabPage3->Controls->Add(this->txtUserPetOwnerr);
			this->tabPage3->Controls->Add(this->txtEmailPetOwner);
			this->tabPage3->Controls->Add(this->txtApellidoPetOwner);
			this->tabPage3->Controls->Add(this->txtFirstnamePetOwner);
			this->tabPage3->Controls->Add(this->txtDirectionPetOwner);
			this->tabPage3->Controls->Add(this->txtDniPetOwner);
			this->tabPage3->Controls->Add(this->txtIdPetOwner);
			this->tabPage3->Controls->Add(this->label32);
			this->tabPage3->Controls->Add(this->NombrePO);
			this->tabPage3->Controls->Add(this->UsuarioPO);
			this->tabPage3->Controls->Add(this->label33);
			this->tabPage3->Controls->Add(this->CorreoPO);
			this->tabPage3->Controls->Add(this->DireccionPO);
			this->tabPage3->Controls->Add(this->DniPO);
			this->tabPage3->Controls->Add(this->IdPO);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1113, 586);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Dueños";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// btnSearchPetOwner
			// 
			this->btnSearchPetOwner->Location = System::Drawing::Point(929, 99);
			this->btnSearchPetOwner->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSearchPetOwner->Name = L"btnSearchPetOwner";
			this->btnSearchPetOwner->Size = System::Drawing::Size(137, 46);
			this->btnSearchPetOwner->TabIndex = 91;
			this->btnSearchPetOwner->Text = L"Buscar por ID";
			this->btnSearchPetOwner->UseVisualStyleBackColor = true;
			this->btnSearchPetOwner->Click += gcnew System::EventHandler(this, &Profiles::btnSearchPetOwner_Click);
			// 
			// dgvPetOwner1
			// 
			this->dgvPetOwner1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPetOwner1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->IdColumna,
					this->UsuarioColumna, this->NombreColumna, this->ApellidoColumna, this->DniColumna, this->CorreoColumna, this->CumpleanosColumna,
					this->DireccionColumna, this->GeneroColumna
			});
			this->dgvPetOwner1->Location = System::Drawing::Point(16, 246);
			this->dgvPetOwner1->Margin = System::Windows::Forms::Padding(4);
			this->dgvPetOwner1->Name = L"dgvPetOwner1";
			this->dgvPetOwner1->RowHeadersWidth = 51;
			this->dgvPetOwner1->Size = System::Drawing::Size(1080, 324);
			this->dgvPetOwner1->TabIndex = 90;
			this->dgvPetOwner1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Profiles::dgvPetOwner1_CellClick);
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
			// CumpleanosPO
			// 
			this->CumpleanosPO->AutoSize = true;
			this->CumpleanosPO->Location = System::Drawing::Point(33, 169);
			this->CumpleanosPO->Name = L"CumpleanosPO";
			this->CumpleanosPO->Size = System::Drawing::Size(96, 16);
			this->CumpleanosPO->TabIndex = 89;
			this->CumpleanosPO->Text = L"Cumpleaños(*)";
			// 
			// dtpBirthdayPetOwner
			// 
			this->dtpBirthdayPetOwner->Location = System::Drawing::Point(175, 161);
			this->dtpBirthdayPetOwner->Margin = System::Windows::Forms::Padding(4);
			this->dtpBirthdayPetOwner->Name = L"dtpBirthdayPetOwner";
			this->dtpBirthdayPetOwner->Size = System::Drawing::Size(251, 22);
			this->dtpBirthdayPetOwner->TabIndex = 88;
			// 
			// txtPhoneNumberPetOwner
			// 
			this->txtPhoneNumberPetOwner->Location = System::Drawing::Point(175, 205);
			this->txtPhoneNumberPetOwner->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPhoneNumberPetOwner->Name = L"txtPhoneNumberPetOwner";
			this->txtPhoneNumberPetOwner->Size = System::Drawing::Size(251, 22);
			this->txtPhoneNumberPetOwner->TabIndex = 87;
			// 
			// CelularPO
			// 
			this->CelularPO->AutoSize = true;
			this->CelularPO->Location = System::Drawing::Point(32, 208);
			this->CelularPO->Name = L"CelularPO";
			this->CelularPO->Size = System::Drawing::Size(62, 16);
			this->CelularPO->TabIndex = 86;
			this->CelularPO->Text = L"Celular(*)";
			// 
			// radioMalePetOwner
			// 
			this->radioMalePetOwner->AutoSize = true;
			this->radioMalePetOwner->Location = System::Drawing::Point(777, 20);
			this->radioMalePetOwner->Margin = System::Windows::Forms::Padding(4);
			this->radioMalePetOwner->Name = L"radioMalePetOwner";
			this->radioMalePetOwner->Size = System::Drawing::Size(77, 20);
			this->radioMalePetOwner->TabIndex = 85;
			this->radioMalePetOwner->TabStop = true;
			this->radioMalePetOwner->Text = L"Hombre";
			this->radioMalePetOwner->UseVisualStyleBackColor = true;
			// 
			// radioFemalePetOwner
			// 
			this->radioFemalePetOwner->AutoSize = true;
			this->radioFemalePetOwner->Location = System::Drawing::Point(643, 20);
			this->radioFemalePetOwner->Margin = System::Windows::Forms::Padding(4);
			this->radioFemalePetOwner->Name = L"radioFemalePetOwner";
			this->radioFemalePetOwner->Size = System::Drawing::Size(61, 20);
			this->radioFemalePetOwner->TabIndex = 84;
			this->radioFemalePetOwner->TabStop = true;
			this->radioFemalePetOwner->Text = L"Mujer";
			this->radioFemalePetOwner->UseVisualStyleBackColor = true;
			// 
			// txtUserPetOwnerr
			// 
			this->txtUserPetOwnerr->Location = System::Drawing::Point(175, 19);
			this->txtUserPetOwnerr->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUserPetOwnerr->Name = L"txtUserPetOwnerr";
			this->txtUserPetOwnerr->Size = System::Drawing::Size(251, 22);
			this->txtUserPetOwnerr->TabIndex = 81;
			// 
			// txtEmailPetOwner
			// 
			this->txtEmailPetOwner->Location = System::Drawing::Point(635, 190);
			this->txtEmailPetOwner->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtEmailPetOwner->Name = L"txtEmailPetOwner";
			this->txtEmailPetOwner->Size = System::Drawing::Size(251, 22);
			this->txtEmailPetOwner->TabIndex = 80;
			// 
			// txtApellidoPetOwner
			// 
			this->txtApellidoPetOwner->Location = System::Drawing::Point(175, 131);
			this->txtApellidoPetOwner->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtApellidoPetOwner->Name = L"txtApellidoPetOwner";
			this->txtApellidoPetOwner->Size = System::Drawing::Size(251, 22);
			this->txtApellidoPetOwner->TabIndex = 79;
			// 
			// txtFirstnamePetOwner
			// 
			this->txtFirstnamePetOwner->Location = System::Drawing::Point(175, 95);
			this->txtFirstnamePetOwner->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtFirstnamePetOwner->Name = L"txtFirstnamePetOwner";
			this->txtFirstnamePetOwner->Size = System::Drawing::Size(251, 22);
			this->txtFirstnamePetOwner->TabIndex = 78;
			// 
			// txtDirectionPetOwner
			// 
			this->txtDirectionPetOwner->Location = System::Drawing::Point(635, 116);
			this->txtDirectionPetOwner->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDirectionPetOwner->Multiline = true;
			this->txtDirectionPetOwner->Name = L"txtDirectionPetOwner";
			this->txtDirectionPetOwner->Size = System::Drawing::Size(251, 68);
			this->txtDirectionPetOwner->TabIndex = 77;
			// 
			// txtDniPetOwner
			// 
			this->txtDniPetOwner->Location = System::Drawing::Point(635, 53);
			this->txtDniPetOwner->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDniPetOwner->Name = L"txtDniPetOwner";
			this->txtDniPetOwner->Size = System::Drawing::Size(251, 22);
			this->txtDniPetOwner->TabIndex = 76;
			// 
			// txtIdPetOwner
			// 
			this->txtIdPetOwner->Location = System::Drawing::Point(635, 86);
			this->txtIdPetOwner->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIdPetOwner->Name = L"txtIdPetOwner";
			this->txtIdPetOwner->Size = System::Drawing::Size(251, 22);
			this->txtIdPetOwner->TabIndex = 75;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(32, 131);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(77, 16);
			this->label32->TabIndex = 74;
			this->label32->Text = L"Apellidos(*)";
			// 
			// NombrePO
			// 
			this->NombrePO->AutoSize = true;
			this->NombrePO->Location = System::Drawing::Point(32, 99);
			this->NombrePO->Name = L"NombrePO";
			this->NombrePO->Size = System::Drawing::Size(76, 16);
			this->NombrePO->TabIndex = 73;
			this->NombrePO->Text = L"Nombres(*)";
			// 
			// UsuarioPO
			// 
			this->UsuarioPO->AutoSize = true;
			this->UsuarioPO->Location = System::Drawing::Point(32, 22);
			this->UsuarioPO->Name = L"UsuarioPO";
			this->UsuarioPO->Size = System::Drawing::Size(67, 16);
			this->UsuarioPO->TabIndex = 72;
			this->UsuarioPO->Text = L"Usuario(*)";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(492, 20);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(65, 16);
			this->label33->TabIndex = 71;
			this->label33->Text = L"Género(*)";
			// 
			// CorreoPO
			// 
			this->CorreoPO->AutoSize = true;
			this->CorreoPO->Location = System::Drawing::Point(492, 190);
			this->CorreoPO->Name = L"CorreoPO";
			this->CorreoPO->Size = System::Drawing::Size(61, 16);
			this->CorreoPO->TabIndex = 70;
			this->CorreoPO->Text = L"Correo(*)";
			// 
			// DireccionPO
			// 
			this->DireccionPO->AutoSize = true;
			this->DireccionPO->Location = System::Drawing::Point(492, 128);
			this->DireccionPO->Name = L"DireccionPO";
			this->DireccionPO->Size = System::Drawing::Size(77, 16);
			this->DireccionPO->TabIndex = 69;
			this->DireccionPO->Text = L"Dirección(*)";
			// 
			// DniPO
			// 
			this->DniPO->AutoSize = true;
			this->DniPO->Location = System::Drawing::Point(492, 53);
			this->DniPO->Name = L"DniPO";
			this->DniPO->Size = System::Drawing::Size(40, 16);
			this->DniPO->TabIndex = 68;
			this->DniPO->Text = L"Dni(*)";
			// 
			// IdPO
			// 
			this->IdPO->AutoSize = true;
			this->IdPO->Location = System::Drawing::Point(492, 86);
			this->IdPO->Name = L"IdPO";
			this->IdPO->Size = System::Drawing::Size(31, 16);
			this->IdPO->TabIndex = 67;
			this->IdPO->Text = L"Id(*)";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->btnSearchPet);
			this->tabPage4->Controls->Add(this->cbPetSpecies);
			this->tabPage4->Controls->Add(this->txtPetId);
			this->tabPage4->Controls->Add(this->dgvPetList1);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->label34);
			this->tabPage4->Controls->Add(this->cbPetConduct);
			this->tabPage4->Controls->Add(this->cbPetVaccines);
			this->tabPage4->Controls->Add(this->cbPetKind);
			this->tabPage4->Controls->Add(this->txtPetAge);
			this->tabPage4->Controls->Add(this->txtPetName);
			this->tabPage4->Controls->Add(this->label35);
			this->tabPage4->Controls->Add(this->label36);
			this->tabPage4->Controls->Add(this->label37);
			this->tabPage4->Controls->Add(this->label38);
			this->tabPage4->Controls->Add(this->label39);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1113, 586);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Mascotas";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// btnSearchPet
			// 
			this->btnSearchPet->Location = System::Drawing::Point(921, 69);
			this->btnSearchPet->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSearchPet->Name = L"btnSearchPet";
			this->btnSearchPet->Size = System::Drawing::Size(137, 46);
			this->btnSearchPet->TabIndex = 92;
			this->btnSearchPet->Text = L"Buscar por ID";
			this->btnSearchPet->UseVisualStyleBackColor = true;
			this->btnSearchPet->Click += gcnew System::EventHandler(this, &Profiles::btnSearchPet_Click);
			// 
			// cbPetSpecies
			// 
			this->cbPetSpecies->FormattingEnabled = true;
			this->cbPetSpecies->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Doméstico", L"Exótico" });
			this->cbPetSpecies->Location = System::Drawing::Point(132, 131);
			this->cbPetSpecies->Margin = System::Windows::Forms::Padding(4);
			this->cbPetSpecies->Name = L"cbPetSpecies";
			this->cbPetSpecies->Size = System::Drawing::Size(177, 24);
			this->cbPetSpecies->TabIndex = 53;
			// 
			// txtPetId
			// 
			this->txtPetId->Location = System::Drawing::Point(132, 19);
			this->txtPetId->Margin = System::Windows::Forms::Padding(4);
			this->txtPetId->Name = L"txtPetId";
			this->txtPetId->Size = System::Drawing::Size(303, 22);
			this->txtPetId->TabIndex = 51;
			// 
			// dgvPetList1
			// 
			this->dgvPetList1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPetList1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dgvPetId,
					this->dgvPetName, this->dgvPedKind, this->dgvPetSpecies, this->dgvPetAge, this->dgvPetConduct, this->dgvPetVaccines
			});
			this->dgvPetList1->Location = System::Drawing::Point(14, 190);
			this->dgvPetList1->Margin = System::Windows::Forms::Padding(4);
			this->dgvPetList1->Name = L"dgvPetList1";
			this->dgvPetList1->RowHeadersWidth = 51;
			this->dgvPetList1->Size = System::Drawing::Size(1083, 380);
			this->dgvPetList1->TabIndex = 50;
			this->dgvPetList1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Profiles::dgvPetList1_CellClick);
			// 
			// dgvPetId
			// 
			this->dgvPetId->HeaderText = L"Id";
			this->dgvPetId->MinimumWidth = 6;
			this->dgvPetId->Name = L"dgvPetId";
			this->dgvPetId->Width = 90;
			// 
			// dgvPetName
			// 
			this->dgvPetName->HeaderText = L"Nombre";
			this->dgvPetName->MinimumWidth = 6;
			this->dgvPetName->Name = L"dgvPetName";
			this->dgvPetName->Width = 180;
			// 
			// dgvPedKind
			// 
			this->dgvPedKind->HeaderText = L"Tipo";
			this->dgvPedKind->MinimumWidth = 6;
			this->dgvPedKind->Name = L"dgvPedKind";
			this->dgvPedKind->Width = 165;
			// 
			// dgvPetSpecies
			// 
			this->dgvPetSpecies->HeaderText = L"Especie";
			this->dgvPetSpecies->MinimumWidth = 6;
			this->dgvPetSpecies->Name = L"dgvPetSpecies";
			this->dgvPetSpecies->Width = 165;
			// 
			// dgvPetAge
			// 
			this->dgvPetAge->HeaderText = L"Edad";
			this->dgvPetAge->MinimumWidth = 6;
			this->dgvPetAge->Name = L"dgvPetAge";
			this->dgvPetAge->Width = 105;
			// 
			// dgvPetConduct
			// 
			this->dgvPetConduct->HeaderText = L"Conducta";
			this->dgvPetConduct->MinimumWidth = 6;
			this->dgvPetConduct->Name = L"dgvPetConduct";
			this->dgvPetConduct->Width = 165;
			// 
			// dgvPetVaccines
			// 
			this->dgvPetVaccines->HeaderText = L"Vacunado";
			this->dgvPetVaccines->MinimumWidth = 6;
			this->dgvPetVaccines->Name = L"dgvPetVaccines";
			this->dgvPetVaccines->Width = 165;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(50, 22);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(21, 16);
			this->label20->TabIndex = 48;
			this->label20->Text = L"Id:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(481, 22);
			this->label34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(67, 16);
			this->label34->TabIndex = 47;
			this->label34->Text = L"Conducta:";
			// 
			// cbPetConduct
			// 
			this->cbPetConduct->FormattingEnabled = true;
			this->cbPetConduct->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Juguetón", L"Tranquilo", L"Hiperactivo", L"Agresivo" });
			this->cbPetConduct->Location = System::Drawing::Point(563, 18);
			this->cbPetConduct->Margin = System::Windows::Forms::Padding(4);
			this->cbPetConduct->Name = L"cbPetConduct";
			this->cbPetConduct->Size = System::Drawing::Size(303, 24);
			this->cbPetConduct->TabIndex = 46;
			// 
			// cbPetVaccines
			// 
			this->cbPetVaccines->FormattingEnabled = true;
			this->cbPetVaccines->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No", L"Sí" });
			this->cbPetVaccines->Location = System::Drawing::Point(717, 56);
			this->cbPetVaccines->Margin = System::Windows::Forms::Padding(4);
			this->cbPetVaccines->Name = L"cbPetVaccines";
			this->cbPetVaccines->Size = System::Drawing::Size(149, 24);
			this->cbPetVaccines->TabIndex = 45;
			// 
			// cbPetKind
			// 
			this->cbPetKind->FormattingEnabled = true;
			this->cbPetKind->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Doméstico", L"Exótico" });
			this->cbPetKind->Location = System::Drawing::Point(176, 91);
			this->cbPetKind->Margin = System::Windows::Forms::Padding(4);
			this->cbPetKind->Name = L"cbPetKind";
			this->cbPetKind->Size = System::Drawing::Size(259, 24);
			this->cbPetKind->TabIndex = 44;
			// 
			// txtPetAge
			// 
			this->txtPetAge->Location = System::Drawing::Point(378, 133);
			this->txtPetAge->Margin = System::Windows::Forms::Padding(4);
			this->txtPetAge->Name = L"txtPetAge";
			this->txtPetAge->Size = System::Drawing::Size(57, 22);
			this->txtPetAge->TabIndex = 43;
			// 
			// txtPetName
			// 
			this->txtPetName->Location = System::Drawing::Point(132, 54);
			this->txtPetName->Margin = System::Windows::Forms::Padding(4);
			this->txtPetName->Name = L"txtPetName";
			this->txtPetName->Size = System::Drawing::Size(303, 22);
			this->txtPetName->TabIndex = 42;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(481, 60);
			this->label35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(203, 16);
			this->label35->TabIndex = 38;
			this->label35->Text = L"¿Cuenta con todas sus vacunas\?";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(50, 136);
			this->label36->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(60, 16);
			this->label36->TabIndex = 37;
			this->label36->Text = L"Especie:";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(50, 95);
			this->label37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(112, 16);
			this->label37->TabIndex = 36;
			this->label37->Text = L"Tipo de mascota:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(319, 136);
			this->label38->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(43, 16);
			this->label38->TabIndex = 35;
			this->label38->Text = L"Edad:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(50, 58);
			this->label39->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(59, 16);
			this->label39->TabIndex = 34;
			this->label39->Text = L"Nombre:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->generalToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1156, 28);
			this->menuStrip1->TabIndex = 45;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// generalToolStripMenuItem
			// 
			this->generalToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->generalToolStripMenuItem->Name = L"generalToolStripMenuItem";
			this->generalToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->generalToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Profiles::salirToolStripMenuItem_Click);
			// 
			// Profiles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1156, 655);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->txtUserPetOwner);
			this->Name = L"Profiles";
			this->Text = L"Profiles";
			this->Load += gcnew System::EventHandler(this, &Profiles::Profiles_Load);
			this->txtUserPetOwner->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvKeeper1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWalker1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPetOwner1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPetList1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
	void RefreshGrid() {
		List<Keeper^>^ keeperList = Controller::QueryAllKeepers();
		dgvKeeper1->Rows->Clear();
		for (int i = 0; i < keeperList->Count; i++) {
			dgvKeeper1->Rows->Add(gcnew array<String^>{
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
					"" + keeperList[i]->password
					//keeperList[i]->Award,
					//"" + keeperList[i]->Photo,
			});
		}
	}
	void RefreshGrid_Walker() {
		List<Walker^>^ walkerList = Controller::QueryAllWalkers();
		dgvWalker1->Rows->Clear();
		for (int i = 0; i < walkerList->Count; i++) {
			dgvWalker1->Rows->Add(gcnew array<String^>{
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
					"" + walkerList[i]->password
			});
		}
	}
	void RefreshGrid_Pet() {
		List<Pet^>^ petList = Controller::QueryAllPets();
		dgvPetList1->Rows->Clear();

		for (int i = 0; i < petList->Count; i++) {
			dgvPetList1->Rows->Add(gcnew array<String^>{
				" " + petList[i]->Id,
					petList[i]->Name,
					petList[i]->Kind,
					petList[i]->Species,
					" " + petList[i]->Age,
					petList[i]->Conduct,
					petList[i]->Vaccines,
			});

		}
	}
	void RefreshPetOwnerGrid() {
		List<PetOwner^>^ PetOwnerList = Controller::QueryAllPetOwner();
		dgvPetOwner1->Rows->Clear();

		for (int i = 0; i < PetOwnerList->Count; i++) {
			dgvPetOwner1->Rows->Add(gcnew array<String^>{
				" " + PetOwnerList[i]->Id.ToString(),
					PetOwnerList[i]->username,
					PetOwnerList[i]->Firstname,
					PetOwnerList[i]->Lastname,
					PetOwnerList[i]->Dni.ToString(),
					PetOwnerList[i]->Email,
					PetOwnerList[i]->Birthday,
					PetOwnerList[i]->Address,
					" " + PetOwnerList[i]->Gender
			});
		}
	}

	private: System::Void Profiles_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshGrid();
		RefreshGrid_Walker();
		RefreshGrid_Pet();
		RefreshPetOwnerGrid();
	}
private: System::Void dgvKeeper1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	if (dgvKeeper1->CurrentCell != nullptr &&
		dgvKeeper1->CurrentCell->Value != nullptr &&
		dgvKeeper1->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvKeeper1->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvKeeper1->Rows[selectedrowindex];
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
			cmbWarranty->Text = keeper->Warranty;
			txtSalary->Text = "" + keeper->Salary;
			//txt->Text = "" + c->Photo;
			txtStatus->Text = "" + keeper->Status;
		}
	}

}
private: System::Void dgvWalker1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	if (dgvWalker1->CurrentCell != nullptr &&
		dgvWalker1->CurrentCell->Value != nullptr &&
		dgvWalker1->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvWalker1->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvWalker1->Rows[selectedrowindex];
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
		}
	}

}
private: System::Void dgvPetList1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvPetList1->SelectedCells[0]->RowIndex;
	int petId = Int32::Parse(dgvPetList1->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Pet^ p = Controller::QueryPetById(petId);

	txtPetId->Text = " " + p->Id;
	txtPetName->Text = p->Name;
	cbPetKind->Text = p->Kind;
	cbPetSpecies->Text = p->Species;
	txtPetAge->Text = " " + p->Age;
	cbPetConduct->Text = p->Conduct;
	cbPetVaccines->Text = p->Vaccines;
}
private: System::Void dgvPetOwner1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e){

	   int selectedRowIndex = dgvPetOwner1->SelectedCells[0]->RowIndex;
	   int petownerId = Int32::Parse(dgvPetOwner1->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	   PetOwner^ petowner = Controller::QueryPetOwnerById(petownerId);
	   txtUserPetOwnerr->Text = "" + petowner->username;
	   txtFirstnamePetOwner->Text = petowner->Firstname;
	   txtApellidoPetOwner->Text = petowner->Lastname;
	   dtpBirthdayPetOwner->Value = DateTime::Parse(petowner->Birthday);
	   txtPhoneNumberPetOwner->Text = "" + petowner->PhoneNumber;
	   radioMalePetOwner->Checked = petowner->Gender == 'M';
	   radioFemalePetOwner->Checked = petowner->Gender == 'F';
	   txtDniPetOwner->Text = "" + petowner->DocNumbrer;
	   txtIdPetOwner->Text = "" + petowner->Id;
	   txtDirectionPetOwner->Text = petowner->Address;
	   txtEmailPetOwner->Text = petowner->Email;
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
		   //CmbPosition->Clear();
	   }

private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ a = txtId->Text;
	int keeperId = Int32::Parse(a);
	Keeper^ keeper = Controller::QueryKeeperById(keeperId);
	//MessageBox::Show(customer->ToString()); //Polimorfismo
	if (keeper != nullptr) {

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
		cmbWarranty->Text = keeper->Warranty;
		txtSalary->Text = "" + keeper->Salary;
		//txt->Text = "" + c->Photo;
		txtStatus->Text = "" + keeper->Status;
	}
}

private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}


private: System::Void btnSearchWalker_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ a = txtId->Text;
	int walkerId = Int32::Parse(a);
	Walker^ walker = Controller::QueryWalkerById(walkerId);
	//MessageBox::Show(customer->ToString()); //Polimorfismo
	if (walker != nullptr) {

		txtDni->Text = "" + walker->Dni;
		txtAddress->Text = walker->Address;
		txtPhoneNumber->Text = walker->PhoneNumber;
		txtEmail->Text = walker->Email;
		rbtnMasc->Checked = dynamic_cast<Walker^>(walker)->Gender == 'M';
		rbtnFem->Checked = dynamic_cast<Walker^>(walker)->Gender == 'F';
		txtId->Text = "" + walker->Id;
		txtUsername->Text = walker->username;
		//txtLastName->Text = walker->password;
		txtLastName->Text = dynamic_cast<Walker^>(walker)->Lastname;
		txtFirstName->Text = dynamic_cast<Walker^>(walker)->Firstname;
		txtValoration->Text = "" + walker->Valoration;
		txtExperience->Text = "" + walker->Experience;
		txtLevel->Text = "" + walker->Level;
		cmbWarranty->Text = walker->Warranty;
		txtSalary->Text = "" + walker->Salary;
		//txt->Text = "" + c->Photo;
		txtStatus->Text = "" + walker->Status;
	}
}




private: System::Void btnSearchPetOwner_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ a = txtIdPetOwner->Text;
	int petownerId = Int32::Parse(a);
	PetOwner^ petowner = Controller::QueryPetOwnerById(petownerId);
	//MessageBox::Show(customer->ToString()); //Polimorfismo
	if (petowner != nullptr) {
		txtUserPetOwnerr->Text = "" + petowner->username;
		txtFirstnamePetOwner->Text = petowner->Firstname;
		txtApellidoPetOwner->Text = petowner->Lastname;
		dtpBirthdayPetOwner->Value = DateTime::Parse(petowner->Birthday);
		txtPhoneNumberPetOwner->Text = "" + petowner->PhoneNumber;
		radioMalePetOwner->Checked = petowner->Gender == 'M';
		radioFemalePetOwner->Checked = petowner->Gender == 'F';
		txtDniPetOwner->Text = "" + petowner->DocNumbrer;
		txtIdPetOwner->Text = "" + petowner->Id;
		txtDirectionPetOwner->Text = petowner->Address;
		txtEmailPetOwner->Text = petowner->Email;
	}
}
private: System::Void btnSearchPet_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ a = txtPetId->Text;
	int petId = Int32::Parse(a);
	Pet^ p = Controller::QueryPetById(petId);
	//MessageBox::Show(customer->ToString()); //Polimorfismo
	if (p != nullptr) {
		txtPetId->Text = " " + p->Id;
		txtPetName->Text = p->Name;
		cbPetKind->Text = p->Kind;
		cbPetSpecies->Text = p->Species;
		txtPetAge->Text = " " + p->Age;
		cbPetConduct->Text = p->Conduct;
		cbPetVaccines->Text = p->Vaccines;
	}
}
};
}
