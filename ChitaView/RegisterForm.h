#pragma once

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ CumpleanosPO;
	protected:
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::Label^ CelularPO;
	private: System::Windows::Forms::RadioButton^ radioMale;
	private: System::Windows::Forms::RadioButton^ radioFemale;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ label1;
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
	private: System::Windows::Forms::PictureBox^ picturePhoto;
	private: System::Windows::Forms::Button^ btnAddPhoto;
	private: System::Windows::Forms::Button^ btnRegister;






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
			this->CumpleanosPO = (gcnew System::Windows::Forms::Label());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->CelularPO = (gcnew System::Windows::Forms::Label());
			this->radioMale = (gcnew System::Windows::Forms::RadioButton());
			this->radioFemale = (gcnew System::Windows::Forms::RadioButton());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->picturePhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnAddPhoto = (gcnew System::Windows::Forms::Button());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// CumpleanosPO
			// 
			this->CumpleanosPO->AutoSize = true;
			this->CumpleanosPO->Location = System::Drawing::Point(22, 151);
			this->CumpleanosPO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->CumpleanosPO->Name = L"CumpleanosPO";
			this->CumpleanosPO->Size = System::Drawing::Size(75, 13);
			this->CumpleanosPO->TabIndex = 88;
			this->CumpleanosPO->Text = L"Cumpleaños(*)";
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(128, 145);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(189, 20);
			this->dtpBirthday->TabIndex = 87;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(128, 180);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(2);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(189, 20);
			this->txtPhoneNumber->TabIndex = 86;
			// 
			// CelularPO
			// 
			this->CelularPO->AutoSize = true;
			this->CelularPO->Location = System::Drawing::Point(21, 183);
			this->CelularPO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->CelularPO->Name = L"CelularPO";
			this->CelularPO->Size = System::Drawing::Size(49, 13);
			this->CelularPO->TabIndex = 85;
			this->CelularPO->Text = L"Celular(*)";
			// 
			// radioMale
			// 
			this->radioMale->AutoSize = true;
			this->radioMale->Location = System::Drawing::Point(235, 213);
			this->radioMale->Name = L"radioMale";
			this->radioMale->Size = System::Drawing::Size(62, 17);
			this->radioMale->TabIndex = 84;
			this->radioMale->TabStop = true;
			this->radioMale->Text = L"Hombre";
			this->radioMale->UseVisualStyleBackColor = true;
			// 
			// radioFemale
			// 
			this->radioFemale->AutoSize = true;
			this->radioFemale->Location = System::Drawing::Point(134, 213);
			this->radioFemale->Name = L"radioFemale";
			this->radioFemale->Size = System::Drawing::Size(51, 17);
			this->radioFemale->TabIndex = 83;
			this->radioFemale->TabStop = true;
			this->radioFemale->Text = L"Mujer";
			this->radioFemale->UseVisualStyleBackColor = true;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(128, 58);
			this->txtPassword->Margin = System::Windows::Forms::Padding(2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(189, 20);
			this->txtPassword->TabIndex = 82;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 61);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 81;
			this->label1->Text = L"Contrasena(*)";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(128, 29);
			this->txtUsername->Margin = System::Windows::Forms::Padding(2);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(189, 20);
			this->txtUsername->TabIndex = 80;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(128, 351);
			this->txtEmail->Margin = System::Windows::Forms::Padding(2);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(189, 20);
			this->txtEmail->TabIndex = 79;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(128, 120);
			this->txtApellido->Margin = System::Windows::Forms::Padding(2);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(189, 20);
			this->txtApellido->TabIndex = 78;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(128, 91);
			this->txtFirstName->Margin = System::Windows::Forms::Padding(2);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(189, 20);
			this->txtFirstName->TabIndex = 77;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(128, 291);
			this->txtAddress->Margin = System::Windows::Forms::Padding(2);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(189, 56);
			this->txtAddress->TabIndex = 76;
			// 
			// txtDni
			// 
			this->txtDni->Location = System::Drawing::Point(128, 240);
			this->txtDni->Margin = System::Windows::Forms::Padding(2);
			this->txtDni->Name = L"txtDni";
			this->txtDni->Size = System::Drawing::Size(189, 20);
			this->txtDni->TabIndex = 75;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(128, 267);
			this->txtId->Margin = System::Windows::Forms::Padding(2);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(189, 20);
			this->txtId->TabIndex = 74;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 120);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 13);
			this->label8->TabIndex = 73;
			this->label8->Text = L"Apellidos(*)";
			// 
			// NombrePO
			// 
			this->NombrePO->AutoSize = true;
			this->NombrePO->Location = System::Drawing::Point(21, 94);
			this->NombrePO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NombrePO->Name = L"NombrePO";
			this->NombrePO->Size = System::Drawing::Size(59, 13);
			this->NombrePO->TabIndex = 72;
			this->NombrePO->Text = L"Nombres(*)";
			// 
			// UsuarioPO
			// 
			this->UsuarioPO->AutoSize = true;
			this->UsuarioPO->Location = System::Drawing::Point(21, 32);
			this->UsuarioPO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->UsuarioPO->Name = L"UsuarioPO";
			this->UsuarioPO->Size = System::Drawing::Size(53, 13);
			this->UsuarioPO->TabIndex = 71;
			this->UsuarioPO->Text = L"Usuario(*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 213);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 70;
			this->label5->Text = L"Género(*)";
			// 
			// CorreoPO
			// 
			this->CorreoPO->AutoSize = true;
			this->CorreoPO->Location = System::Drawing::Point(21, 351);
			this->CorreoPO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->CorreoPO->Name = L"CorreoPO";
			this->CorreoPO->Size = System::Drawing::Size(48, 13);
			this->CorreoPO->TabIndex = 69;
			this->CorreoPO->Text = L"Correo(*)";
			// 
			// DireccionPO
			// 
			this->DireccionPO->AutoSize = true;
			this->DireccionPO->Location = System::Drawing::Point(21, 301);
			this->DireccionPO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DireccionPO->Name = L"DireccionPO";
			this->DireccionPO->Size = System::Drawing::Size(62, 13);
			this->DireccionPO->TabIndex = 68;
			this->DireccionPO->Text = L"Dirección(*)";
			// 
			// DniPO
			// 
			this->DniPO->AutoSize = true;
			this->DniPO->Location = System::Drawing::Point(21, 240);
			this->DniPO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DniPO->Name = L"DniPO";
			this->DniPO->Size = System::Drawing::Size(33, 13);
			this->DniPO->TabIndex = 67;
			this->DniPO->Text = L"Dni(*)";
			// 
			// IdPO
			// 
			this->IdPO->AutoSize = true;
			this->IdPO->Location = System::Drawing::Point(21, 267);
			this->IdPO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->IdPO->Name = L"IdPO";
			this->IdPO->Size = System::Drawing::Size(26, 13);
			this->IdPO->TabIndex = 66;
			this->IdPO->Text = L"Id(*)";
			// 
			// picturePhoto
			// 
			this->picturePhoto->Location = System::Drawing::Point(341, 32);
			this->picturePhoto->Margin = System::Windows::Forms::Padding(2);
			this->picturePhoto->Name = L"picturePhoto";
			this->picturePhoto->Size = System::Drawing::Size(134, 177);
			this->picturePhoto->TabIndex = 89;
			this->picturePhoto->TabStop = false;
			// 
			// btnAddPhoto
			// 
			this->btnAddPhoto->Location = System::Drawing::Point(361, 214);
			this->btnAddPhoto->Name = L"btnAddPhoto";
			this->btnAddPhoto->Size = System::Drawing::Size(89, 23);
			this->btnAddPhoto->TabIndex = 90;
			this->btnAddPhoto->Text = L"Agregar Foto";
			this->btnAddPhoto->UseVisualStyleBackColor = true;
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(361, 265);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(89, 23);
			this->btnRegister->TabIndex = 91;
			this->btnRegister->Text = L"Registrarse";
			this->btnRegister->UseVisualStyleBackColor = true;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 391);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->btnAddPhoto);
			this->Controls->Add(this->picturePhoto);
			this->Controls->Add(this->CumpleanosPO);
			this->Controls->Add(this->dtpBirthday);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->CelularPO);
			this->Controls->Add(this->radioMale);
			this->Controls->Add(this->radioFemale);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label1);
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
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturePhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
