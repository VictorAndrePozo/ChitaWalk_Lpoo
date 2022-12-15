#pragma once
#include "RequestSearcherForm.h"


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
	/// Resumen de CarerWorkForm
	/// </summary>
	public ref class CarerWorkForm : public System::Windows::Forms::Form
	{

	public:
		CarerWorkForm(void)
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
		~CarerWorkForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::DataGridView^ dgvCarerForm;




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
	private: System::Windows::Forms::Button^ btnRefresh;

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
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->dgvCarerForm = (gcnew System::Windows::Forms::DataGridView());
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
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCarerForm))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(12, 146);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(75, 23);
			this->btnSearch->TabIndex = 90;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &CarerWorkForm::btnSearch_Click);
			// 
			// dgvCarerForm
			// 
			this->dgvCarerForm->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCarerForm->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->dgvRequestId,
					this->dgvRequestPetOwner, this->dgvRequestPetKind, this->dgvRequestPet, this->dgvRequestService, this->dgvRequestPetDistrict,
					this->dgvRequestDate, this->dgvServiceDate, this->dgvServiceTimeInit, this->dgvServiceTimeEnd, this->dgvRequestStatus
			});
			this->dgvCarerForm->Location = System::Drawing::Point(105, 12);
			this->dgvCarerForm->Name = L"dgvCarerForm";
			this->dgvCarerForm->Size = System::Drawing::Size(883, 421);
			this->dgvCarerForm->TabIndex = 86;
			this->dgvCarerForm->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CarerWorkForm::dgvCarerForm_CellClick);
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
			// btnRefresh
			// 
			this->btnRefresh->Location = System::Drawing::Point(12, 193);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(75, 23);
			this->btnRefresh->TabIndex = 91;
			this->btnRefresh->Text = L"Refrescar";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &CarerWorkForm::btnRefresh_Click);
			// 
			// CarerWorkForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 443);
			this->Controls->Add(this->btnRefresh);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->dgvCarerForm);
			this->Name = L"CarerWorkForm";
			this->Text = L"Cuidados Pendientes";
			this->Load += gcnew System::EventHandler(this, &CarerWorkForm::CarerWorkForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCarerForm))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void RefreshGrid() {
			List<ServiceRequest^>^ servicerequestList = Controller::QueryAllServiceRequest();

			dgvCarerForm->Rows->Clear();

			for (int i = 0; i < servicerequestList->Count; i++) {
				if (servicerequestList[i]->Status == "Aceptado" || servicerequestList[i]->Status == "Pendiente") {
					dgvCarerForm->Rows->Add(gcnew array<String^>{
						"" + servicerequestList[i]->Id,
							servicerequestList[i]->PetOwner,
							servicerequestList[i]->Kind,
							servicerequestList[i]->Pet,
							servicerequestList[i]->Service,
							servicerequestList[i]->District,
							"" + servicerequestList[i]->DateRequest,
							Convert::ToString(servicerequestList[i]->DateService),
							Convert::ToString(servicerequestList[i]->DateServiceInit),
							"" + servicerequestList[i]->DateServiceEnd,
							servicerequestList[i]->Status,
					});
				}

			}
		}
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		RequestSearcherForm^ requestSearcherForm = gcnew RequestSearcherForm(this);		//Crear form.
		requestSearcherForm->ShowDialog();
	}
	public: void AddRequestToCarerWork(ServiceRequest^ sr) {
		dgvCarerForm->Rows->Add(gcnew array<String^>{
			Convert::ToString(sr->Id),
				sr->PetOwner,
				sr->Kind,
				sr->Pet,
				sr->Service,
				sr->District,
				Convert::ToString(sr->DateRequest),
				Convert::ToString(sr->DateService),
				Convert::ToString(sr->DateServiceInit),
				Convert::ToString(sr->DateServiceEnd), 
				sr->Status
		});
	}
	private: System::Void CarerWorkForm_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshGrid();
	}

	/*NOTA: ESTE EVENTO ES POR CLICK EN EL CONTENIDO DEL DVG
	private: System::Void dgvCarerForm_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	}*/
	private: System::Void dgvCarerForm_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		/*NOTA: DESARROLLO PARA PODER VER EL DETAIL DESDE CARERWORKFORM*/
		if (e->RowIndex < 0) return;
		if (e->RowIndex >= 0) {

			String^ requestId = dgvCarerForm->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			ServiceRequest^ sr = Controller::QueryServiceRequestById(Int32::Parse(requestId));
			int statusflag = 0;

			ServiceRequest^ srn = gcnew ServiceRequest();
			srn->PetOwner = sr->PetOwner;
			srn->Id = sr->Id;
			srn->DateRequest = sr->DateRequest;
			srn->Kind = sr->Kind;
			srn->Pet = sr->Pet;
			srn->Service = sr->Service;
			srn->District = sr->District;
			srn->AdressStart = sr->AdressStart;
			srn->AdressEnd = sr->AdressEnd;
			srn->DateService = sr->DateService;
			srn->DateServiceInit = sr->DateServiceInit;
			srn->DateServiceEnd = sr->DateServiceEnd;

			srn->Carer = sr->Carer;
			srn->CarerId = sr->CarerId;
			srn->SubTotal = sr->SubTotal;
			srn->IGV = sr->IGV;
			srn->TotalAmount = sr->TotalAmount;

			if (sr->Status == "Espera") {
				statusflag = 1;
				srn->Status = "Seleccionado";
			}
			if (sr->Status == "Pendiente") {
				statusflag = 2;
				srn->Status = "Seleccionado";
			}
			if (sr->Status == "Aceptado") {
				statusflag = 3;
				srn->Status = "Seleccionado";
			}
			srn->previousForm = "CarerWorkForm";
			Controller::UpdateServiceRequest(srn);

			ServiceDetailForm^ serviceDetailForm = gcnew ServiceDetailForm(this);
			serviceDetailForm->ShowDialog();

			switch (statusflag)
			{
			case 1:	srn->Status = "Espera";
				break;
			case 2:	srn->Status = "Pendiente";
				break;
			case 3:	srn->Status = "Aceptado";
				break;
			default:
				break;
			}

			Controller::UpdateServiceRequest(srn);
		}
	}
private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
}
};
}