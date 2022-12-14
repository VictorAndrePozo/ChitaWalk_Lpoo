#pragma once

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ChitaController;
	using namespace ChitaModel;

	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtPassword;
	protected:
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(131, 53);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(211, 22);
			this->txtPassword->TabIndex = 11;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(131, 19);
			this->txtUsername->Margin = System::Windows::Forms::Padding(4);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(211, 22);
			this->txtUsername->TabIndex = 10;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(188, 92);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(125, 28);
			this->btnCancel->TabIndex = 9;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(16, 93);
			this->btnOK->Margin = System::Windows::Forms::Padding(4);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(128, 28);
			this->btnOK->TabIndex = 8;
			this->btnOK->Text = L"Aceptar";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 61);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Contraseña:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 23);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Usuario:";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(357, 135);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"Autentificación de Usuario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyData == Keys::Enter)
			btnOK->PerformClick();
	}


};
}
