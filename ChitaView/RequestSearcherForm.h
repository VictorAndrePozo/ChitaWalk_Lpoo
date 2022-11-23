#pragma once
#include "ServiceDetailForm.h"

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
	/// Resumen de RequestSearcherForm
	/// </summary>
	public ref class RequestSearcherForm : public System::Windows::Forms::Form
	{
		Form^ refForm;
	public:
		RequestSearcherForm(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refForm = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RequestSearcherForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbSearcherService;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::DateTimePicker^ dtpSearcherTimeEnd;

	private: System::Windows::Forms::DateTimePicker^ dtpSearcherTimeStart;

	private: System::Windows::Forms::DateTimePicker^ dtpSearcherDate;
	private: System::Windows::Forms::DataGridView^ dgvSearcherList;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cbSearcherPetKind;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cbSearcherPet;
	private: System::Windows::Forms::ComboBox^ cbSearcherDistrict;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestPetOwner;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestPetKind;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestPet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestService;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestPetDistrict;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvServiceDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvServiceTimeInit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvServiceTimeEnd;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestStatus;
	private: System::Windows::Forms::Button^ btnCancel;
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbSearcherService = (gcnew System::Windows::Forms::ComboBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->dtpSearcherTimeEnd = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpSearcherTimeStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpSearcherDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->dgvSearcherList = (gcnew System::Windows::Forms::DataGridView());
			this->dgvRequestId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestPetOwner = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestPetKind = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestPet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestService = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestPetDistrict = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvServiceDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvServiceTimeInit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvServiceTimeEnd = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbSearcherPetKind = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cbSearcherPet = (gcnew System::Windows::Forms::ComboBox());
			this->cbSearcherDistrict = (gcnew System::Windows::Forms::ComboBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearcherList))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 73;
			this->label2->Text = L"Mascota:";
			// 
			// cbSearcherService
			// 
			this->cbSearcherService->FormattingEnabled = true;
			this->cbSearcherService->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Paseo", L"Cuidado", L"Transporte" });
			this->cbSearcherService->Location = System::Drawing::Point(104, 66);
			this->cbSearcherService->Name = L"cbSearcherService";
			this->cbSearcherService->Size = System::Drawing::Size(196, 21);
			this->cbSearcherService->TabIndex = 66;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(65, 189);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(75, 23);
			this->btnSearch->TabIndex = 63;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &RequestSearcherForm::btnSearch_Click);
			// 
			// dtpSearcherTimeEnd
			// 
			this->dtpSearcherTimeEnd->CustomFormat = L"HH:mm";
			this->dtpSearcherTimeEnd->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpSearcherTimeEnd->Location = System::Drawing::Point(236, 146);
			this->dtpSearcherTimeEnd->Name = L"dtpSearcherTimeEnd";
			this->dtpSearcherTimeEnd->ShowUpDown = true;
			this->dtpSearcherTimeEnd->Size = System::Drawing::Size(64, 20);
			this->dtpSearcherTimeEnd->TabIndex = 62;
			this->dtpSearcherTimeEnd->Value = System::DateTime(2022, 11, 3, 23, 59, 0, 0);
			// 
			// dtpSearcherTimeStart
			// 
			this->dtpSearcherTimeStart->CustomFormat = L"HH:mm";
			this->dtpSearcherTimeStart->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpSearcherTimeStart->Location = System::Drawing::Point(104, 146);
			this->dtpSearcherTimeStart->Name = L"dtpSearcherTimeStart";
			this->dtpSearcherTimeStart->ShowUpDown = true;
			this->dtpSearcherTimeStart->Size = System::Drawing::Size(64, 20);
			this->dtpSearcherTimeStart->TabIndex = 62;
			// 
			// dtpSearcherDate
			// 
			this->dtpSearcherDate->Location = System::Drawing::Point(104, 120);
			this->dtpSearcherDate->Name = L"dtpSearcherDate";
			this->dtpSearcherDate->Size = System::Drawing::Size(196, 20);
			this->dtpSearcherDate->TabIndex = 60;
			// 
			// dgvSearcherList
			// 
			this->dgvSearcherList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSearcherList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->dgvRequestId,
					this->dgvRequestPetOwner, this->dgvRequestPetKind, this->dgvRequestPet, this->dgvRequestService, this->dgvRequestPetDistrict,
					this->dgvRequestDate, this->dgvServiceDate, this->dgvServiceTimeInit, this->dgvServiceTimeEnd, this->dgvRequestStatus
			});
			this->dgvSearcherList->Location = System::Drawing::Point(306, 12);
			this->dgvSearcherList->Name = L"dgvSearcherList";
			this->dgvSearcherList->Size = System::Drawing::Size(883, 421);
			this->dgvSearcherList->TabIndex = 59;
			this->dgvSearcherList->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RequestSearcherForm::dgvSearcherList_CellClick);
			// 
			// dgvRequestId
			// 
			this->dgvRequestId->HeaderText = L"Id";
			this->dgvRequestId->Name = L"dgvRequestId";
			this->dgvRequestId->Width = 60;
			// 
			// dgvRequestPetOwner
			// 
			this->dgvRequestPetOwner->HeaderText = L"Dueño";
			this->dgvRequestPetOwner->Name = L"dgvRequestPetOwner";
			// 
			// dgvRequestPetKind
			// 
			this->dgvRequestPetKind->HeaderText = L"Tipo";
			this->dgvRequestPetKind->Name = L"dgvRequestPetKind";
			this->dgvRequestPetKind->Width = 50;
			// 
			// dgvRequestPet
			// 
			this->dgvRequestPet->HeaderText = L"Mascota";
			this->dgvRequestPet->Name = L"dgvRequestPet";
			this->dgvRequestPet->Width = 60;
			// 
			// dgvRequestService
			// 
			this->dgvRequestService->HeaderText = L"Servicio";
			this->dgvRequestService->Name = L"dgvRequestService";
			this->dgvRequestService->Width = 60;
			// 
			// dgvRequestPetDistrict
			// 
			this->dgvRequestPetDistrict->HeaderText = L"Distrito";
			this->dgvRequestPetDistrict->Name = L"dgvRequestPetDistrict";
			// 
			// dgvRequestDate
			// 
			this->dgvRequestDate->HeaderText = L"Fecha Solicitud";
			this->dgvRequestDate->Name = L"dgvRequestDate";
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
			// dgvServiceTimeEnd
			// 
			this->dgvServiceTimeEnd->HeaderText = L"Hora Final";
			this->dgvServiceTimeEnd->Name = L"dgvServiceTimeEnd";
			this->dgvServiceTimeEnd->Width = 70;
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
			this->label10->Location = System::Drawing::Point(187, 152);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 13);
			this->label10->TabIndex = 58;
			this->label10->Text = L"Hasta:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 152);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 13);
			this->label9->TabIndex = 57;
			this->label9->Text = L"Hora de inicio:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 126);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 13);
			this->label8->TabIndex = 56;
			this->label8->Text = L"Fecha Servicio:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Servicio";
			// 
			// cbSearcherPetKind
			// 
			this->cbSearcherPetKind->FormattingEnabled = true;
			this->cbSearcherPetKind->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Doméstico", L"Exótico" });
			this->cbSearcherPetKind->Location = System::Drawing::Point(104, 12);
			this->cbSearcherPetKind->Name = L"cbSearcherPetKind";
			this->cbSearcherPetKind->Size = System::Drawing::Size(196, 21);
			this->cbSearcherPetKind->TabIndex = 78;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->TabIndex = 77;
			this->label4->Text = L"Tipo de mascota:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 13);
			this->label5->TabIndex = 79;
			this->label5->Text = L"Distrito:";
			// 
			// cbSearcherPet
			// 
			this->cbSearcherPet->FormattingEnabled = true;
			this->cbSearcherPet->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Perro", L"Gato", L"Loro", L"Conejo" });
			this->cbSearcherPet->Location = System::Drawing::Point(104, 39);
			this->cbSearcherPet->Name = L"cbSearcherPet";
			this->cbSearcherPet->Size = System::Drawing::Size(196, 21);
			this->cbSearcherPet->TabIndex = 80;
			// 
			// cbSearcherDistrict
			// 
			this->cbSearcherDistrict->FormattingEnabled = true;
			this->cbSearcherDistrict->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Lince", L"San Miguel", L"Miraflores",
					L"Pueblo Libre"
			});
			this->cbSearcherDistrict->Location = System::Drawing::Point(104, 93);
			this->cbSearcherDistrict->Name = L"cbSearcherDistrict";
			this->cbSearcherDistrict->Size = System::Drawing::Size(196, 21);
			this->cbSearcherDistrict->TabIndex = 81;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(168, 189);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 82;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RequestSearcherForm::btnCancel_Click);
			// 
			// RequestSearcherForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1200, 445);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->cbSearcherDistrict);
			this->Controls->Add(this->cbSearcherPet);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cbSearcherPetKind);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cbSearcherService);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->dtpSearcherTimeEnd);
			this->Controls->Add(this->dtpSearcherTimeStart);
			this->Controls->Add(this->dtpSearcherDate);
			this->Controls->Add(this->dgvSearcherList);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Name = L"RequestSearcherForm";
			this->Text = L"Buscador de Solicitudes";
			this->Load += gcnew System::EventHandler(this, &RequestSearcherForm::RequestSearcherForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearcherList))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
			void RefreshGrid() {
				List<ServiceRequest^>^ servicerequestList = Controller::QueryAllServiceRequest();
				dgvSearcherList->Rows->Clear();

				for (int i = 0; i < servicerequestList->Count; i++) {
					dgvSearcherList->Rows->Add(gcnew array<String^>{
							  
						"" + servicerequestList[i] -> Id,
							  servicerequestList[i]->PetOwner,
							  servicerequestList[i]->Kind,
							  servicerequestList[i]->Pet,
							  servicerequestList[i]->Service,
							  servicerequestList[i]->District,
						"" + servicerequestList[i]->DateRequest,
			Convert::ToString(servicerequestList[i]->DateService),
			Convert::ToString(servicerequestList[i]->DateServiceInit),
						"" + servicerequestList[i]->DateServiceEnd,
							  servicerequestList[i] -> Status,

					});
				
				}
			}


	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cbSearcherPetKind->Text->Trim() != "") {
			//Busqueda de solicitud por el tipo de mascota
			List <ServiceRequest^> ^requestList = Controller::QueryServiceRequestByPetKind(cbSearcherPetKind->Text->Trim());
			dgvSearcherList->Rows->Clear();
			

			for (int i = 0; i < requestList->Count; i++) {
				dgvSearcherList->Rows->Add(gcnew array<String^>{
					"" + requestList[i]->Id,
						requestList[i]->PetOwner,
						requestList[i]->Kind,
						requestList[i]->Pet,
						requestList[i]->Service,
						requestList[i]->District,
						Convert::ToString(requestList[i]->DateRequest),
						Convert::ToString(requestList[i]->DateService),
						Convert::ToString(requestList[i]->DateServiceInit),
						Convert::ToString(requestList[i]->DateServiceEnd),
						requestList[i]->Status
				});
			}
		}
		else if(cbSearcherPet->Text->Trim() != "") {
			List <ServiceRequest^>^ requestList = Controller::QueryServiceRequestByPet(cbSearcherPet->Text->Trim());
			dgvSearcherList->Rows->Clear();


			for (int i = 0; i < requestList->Count; i++) {
				dgvSearcherList->Rows->Add(gcnew array<String^>{
					"" + requestList[i]->Id,
						requestList[i]->PetOwner,
						requestList[i]->Kind,
						requestList[i]->Pet,
						requestList[i]->Service,
						requestList[i]->District,
						Convert::ToString(requestList[i]->DateRequest),
						Convert::ToString(requestList[i]->DateService),
						Convert::ToString(requestList[i]->DateServiceInit),
						Convert::ToString(requestList[i]->DateServiceEnd),
						requestList[i]->Status
				});
			}
		}
		else if(cbSearcherService->Text->Trim() != "") {
			List <ServiceRequest^>^ requestList = Controller::QueryServiceRequestByService(cbSearcherService->Text->Trim());
			dgvSearcherList->Rows->Clear();


			for (int i = 0; i < requestList->Count; i++) {
				dgvSearcherList->Rows->Add(gcnew array<String^>{
					"" + requestList[i]->Id,
						requestList[i]->PetOwner,
						requestList[i]->Kind,
						requestList[i]->Pet,
						requestList[i]->Service,
						requestList[i]->District,
						Convert::ToString(requestList[i]->DateRequest),
						Convert::ToString(requestList[i]->DateService),
						Convert::ToString(requestList[i]->DateServiceInit),
						Convert::ToString(requestList[i]->DateServiceEnd),
						requestList[i]->Status
				});
			}
		}
		else if (cbSearcherDistrict->Text->Trim() != "") {
			List <ServiceRequest^>^ requestList = Controller::QueryServiceRequestByDistrict(cbSearcherDistrict->Text->Trim());
			dgvSearcherList->Rows->Clear();


			for (int i = 0; i < requestList->Count; i++) {
				dgvSearcherList->Rows->Add(gcnew array<String^>{
					"" + requestList[i]->Id,
						requestList[i]->PetOwner,
						requestList[i]->Kind,
						requestList[i]->Pet,
						requestList[i]->Service,
						requestList[i]->District,
						Convert::ToString(requestList[i]->DateRequest),
						Convert::ToString(requestList[i]->DateService),
						Convert::ToString(requestList[i]->DateServiceInit),
						Convert::ToString(requestList[i]->DateServiceEnd),
						requestList[i]->Status
				});
			}

		}
		else if (dtpSearcherDate->Text->Trim() != "") {
			//Busqueda de solicitud por la fechas
			List <ServiceRequest^>^ requestList = Controller::QueryServiceRequestByServiceDate(dtpSearcherDate->Text->Trim());
			dgvSearcherList->Rows->Clear();


			for (int i = 0; i < requestList->Count; i++) {
				dgvSearcherList->Rows->Add(gcnew array<String^>{
					"" + requestList[i]->Id,
						requestList[i]->PetOwner,
						requestList[i]->Kind,
						requestList[i]->Pet,
						requestList[i]->Service,
						requestList[i]->District,
						Convert::ToString(requestList[i]->DateRequest),
						Convert::ToString(requestList[i]->DateService),
						Convert::ToString(requestList[i]->DateServiceInit),
						Convert::ToString(requestList[i]->DateServiceEnd),
						requestList[i]->Status
				});
			}
		}
		else if (dtpSearcherTimeStart->Text->Trim() != "") {
			//Busqueda de solicitud por horas de inicio
		}
		else if (dtpSearcherTimeEnd->Text->Trim() != "") {
			//Busqueda de solicitud por horas de final
		}
		
	}
private: System::Void dgvSearcherList_CellClick(System::Object^ sender,
	System::Windows::Forms::DataGridViewCellEventArgs^ e);
	

private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void RequestSearcherForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
}
};
}
