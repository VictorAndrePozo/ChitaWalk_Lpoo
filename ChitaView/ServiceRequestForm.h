#pragma once

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ServiceRequestForm
	/// </summary>
	public ref class ServiceRequestForm : public System::Windows::Forms::Form
	{
	public:
		ServiceRequestForm(void)
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
		~ServiceRequestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtRequestAddressEnd;
	protected:

	private: System::Windows::Forms::TextBox^ txtRequestAddressStart;


	protected:

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ cbRequestServices;

	private: System::Windows::Forms::Button^ btnRemove;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::DateTimePicker^ dtpServiceTimeEnd;

	private: System::Windows::Forms::DateTimePicker^ dtpServiceTimeStart;

	private: System::Windows::Forms::DateTimePicker^ dtpServiceDate;

	private: System::Windows::Forms::DataGridView^ dgvPetForm;




	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtRequestId;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtRequestPet;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dtpRequestDate;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestPet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestService;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvServiceDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvServiceTimeInit;






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
			this->txtRequestAddressEnd = (gcnew System::Windows::Forms::TextBox());
			this->txtRequestAddressStart = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->cbRequestServices = (gcnew System::Windows::Forms::ComboBox());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->dtpServiceTimeEnd = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpServiceTimeStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpServiceDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->dgvPetForm = (gcnew System::Windows::Forms::DataGridView());
			this->dgvRequestId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestPet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestService = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvServiceDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvServiceTimeInit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtRequestId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtRequestPet = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dtpRequestDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPetForm))->BeginInit();
			this->SuspendLayout();
			// 
			// txtRequestAddressEnd
			// 
			this->txtRequestAddressEnd->Location = System::Drawing::Point(145, 139);
			this->txtRequestAddressEnd->Name = L"txtRequestAddressEnd";
			this->txtRequestAddressEnd->Size = System::Drawing::Size(196, 20);
			this->txtRequestAddressEnd->TabIndex = 48;
			// 
			// txtRequestAddressStart
			// 
			this->txtRequestAddressStart->Location = System::Drawing::Point(145, 112);
			this->txtRequestAddressStart->Name = L"txtRequestAddressStart";
			this->txtRequestAddressStart->Size = System::Drawing::Size(196, 20);
			this->txtRequestAddressStart->TabIndex = 47;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(44, 142);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 13);
			this->label12->TabIndex = 46;
			this->label12->Text = L"Dirección Entrega:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(44, 115);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(90, 13);
			this->label11->TabIndex = 45;
			this->label11->Text = L"Dirección  Salida:";
			// 
			// cbRequestServices
			// 
			this->cbRequestServices->FormattingEnabled = true;
			this->cbRequestServices->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Paseo", L"Cuidado", L"Transporte" });
			this->cbRequestServices->Location = System::Drawing::Point(145, 84);
			this->cbRequestServices->Name = L"cbRequestServices";
			this->cbRequestServices->Size = System::Drawing::Size(196, 21);
			this->cbRequestServices->TabIndex = 44;
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(266, 232);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(75, 23);
			this->btnRemove->TabIndex = 43;
			this->btnRemove->Text = L"Eliminar";
			this->btnRemove->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(156, 232);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 42;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(47, 232);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 41;
			this->btnAdd->Text = L"Añadir";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// dtpServiceTimeEnd
			// 
			this->dtpServiceTimeEnd->CustomFormat = L"HH:mm";
			this->dtpServiceTimeEnd->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpServiceTimeEnd->Location = System::Drawing::Point(277, 192);
			this->dtpServiceTimeEnd->Name = L"dtpServiceTimeEnd";
			this->dtpServiceTimeEnd->ShowUpDown = true;
			this->dtpServiceTimeEnd->Size = System::Drawing::Size(64, 20);
			this->dtpServiceTimeEnd->TabIndex = 40;
			// 
			// dtpServiceTimeStart
			// 
			this->dtpServiceTimeStart->CustomFormat = L"HH:mm";
			this->dtpServiceTimeStart->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpServiceTimeStart->Location = System::Drawing::Point(145, 191);
			this->dtpServiceTimeStart->Name = L"dtpServiceTimeStart";
			this->dtpServiceTimeStart->ShowUpDown = true;
			this->dtpServiceTimeStart->Size = System::Drawing::Size(64, 20);
			this->dtpServiceTimeStart->TabIndex = 39;
			// 
			// dtpServiceDate
			// 
			this->dtpServiceDate->Location = System::Drawing::Point(145, 165);
			this->dtpServiceDate->Name = L"dtpServiceDate";
			this->dtpServiceDate->Size = System::Drawing::Size(196, 20);
			this->dtpServiceDate->TabIndex = 38;
			// 
			// dgvPetForm
			// 
			this->dgvPetForm->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPetForm->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dgvRequestId,
					this->dgvRequestPet, this->dgvRequestService, this->dgvServiceDate, this->dgvServiceTimeInit
			});
			this->dgvPetForm->Location = System::Drawing::Point(8, 266);
			this->dgvPetForm->Name = L"dgvPetForm";
			this->dgvPetForm->Size = System::Drawing::Size(373, 210);
			this->dgvPetForm->TabIndex = 37;
			// 
			// dgvRequestId
			// 
			this->dgvRequestId->HeaderText = L"Id";
			this->dgvRequestId->Name = L"dgvRequestId";
			this->dgvRequestId->Width = 50;
			// 
			// dgvRequestPet
			// 
			this->dgvRequestPet->HeaderText = L"Mascota";
			this->dgvRequestPet->Name = L"dgvRequestPet";
			this->dgvRequestPet->Width = 50;
			// 
			// dgvRequestService
			// 
			this->dgvRequestService->HeaderText = L"Servicio";
			this->dgvRequestService->Name = L"dgvRequestService";
			this->dgvRequestService->Width = 60;
			// 
			// dgvServiceDate
			// 
			this->dgvServiceDate->HeaderText = L"Fecha Servicio";
			this->dgvServiceDate->Name = L"dgvServiceDate";
			// 
			// dgvServiceTimeInit
			// 
			this->dgvServiceTimeInit->HeaderText = L"Hora Inicio";
			this->dgvServiceTimeInit->Name = L"dgvServiceTimeInit";
			this->dgvServiceTimeInit->Width = 70;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(228, 197);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 13);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Hasta:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(44, 197);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 13);
			this->label9->TabIndex = 35;
			this->label9->Text = L"Hora de inicio:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(44, 171);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 13);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Fecha Servicio:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(44, 87);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Servicio";
			// 
			// txtRequestId
			// 
			this->txtRequestId->Location = System::Drawing::Point(145, 6);
			this->txtRequestId->Name = L"txtRequestId";
			this->txtRequestId->Size = System::Drawing::Size(196, 20);
			this->txtRequestId->TabIndex = 50;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 49;
			this->label1->Text = L"Id Solicitud:";
			// 
			// txtRequestPet
			// 
			this->txtRequestPet->Location = System::Drawing::Point(145, 58);
			this->txtRequestPet->Name = L"txtRequestPet";
			this->txtRequestPet->Size = System::Drawing::Size(196, 20);
			this->txtRequestPet->TabIndex = 52;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Mascota:";
			// 
			// dtpRequestDate
			// 
			this->dtpRequestDate->Enabled = false;
			this->dtpRequestDate->Location = System::Drawing::Point(145, 32);
			this->dtpRequestDate->Name = L"dtpRequestDate";
			this->dtpRequestDate->Size = System::Drawing::Size(196, 20);
			this->dtpRequestDate->TabIndex = 54;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Fecha Solicitud:";
			// 
			// ServiceRequestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(389, 484);
			this->Controls->Add(this->dtpRequestDate);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtRequestPet);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtRequestId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtRequestAddressEnd);
			this->Controls->Add(this->txtRequestAddressStart);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->cbRequestServices);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dtpServiceTimeEnd);
			this->Controls->Add(this->dtpServiceTimeStart);
			this->Controls->Add(this->dtpServiceDate);
			this->Controls->Add(this->dgvPetForm);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Name = L"ServiceRequestForm";
			this->Text = L"Solicitud de Servicio";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPetForm))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
