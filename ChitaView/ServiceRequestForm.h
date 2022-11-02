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
	using namespace System::Collections::Generic;	//para listas

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
	private: System::Windows::Forms::DataGridView^ dgvServiceRequestList;






	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtRequestId;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dtpRequestDate;

	private: System::Windows::Forms::Label^ label3;






	private: System::Windows::Forms::Button^ btnShow;
	private: System::Windows::Forms::ComboBox^ cbRequestPetKind;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestPet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestService;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvServiceDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvServiceTimeInit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestStatus;
	private: System::Windows::Forms::ComboBox^ cbRequestPet;
	private: System::Windows::Forms::TextBox^ txtRequestPetOwner;
	private: System::Windows::Forms::Label^ label5;











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
			this->dgvServiceRequestList = (gcnew System::Windows::Forms::DataGridView());
			this->dgvRequestId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestPet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestService = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvServiceDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvServiceTimeInit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtRequestId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dtpRequestDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnShow = (gcnew System::Windows::Forms::Button());
			this->cbRequestPetKind = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cbRequestPet = (gcnew System::Windows::Forms::ComboBox());
			this->txtRequestPetOwner = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvServiceRequestList))->BeginInit();
			this->SuspendLayout();
			// 
			// txtRequestAddressEnd
			// 
			this->txtRequestAddressEnd->Location = System::Drawing::Point(185, 196);
			this->txtRequestAddressEnd->Name = L"txtRequestAddressEnd";
			this->txtRequestAddressEnd->Size = System::Drawing::Size(196, 20);
			this->txtRequestAddressEnd->TabIndex = 48;
			// 
			// txtRequestAddressStart
			// 
			this->txtRequestAddressStart->Location = System::Drawing::Point(185, 169);
			this->txtRequestAddressStart->Name = L"txtRequestAddressStart";
			this->txtRequestAddressStart->Size = System::Drawing::Size(196, 20);
			this->txtRequestAddressStart->TabIndex = 47;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(84, 199);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 13);
			this->label12->TabIndex = 46;
			this->label12->Text = L"Dirección Entrega:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(84, 172);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(90, 13);
			this->label11->TabIndex = 45;
			this->label11->Text = L"Dirección  Salida:";
			// 
			// cbRequestServices
			// 
			this->cbRequestServices->FormattingEnabled = true;
			this->cbRequestServices->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Paseo", L"Cuidado", L"Transporte" });
			this->cbRequestServices->Location = System::Drawing::Point(185, 141);
			this->cbRequestServices->Name = L"cbRequestServices";
			this->cbRequestServices->Size = System::Drawing::Size(196, 21);
			this->cbRequestServices->TabIndex = 44;
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(241, 284);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(75, 23);
			this->btnRemove->TabIndex = 43;
			this->btnRemove->Text = L"Eliminar";
			this->btnRemove->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(150, 284);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 42;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(60, 284);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 41;
			this->btnAdd->Text = L"Añadir";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ServiceRequestForm::btnAdd_Click);
			// 
			// dtpServiceTimeEnd
			// 
			this->dtpServiceTimeEnd->CustomFormat = L"HH:mm";
			this->dtpServiceTimeEnd->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpServiceTimeEnd->Location = System::Drawing::Point(317, 249);
			this->dtpServiceTimeEnd->Name = L"dtpServiceTimeEnd";
			this->dtpServiceTimeEnd->ShowUpDown = true;
			this->dtpServiceTimeEnd->Size = System::Drawing::Size(64, 20);
			this->dtpServiceTimeEnd->TabIndex = 40;
			// 
			// dtpServiceTimeStart
			// 
			this->dtpServiceTimeStart->CustomFormat = L"HH:mm";
			this->dtpServiceTimeStart->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpServiceTimeStart->Location = System::Drawing::Point(185, 248);
			this->dtpServiceTimeStart->Name = L"dtpServiceTimeStart";
			this->dtpServiceTimeStart->ShowUpDown = true;
			this->dtpServiceTimeStart->Size = System::Drawing::Size(64, 20);
			this->dtpServiceTimeStart->TabIndex = 39;
			// 
			// dtpServiceDate
			// 
			this->dtpServiceDate->Location = System::Drawing::Point(185, 222);
			this->dtpServiceDate->Name = L"dtpServiceDate";
			this->dtpServiceDate->Size = System::Drawing::Size(196, 20);
			this->dtpServiceDate->TabIndex = 38;
			// 
			// dgvServiceRequestList
			// 
			this->dgvServiceRequestList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvServiceRequestList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dgvRequestId,
					this->dgvRequestPet, this->dgvRequestService, this->dgvServiceDate, this->dgvServiceTimeInit, this->dgvRequestStatus
			});
			this->dgvServiceRequestList->Location = System::Drawing::Point(12, 322);
			this->dgvServiceRequestList->Name = L"dgvServiceRequestList";
			this->dgvServiceRequestList->Size = System::Drawing::Size(443, 211);
			this->dgvServiceRequestList->TabIndex = 37;
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
			// dgvRequestStatus
			// 
			this->dgvRequestStatus->HeaderText = L"Estado";
			this->dgvRequestStatus->Name = L"dgvRequestStatus";
			this->dgvRequestStatus->Width = 70;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(268, 254);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 13);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Hasta:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(84, 254);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 13);
			this->label9->TabIndex = 35;
			this->label9->Text = L"Hora de inicio:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(84, 228);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 13);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Fecha Servicio:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(84, 144);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Servicio";
			// 
			// txtRequestId
			// 
			this->txtRequestId->Location = System::Drawing::Point(185, 36);
			this->txtRequestId->Name = L"txtRequestId";
			this->txtRequestId->Size = System::Drawing::Size(196, 20);
			this->txtRequestId->TabIndex = 50;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 49;
			this->label1->Text = L"Id Solicitud:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(84, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Mascota:";
			// 
			// dtpRequestDate
			// 
			this->dtpRequestDate->Enabled = false;
			this->dtpRequestDate->Location = System::Drawing::Point(185, 62);
			this->dtpRequestDate->Name = L"dtpRequestDate";
			this->dtpRequestDate->Size = System::Drawing::Size(196, 20);
			this->dtpRequestDate->TabIndex = 54;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(84, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Fecha Solicitud:";
			// 
			// btnShow
			// 
			this->btnShow->Location = System::Drawing::Point(331, 284);
			this->btnShow->Name = L"btnShow";
			this->btnShow->Size = System::Drawing::Size(75, 23);
			this->btnShow->TabIndex = 55;
			this->btnShow->Text = L"Ver";
			this->btnShow->UseVisualStyleBackColor = true;
			// 
			// cbRequestPetKind
			// 
			this->cbRequestPetKind->FormattingEnabled = true;
			this->cbRequestPetKind->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Paseo", L"Cuidado", L"Transporte" });
			this->cbRequestPetKind->Location = System::Drawing::Point(185, 88);
			this->cbRequestPetKind->Name = L"cbRequestPetKind";
			this->cbRequestPetKind->Size = System::Drawing::Size(196, 21);
			this->cbRequestPetKind->TabIndex = 85;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(84, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 13);
			this->label4->TabIndex = 84;
			this->label4->Text = L"Tipo de Mascota:";
			// 
			// cbRequestPet
			// 
			this->cbRequestPet->FormattingEnabled = true;
			this->cbRequestPet->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Paseo", L"Cuidado", L"Transporte" });
			this->cbRequestPet->Location = System::Drawing::Point(185, 115);
			this->cbRequestPet->Name = L"cbRequestPet";
			this->cbRequestPet->Size = System::Drawing::Size(196, 21);
			this->cbRequestPet->TabIndex = 86;
			// 
			// txtRequestPetOwner
			// 
			this->txtRequestPetOwner->Location = System::Drawing::Point(185, 10);
			this->txtRequestPetOwner->Name = L"txtRequestPetOwner";
			this->txtRequestPetOwner->Size = System::Drawing::Size(196, 20);
			this->txtRequestPetOwner->TabIndex = 88;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(84, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 13);
			this->label5->TabIndex = 87;
			this->label5->Text = L"Nombre Dueño:";
			// 
			// ServiceRequestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 545);
			this->Controls->Add(this->txtRequestPetOwner);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cbRequestPet);
			this->Controls->Add(this->cbRequestPetKind);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnShow);
			this->Controls->Add(this->dtpRequestDate);
			this->Controls->Add(this->label3);
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
			this->Controls->Add(this->dgvServiceRequestList);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Name = L"ServiceRequestForm";
			this->Text = L"Solicitud de Servicio";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvServiceRequestList))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
			void RefreshGrid() {
				List<ServiceRequest^>^ servicerequestList = Controller::QueryAllServiceRequest();
				dgvServiceRequestList->Rows->Clear();

				for (int i = 0; i < servicerequestList->Count; i++) {
					dgvServiceRequestList->Rows->Add(gcnew array<String^>{
						" " + servicerequestList[i] -> Id,
							  //servicerequestList[i] -> Date,
							  servicerequestList[i] -> Status,

					});
				
				}
			}
	Void ClearControls() {
			txtRequestId->Text = "";
			cbRequestPet->Text = "";
			cbRequestServices->Text = "";
			txtRequestAddressStart->Text = "";
			txtRequestAddressEnd->Text = "";
			dtpServiceDate->Text = "";
			dtpServiceTimeStart->Text = "";
			dtpServiceTimeEnd->Text = "";
		}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {




	}
};
}
