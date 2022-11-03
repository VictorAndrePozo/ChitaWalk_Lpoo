#pragma once
#include "MyForm.h"
namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ChitaController;
	using namespace ChitaModel;
	using namespace System::Collections::Generic;
	/// <summary>
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LoginUsernamePO;
	private: System::Windows::Forms::Label^ LoginPasswordPO;
	private: System::Windows::Forms::TextBox^ txtLoginUsername;
	private: System::Windows::Forms::TextBox^ txtLoginPassword;
	private: System::Windows::Forms::Button^ btnLogging;
	protected:

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
			this->LoginUsernamePO = (gcnew System::Windows::Forms::Label());
			this->LoginPasswordPO = (gcnew System::Windows::Forms::Label());
			this->txtLoginUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtLoginPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLogging = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LoginUsernamePO
			// 
			this->LoginUsernamePO->AutoSize = true;
			this->LoginUsernamePO->Location = System::Drawing::Point(31, 23);
			this->LoginUsernamePO->Name = L"LoginUsernamePO";
			this->LoginUsernamePO->Size = System::Drawing::Size(53, 13);
			this->LoginUsernamePO->TabIndex = 0;
			this->LoginUsernamePO->Text = L"Usuario(*)";
			// 
			// LoginPasswordPO
			// 
			this->LoginPasswordPO->AutoSize = true;
			this->LoginPasswordPO->Location = System::Drawing::Point(31, 50);
			this->LoginPasswordPO->Name = L"LoginPasswordPO";
			this->LoginPasswordPO->Size = System::Drawing::Size(71, 13);
			this->LoginPasswordPO->TabIndex = 1;
			this->LoginPasswordPO->Text = L"Contraseña(*)";
			// 
			// txtLoginUsername
			// 
			this->txtLoginUsername->Location = System::Drawing::Point(122, 20);
			this->txtLoginUsername->Name = L"txtLoginUsername";
			this->txtLoginUsername->Size = System::Drawing::Size(157, 20);
			this->txtLoginUsername->TabIndex = 2;
			// 
			// txtLoginPassword
			// 
			this->txtLoginPassword->Location = System::Drawing::Point(122, 47);
			this->txtLoginPassword->Name = L"txtLoginPassword";
			this->txtLoginPassword->PasswordChar = '*';
			this->txtLoginPassword->Size = System::Drawing::Size(157, 20);
			this->txtLoginPassword->TabIndex = 3;
			// 
			// btnLogging
			// 
			this->btnLogging->Location = System::Drawing::Point(122, 73);
			this->btnLogging->Name = L"btnLogging";
			this->btnLogging->Size = System::Drawing::Size(75, 23);
			this->btnLogging->TabIndex = 4;
			this->btnLogging->Text = L"Login";
			this->btnLogging->UseVisualStyleBackColor = true;
			this->btnLogging->Click += gcnew System::EventHandler(this, &Login::btnLogging_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(319, 104);
			this->Controls->Add(this->btnLogging);
			this->Controls->Add(this->txtLoginPassword);
			this->Controls->Add(this->txtLoginUsername);
			this->Controls->Add(this->LoginPasswordPO);
			this->Controls->Add(this->LoginUsernamePO);
			this->Name = L"Login";
			this->Text = L"Login Usuarios Propietarios";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::Login_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLogging_Click(System::Object^ sender, System::EventArgs^ e) {
		PetOwner^ PO = Controller::LoginPetOwner(txtLoginUsername->Text, txtLoginPassword->Text);
		if(PO != nullptr){
			MessageBox::Show("Bienvenido " + PO->Firstname);
			MyForm^ petForm = gcnew MyForm();
			petForm->Show();
			this->Hide();
		}
		else { 
			MessageBox::Show("Usuario y contraseña incorrectos.");
		}
	}
private: System::Void Login_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyData == Keys::Enter)
		btnLogging->PerformClick();
}
};
}
