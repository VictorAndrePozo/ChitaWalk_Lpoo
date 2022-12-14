#pragma once

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ProfileKeepers
	/// </summary>
	public ref class ProfileKeepers : public System::Windows::Forms::Form
	{
	public:
		ProfileKeepers(void)
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
		~ProfileKeepers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tbKeeper;
	private: System::Windows::Forms::ComboBox^ cmbWarranty;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::Label^ labelId;
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
	private: System::Windows::Forms::TabPage^ tbWalker;
	private: System::Windows::Forms::DataGridView^ dgvWalker;
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
	private: System::Windows::Forms::Button^ btnsearchbyID;




	protected:























































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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tbKeeper = (gcnew System::Windows::Forms::TabPage());
			this->btnsearchbyID = (gcnew System::Windows::Forms::Button());
			this->cmbWarranty = (gcnew System::Windows::Forms::ComboBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->labelId = (gcnew System::Windows::Forms::Label());
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
			this->tbWalker = (gcnew System::Windows::Forms::TabPage());
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
			this->tabControl1->SuspendLayout();
			this->tbKeeper->SuspendLayout();
			this->tbWalker->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWalker))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tbKeeper);
			this->tabControl1->Controls->Add(this->tbWalker);
			this->tabControl1->Location = System::Drawing::Point(23, 26);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1120, 633);
			this->tabControl1->TabIndex = 44;
			// 
			// tbKeeper
			// 
			this->tbKeeper->Controls->Add(this->btnsearchbyID);
			this->tbKeeper->Controls->Add(this->cmbWarranty);
			this->tbKeeper->Controls->Add(this->txtPassword);
			this->tbKeeper->Controls->Add(this->label15);
			this->tbKeeper->Controls->Add(this->labelId);
			this->tbKeeper->Controls->Add(this->rbtnMasc);
			this->tbKeeper->Controls->Add(this->label2);
			this->tbKeeper->Controls->Add(this->rbtnFem);
			this->tbKeeper->Controls->Add(this->label3);
			this->tbKeeper->Controls->Add(this->txtPhoneNumber);
			this->tbKeeper->Controls->Add(this->label4);
			this->tbKeeper->Controls->Add(this->label10);
			this->tbKeeper->Controls->Add(this->label5);
			this->tbKeeper->Controls->Add(this->label6);
			this->tbKeeper->Controls->Add(this->label7);
			this->tbKeeper->Controls->Add(this->txtSalary);
			this->tbKeeper->Controls->Add(this->label8);
			this->tbKeeper->Controls->Add(this->txtExperience);
			this->tbKeeper->Controls->Add(this->txtId);
			this->tbKeeper->Controls->Add(this->txtLevel);
			this->tbKeeper->Controls->Add(this->txtDni);
			this->tbKeeper->Controls->Add(this->txtValoration);
			this->tbKeeper->Controls->Add(this->txtEmail);
			this->tbKeeper->Controls->Add(this->txtAddress);
			this->tbKeeper->Controls->Add(this->label14);
			this->tbKeeper->Controls->Add(this->txtFirstName);
			this->tbKeeper->Controls->Add(this->txtLastName);
			this->tbKeeper->Controls->Add(this->label13);
			this->tbKeeper->Controls->Add(this->txtUsername);
			this->tbKeeper->Controls->Add(this->label12);
			this->tbKeeper->Controls->Add(this->txtStatus);
			this->tbKeeper->Controls->Add(this->label11);
			this->tbKeeper->Controls->Add(this->label9);
			this->tbKeeper->Controls->Add(this->label1);
			this->tbKeeper->Location = System::Drawing::Point(4, 25);
			this->tbKeeper->Name = L"tbKeeper";
			this->tbKeeper->Padding = System::Windows::Forms::Padding(3);
			this->tbKeeper->Size = System::Drawing::Size(1112, 604);
			this->tbKeeper->TabIndex = 0;
			this->tbKeeper->Text = L"Personal";
			this->tbKeeper->UseVisualStyleBackColor = true;
			// 
			// btnsearchbyID
			// 
			this->btnsearchbyID->Location = System::Drawing::Point(435, 51);
			this->btnsearchbyID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnsearchbyID->Name = L"btnsearchbyID";
			this->btnsearchbyID->Size = System::Drawing::Size(161, 45);
			this->btnsearchbyID->TabIndex = 46;
			this->btnsearchbyID->Text = L"Búsqueda por ID ";
			this->btnsearchbyID->UseVisualStyleBackColor = true;
			this->btnsearchbyID->Click += gcnew System::EventHandler(this, &ProfileKeepers::btnsearchbyID_Click);
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
			this->cmbWarranty->Location = System::Drawing::Point(728, 219);
			this->cmbWarranty->Name = L"cmbWarranty";
			this->cmbWarranty->Size = System::Drawing::Size(125, 24);
			this->cmbWarranty->TabIndex = 45;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(728, 253);
			this->txtPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(125, 22);
			this->txtPassword->TabIndex = 44;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(619, 258);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(76, 16);
			this->label15->TabIndex = 43;
			this->label15->Text = L"Contraseña";
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
			// rbtnMasc
			// 
			this->rbtnMasc->AutoSize = true;
			this->rbtnMasc->Location = System::Drawing::Point(235, 157);
			this->rbtnMasc->Name = L"rbtnMasc";
			this->rbtnMasc->Size = System::Drawing::Size(64, 20);
			this->rbtnMasc->TabIndex = 42;
			this->rbtnMasc->Text = L"Varon";
			this->rbtnMasc->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Dni";
			// 
			// rbtnFem
			// 
			this->rbtnFem->AutoSize = true;
			this->rbtnFem->Checked = true;
			this->rbtnFem->Location = System::Drawing::Point(144, 157);
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
			this->label3->Location = System::Drawing::Point(47, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Dirección";
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(728, 285);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(125, 22);
			this->txtPhoneNumber->TabIndex = 39;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 256);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Correo";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(619, 288);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 16);
			this->label10->TabIndex = 38;
			this->label10->Text = L"Celular";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(45, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Género";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(47, 288);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Usuario";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(45, 87);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Nombres";
			// 
			// txtSalary
			// 
			this->txtSalary->Location = System::Drawing::Point(728, 151);
			this->txtSalary->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSalary->Multiline = true;
			this->txtSalary->Name = L"txtSalary";
			this->txtSalary->Size = System::Drawing::Size(125, 52);
			this->txtSalary->TabIndex = 35;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(47, 116);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Apellidos";
			// 
			// txtExperience
			// 
			this->txtExperience->Location = System::Drawing::Point(728, 120);
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
			this->txtLevel->Location = System::Drawing::Point(728, 88);
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
			this->txtValoration->Location = System::Drawing::Point(728, 56);
			this->txtValoration->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtValoration->Name = L"txtValoration";
			this->txtValoration->Size = System::Drawing::Size(125, 22);
			this->txtValoration->TabIndex = 32;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(143, 253);
			this->txtEmail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(453, 22);
			this->txtEmail->TabIndex = 10;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(143, 191);
			this->txtAddress->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(453, 52);
			this->txtAddress->TabIndex = 11;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(353, 120);
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
			this->txtLastName->Location = System::Drawing::Point(143, 113);
			this->txtLastName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(161, 22);
			this->txtLastName->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(618, 164);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 16);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Salario";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(143, 285);
			this->txtUsername->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(157, 22);
			this->txtUsername->TabIndex = 15;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(618, 219);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 16);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Garantía";
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(435, 114);
			this->txtStatus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(161, 22);
			this->txtStatus->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(618, 124);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 16);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Experiencia";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(618, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 16);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Valoración";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(618, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 16);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Nivel";
			// 
			// tbWalker
			// 
			this->tbWalker->Controls->Add(this->dgvWalker);
			this->tbWalker->Location = System::Drawing::Point(4, 25);
			this->tbWalker->Name = L"tbWalker";
			this->tbWalker->Padding = System::Windows::Forms::Padding(3);
			this->tbWalker->Size = System::Drawing::Size(1112, 604);
			this->tbWalker->TabIndex = 1;
			this->tbWalker->Text = L"Lista";
			this->tbWalker->UseVisualStyleBackColor = true;
			// 
			// dgvWalker
			// 
			this->dgvWalker->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvWalker->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(16) {
				this->walkerId, this->walkerDocNumber,
					this->walkerFirstname, this->walkerLastName, this->walkerStatus, this->walkerGender, this->walkerAddress, this->walkerEmail,
					this->walkerUsername, this->walkerValoration, this->walkerLevel, this->walkerExperience, this->walkerSalary, this->walkerWarranty,
					this->walkerPhoneNumber, this->walkerPassword
			});
			this->dgvWalker->Location = System::Drawing::Point(14, 20);
			this->dgvWalker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvWalker->Name = L"dgvWalker";
			this->dgvWalker->RowHeadersWidth = 51;
			this->dgvWalker->RowTemplate->Height = 24;
			this->dgvWalker->Size = System::Drawing::Size(1084, 567);
			this->dgvWalker->TabIndex = 77;
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
			// ProfileKeepers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1165, 675);
			this->Controls->Add(this->tabControl1);
			this->Name = L"ProfileKeepers";
			this->Text = L"ProfileKeepers";
			this->tabControl1->ResumeLayout(false);
			this->tbKeeper->ResumeLayout(false);
			this->tbKeeper->PerformLayout();
			this->tbWalker->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWalker))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void btnsearchbyID_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
