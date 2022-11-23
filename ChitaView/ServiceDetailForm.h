//#include "RequestSearcherForm.h"
#pragma once
#include "RankingForm.h"

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
	/// Resumen de ServiceDetailForm
	/// </summary>
	public ref class ServiceDetailForm : public System::Windows::Forms::Form
	{
		Form^ refForm;
	public:
		ServiceDetailForm(Form^ form)
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
		~ServiceDetailForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtpRequestDate;
	protected:
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::TextBox^ txtRequestId;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtRequestAddressEnd;
	private: System::Windows::Forms::TextBox^ txtRequestAddressStart;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ cbRequestServices;
	private: System::Windows::Forms::DateTimePicker^ dtpServiceTimeEnd;
	private: System::Windows::Forms::DateTimePicker^ dtpServiceTimeStart;
	private: System::Windows::Forms::DateTimePicker^ dtpServiceDate;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cbRequestPet;
	private: System::Windows::Forms::ComboBox^ cbRequestPetKind;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtRequestPetOwner;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtRequestCarer;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtRequestCarerId;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtRequestSubTotal;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtRequestIGV;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtRequestTotalAmount;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ btnCancel;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::ComboBox^ cbRequestDistrict;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ btnCancelService;

	private: System::Windows::Forms::Button^ btnFinishService;

	private: System::Windows::Forms::Button^ btnStartService;

	private: System::Windows::Forms::Label^ label18;

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
			this->dtpRequestDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtRequestId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtRequestAddressEnd = (gcnew System::Windows::Forms::TextBox());
			this->txtRequestAddressStart = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->cbRequestServices = (gcnew System::Windows::Forms::ComboBox());
			this->dtpServiceTimeEnd = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpServiceTimeStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpServiceDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbRequestPet = (gcnew System::Windows::Forms::ComboBox());
			this->cbRequestPetKind = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtRequestPetOwner = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtRequestCarer = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtRequestCarerId = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtRequestSubTotal = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtRequestIGV = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtRequestTotalAmount = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->cbRequestDistrict = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnCancelService = (gcnew System::Windows::Forms::Button());
			this->btnFinishService = (gcnew System::Windows::Forms::Button());
			this->btnStartService = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dtpRequestDate
			// 
			this->dtpRequestDate->Enabled = false;
			this->dtpRequestDate->Location = System::Drawing::Point(113, 58);
			this->dtpRequestDate->Name = L"dtpRequestDate";
			this->dtpRequestDate->Size = System::Drawing::Size(196, 20);
			this->dtpRequestDate->TabIndex = 72;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 71;
			this->label3->Text = L"Fecha Solicitud:";
			// 
			// txtRequestId
			// 
			this->txtRequestId->Enabled = false;
			this->txtRequestId->Location = System::Drawing::Point(113, 32);
			this->txtRequestId->Name = L"txtRequestId";
			this->txtRequestId->Size = System::Drawing::Size(196, 20);
			this->txtRequestId->TabIndex = 68;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 67;
			this->label1->Text = L"Id Solicitud:";
			// 
			// txtRequestAddressEnd
			// 
			this->txtRequestAddressEnd->Enabled = false;
			this->txtRequestAddressEnd->Location = System::Drawing::Point(113, 219);
			this->txtRequestAddressEnd->Name = L"txtRequestAddressEnd";
			this->txtRequestAddressEnd->Size = System::Drawing::Size(196, 20);
			this->txtRequestAddressEnd->TabIndex = 66;
			// 
			// txtRequestAddressStart
			// 
			this->txtRequestAddressStart->Enabled = false;
			this->txtRequestAddressStart->Location = System::Drawing::Point(113, 192);
			this->txtRequestAddressStart->Name = L"txtRequestAddressStart";
			this->txtRequestAddressStart->Size = System::Drawing::Size(196, 20);
			this->txtRequestAddressStart->TabIndex = 65;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 222);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 13);
			this->label12->TabIndex = 64;
			this->label12->Text = L"Dirección Entrega:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 195);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(90, 13);
			this->label11->TabIndex = 63;
			this->label11->Text = L"Dirección  Salida:";
			// 
			// cbRequestServices
			// 
			this->cbRequestServices->Enabled = false;
			this->cbRequestServices->FormattingEnabled = true;
			this->cbRequestServices->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Paseo", L"Cuidado", L"Transporte" });
			this->cbRequestServices->Location = System::Drawing::Point(113, 138);
			this->cbRequestServices->Name = L"cbRequestServices";
			this->cbRequestServices->Size = System::Drawing::Size(196, 21);
			this->cbRequestServices->TabIndex = 62;
			// 
			// dtpServiceTimeEnd
			// 
			this->dtpServiceTimeEnd->CustomFormat = L"HH:mm";
			this->dtpServiceTimeEnd->Enabled = false;
			this->dtpServiceTimeEnd->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpServiceTimeEnd->Location = System::Drawing::Point(245, 272);
			this->dtpServiceTimeEnd->Name = L"dtpServiceTimeEnd";
			this->dtpServiceTimeEnd->ShowUpDown = true;
			this->dtpServiceTimeEnd->Size = System::Drawing::Size(64, 20);
			this->dtpServiceTimeEnd->TabIndex = 61;
			// 
			// dtpServiceTimeStart
			// 
			this->dtpServiceTimeStart->CustomFormat = L"HH:mm";
			this->dtpServiceTimeStart->Enabled = false;
			this->dtpServiceTimeStart->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpServiceTimeStart->Location = System::Drawing::Point(113, 271);
			this->dtpServiceTimeStart->Name = L"dtpServiceTimeStart";
			this->dtpServiceTimeStart->ShowUpDown = true;
			this->dtpServiceTimeStart->Size = System::Drawing::Size(64, 20);
			this->dtpServiceTimeStart->TabIndex = 60;
			// 
			// dtpServiceDate
			// 
			this->dtpServiceDate->Enabled = false;
			this->dtpServiceDate->Location = System::Drawing::Point(113, 245);
			this->dtpServiceDate->Name = L"dtpServiceDate";
			this->dtpServiceDate->Size = System::Drawing::Size(196, 20);
			this->dtpServiceDate->TabIndex = 59;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Enabled = false;
			this->label10->Location = System::Drawing::Point(196, 277);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 13);
			this->label10->TabIndex = 58;
			this->label10->Text = L"Hasta:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 277);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 13);
			this->label9->TabIndex = 57;
			this->label9->Text = L"Hora de inicio:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 251);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 13);
			this->label8->TabIndex = 56;
			this->label8->Text = L"Fecha Servicio:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 141);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Servicio";
			// 
			// cbRequestPet
			// 
			this->cbRequestPet->Enabled = false;
			this->cbRequestPet->FormattingEnabled = true;
			this->cbRequestPet->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Paseo", L"Cuidado", L"Transporte" });
			this->cbRequestPet->Location = System::Drawing::Point(113, 111);
			this->cbRequestPet->Name = L"cbRequestPet";
			this->cbRequestPet->Size = System::Drawing::Size(196, 21);
			this->cbRequestPet->TabIndex = 106;
			// 
			// cbRequestPetKind
			// 
			this->cbRequestPetKind->Enabled = false;
			this->cbRequestPetKind->FormattingEnabled = true;
			this->cbRequestPetKind->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Paseo", L"Cuidado", L"Transporte" });
			this->cbRequestPetKind->Location = System::Drawing::Point(113, 84);
			this->cbRequestPetKind->Name = L"cbRequestPetKind";
			this->cbRequestPetKind->Size = System::Drawing::Size(196, 21);
			this->cbRequestPetKind->TabIndex = 105;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 13);
			this->label4->TabIndex = 104;
			this->label4->Text = L"Tipo de Mascota:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 13);
			this->label6->TabIndex = 101;
			this->label6->Text = L"Mascota:";
			// 
			// txtRequestPetOwner
			// 
			this->txtRequestPetOwner->Enabled = false;
			this->txtRequestPetOwner->Location = System::Drawing::Point(113, 6);
			this->txtRequestPetOwner->Name = L"txtRequestPetOwner";
			this->txtRequestPetOwner->Size = System::Drawing::Size(196, 20);
			this->txtRequestPetOwner->TabIndex = 108;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 13);
			this->label5->TabIndex = 107;
			this->label5->Text = L"Nombre Dueño:";
			// 
			// txtRequestCarer
			// 
			this->txtRequestCarer->Location = System::Drawing::Point(113, 308);
			this->txtRequestCarer->Name = L"txtRequestCarer";
			this->txtRequestCarer->Size = System::Drawing::Size(196, 20);
			this->txtRequestCarer->TabIndex = 112;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 311);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 111;
			this->label2->Text = L"Nombre Cuidador:";
			// 
			// txtRequestCarerId
			// 
			this->txtRequestCarerId->Location = System::Drawing::Point(113, 334);
			this->txtRequestCarerId->Name = L"txtRequestCarerId";
			this->txtRequestCarerId->Size = System::Drawing::Size(196, 20);
			this->txtRequestCarerId->TabIndex = 110;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 337);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(64, 13);
			this->label13->TabIndex = 109;
			this->label13->Text = L"Id Cuidador:";
			// 
			// txtRequestSubTotal
			// 
			this->txtRequestSubTotal->Location = System::Drawing::Point(113, 360);
			this->txtRequestSubTotal->Name = L"txtRequestSubTotal";
			this->txtRequestSubTotal->Size = System::Drawing::Size(196, 20);
			this->txtRequestSubTotal->TabIndex = 114;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(12, 363);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(56, 13);
			this->label14->TabIndex = 113;
			this->label14->Text = L"Sub Total:";
			// 
			// txtRequestIGV
			// 
			this->txtRequestIGV->Location = System::Drawing::Point(113, 386);
			this->txtRequestIGV->Name = L"txtRequestIGV";
			this->txtRequestIGV->Size = System::Drawing::Size(196, 20);
			this->txtRequestIGV->TabIndex = 116;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 389);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 13);
			this->label15->TabIndex = 115;
			this->label15->Text = L"I.G.V:";
			// 
			// txtRequestTotalAmount
			// 
			this->txtRequestTotalAmount->Location = System::Drawing::Point(113, 412);
			this->txtRequestTotalAmount->Name = L"txtRequestTotalAmount";
			this->txtRequestTotalAmount->Size = System::Drawing::Size(196, 20);
			this->txtRequestTotalAmount->TabIndex = 118;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(12, 415);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 13);
			this->label16->TabIndex = 117;
			this->label16->Text = L"Total:";
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(184, 447);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 120;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ServiceDetailForm::btnCancel_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(70, 447);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 119;
			this->btnAdd->Text = L"¡Cuidar!";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ServiceDetailForm::btnAdd_Click);
			// 
			// cbRequestDistrict
			// 
			this->cbRequestDistrict->Enabled = false;
			this->cbRequestDistrict->FormattingEnabled = true;
			this->cbRequestDistrict->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Lince", L"San Miguel", L"Miraflores",
					L"Pueblo Libre"
			});
			this->cbRequestDistrict->Location = System::Drawing::Point(113, 165);
			this->cbRequestDistrict->Name = L"cbRequestDistrict";
			this->cbRequestDistrict->Size = System::Drawing::Size(196, 21);
			this->cbRequestDistrict->TabIndex = 122;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(12, 168);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(42, 13);
			this->label17->TabIndex = 121;
			this->label17->Text = L"Distrito:";
			// 
			// btnCancelService
			// 
			this->btnCancelService->Location = System::Drawing::Point(234, 498);
			this->btnCancelService->Name = L"btnCancelService";
			this->btnCancelService->Size = System::Drawing::Size(75, 34);
			this->btnCancelService->TabIndex = 125;
			this->btnCancelService->Text = L"Cancelar Servicio";
			this->btnCancelService->UseVisualStyleBackColor = true;
			this->btnCancelService->Click += gcnew System::EventHandler(this, &ServiceDetailForm::btnCancelService_Click);
			// 
			// btnFinishService
			// 
			this->btnFinishService->Location = System::Drawing::Point(124, 498);
			this->btnFinishService->Name = L"btnFinishService";
			this->btnFinishService->Size = System::Drawing::Size(75, 34);
			this->btnFinishService->TabIndex = 124;
			this->btnFinishService->Text = L"Finalizar Servicio";
			this->btnFinishService->UseVisualStyleBackColor = true;
			this->btnFinishService->Click += gcnew System::EventHandler(this, &ServiceDetailForm::btnFinishService_Click);
			// 
			// btnStartService
			// 
			this->btnStartService->Location = System::Drawing::Point(15, 498);
			this->btnStartService->Name = L"btnStartService";
			this->btnStartService->Size = System::Drawing::Size(75, 34);
			this->btnStartService->TabIndex = 123;
			this->btnStartService->Text = L"Iniciar Servicio";
			this->btnStartService->UseVisualStyleBackColor = true;
			this->btnStartService->Click += gcnew System::EventHandler(this, &ServiceDetailForm::btnStartService_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Enabled = false;
			this->label18->Location = System::Drawing::Point(12, 473);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(301, 13);
			this->label18->TabIndex = 126;
			this->label18->Text = L"_________________________________________________";
			// 
			// ServiceDetailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(328, 537);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->btnCancelService);
			this->Controls->Add(this->btnFinishService);
			this->Controls->Add(this->btnStartService);
			this->Controls->Add(this->cbRequestDistrict);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtRequestTotalAmount);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->txtRequestIGV);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->txtRequestSubTotal);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txtRequestCarer);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtRequestCarerId);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txtRequestPetOwner);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cbRequestPet);
			this->Controls->Add(this->cbRequestPetKind);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dtpRequestDate);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtRequestId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtRequestAddressEnd);
			this->Controls->Add(this->txtRequestAddressStart);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->cbRequestServices);
			this->Controls->Add(this->dtpServiceTimeEnd);
			this->Controls->Add(this->dtpServiceTimeStart);
			this->Controls->Add(this->dtpServiceDate);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Name = L"ServiceDetailForm";
			this->Text = L"Detalle de Servicio";
			this->Load += gcnew System::EventHandler(this, &ServiceDetailForm::ServiceDetailForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: 
	void RefreshDetail() {
		ServiceRequest^ sr = Controller::QueryServiceRequestByStatus("Seleccionado");
		
		txtRequestPetOwner->Text = sr->PetOwner;
		txtRequestId->Text = "" + sr->Id;
		dtpRequestDate->Text = sr->DateRequest->ToString();
		cbRequestPetKind->Text = sr->Kind;
		cbRequestPet->Text = sr->Pet;
		cbRequestServices->Text = sr->Service;
		cbRequestDistrict->Text = sr->District;
		txtRequestAddressStart->Text = sr->AdressStart;
		txtRequestAddressEnd->Text = sr->AdressEnd;

		dtpServiceDate->Text = sr->DateService->ToString();
		dtpServiceTimeStart->Text = sr->DateServiceInit->ToString();
		dtpServiceTimeEnd->Text = sr->DateServiceEnd->ToString();
		
		txtRequestCarer->Text = sr->Carer;
		txtRequestCarerId->Text = "" + sr->CarerId;

		txtRequestSubTotal->Text = "" + sr->SubTotal;
		txtRequestIGV->Text = "" + sr->IGV;
		txtRequestTotalAmount->Text = "" + sr->TotalAmount ;
		
	}
    void ViewDetail() {
		ServiceRequest^ sr = Controller::QueryServiceRequestByStatus("Visto");
		txtRequestPetOwner->Text = sr->PetOwner;
		txtRequestId->Text = "" + sr->Id;
		dtpRequestDate->Text = sr->DateRequest->ToString();
		cbRequestPetKind->Text = sr->Kind;
		cbRequestPet->Text = sr->Pet;
		cbRequestServices->Text = sr->Service;
		cbRequestDistrict->Text = sr->District;
		txtRequestAddressStart->Text = sr->AdressStart;
		txtRequestAddressEnd->Text = sr->AdressEnd;
		
		dtpServiceDate->Text = sr->DateService->ToString();
		dtpServiceTimeStart->Text = sr->DateServiceInit->ToString();
		dtpServiceTimeEnd->Text = sr->DateServiceEnd->ToString();

		txtRequestCarer->Text = sr->Carer;
		txtRequestCarerId->Text = "" + sr->CarerId;

		txtRequestSubTotal->Text = "" + sr->SubTotal;
		txtRequestIGV->Text = "" + sr->IGV;
		txtRequestTotalAmount->Text = "" + sr->TotalAmount;

	 }

		Void ClearControls() {
			
			txtRequestPetOwner->Text = "";
			txtRequestId->Text = "" ;
			dtpRequestDate->Text = "";
			cbRequestPetKind->Text = "";
			cbRequestPet->Text = "";
			cbRequestServices->Text = "";
			cbRequestDistrict->Text = "";
			txtRequestAddressStart->Text = "";
			txtRequestAddressEnd->Text = "";

			dtpServiceDate->Text = "";
			dtpServiceTimeStart->Text = "";
			dtpServiceTimeEnd->Text = "";
		}

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	
		ServiceRequest^ sr = gcnew ServiceRequest();
		sr->PetOwner = txtRequestPetOwner->Text;
		sr->Id = Int32::Parse(txtRequestId->Text);
		sr->DateRequest = dtpRequestDate->Value.ToString("dd-MM-yyyy");
		sr->Kind = cbRequestPetKind->Text;
		sr->Pet = cbRequestPet->Text;				//Toma el Texto de txtName y lo carga en Name de p.
		sr->Service = cbRequestServices->Text;
		sr->District = cbRequestDistrict->Text;
		sr->AdressStart = txtRequestAddressStart->Text;
		sr->AdressEnd = txtRequestAddressEnd->Text;
		sr->DateService = dtpRequestDate->Value.ToString("dd-MM-yyyy");
		sr->DateServiceInit = dtpServiceTimeStart->Value.ToString("HH:mm");
		sr->DateServiceEnd = dtpServiceTimeEnd->Value.ToString("HH:mm");

		sr->Carer = txtRequestCarer->Text;
		sr->CarerId = Int32::Parse(txtRequestCarerId->Text);
		sr->SubTotal = Int32::Parse(txtRequestSubTotal->Text);
		sr->IGV = Int32::Parse(txtRequestIGV->Text);
		sr->TotalAmount = Int32::Parse(txtRequestTotalAmount->Text);
		sr->Status = "Aceptado";

		Controller::UpdateServiceRequest(sr);	//Invocamos al controller y agregamos el objeto p.
		this->Close();
	}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	ServiceRequest^ sr = gcnew ServiceRequest();
	
	sr->PetOwner = txtRequestPetOwner->Text;
	sr->Id = Int32::Parse(txtRequestId->Text);
	sr->DateRequest = dtpRequestDate->Value.ToString("dd-MM-yyyy");
	sr->Kind = cbRequestPetKind->Text;
	sr->Pet = cbRequestPet->Text;				//Toma el Texto de txtName y lo carga en Name de p.
	sr->Service = cbRequestServices->Text;
	sr->District = cbRequestDistrict->Text;
	sr->AdressStart = txtRequestAddressStart->Text;
	sr->AdressEnd = txtRequestAddressEnd->Text;
	sr->DateService = dtpRequestDate->Value.ToString("dd-MM-yyyy");
	sr->DateServiceInit = dtpServiceTimeStart->Value.ToString("HH:mm");
	sr->DateServiceEnd = dtpServiceTimeEnd->Value.ToString("HH:mm");

	sr->Carer = txtRequestCarer->Text;
	sr->CarerId = Int32::Parse(txtRequestCarerId->Text);
	sr->SubTotal = Int32::Parse(txtRequestSubTotal->Text);
	sr->IGV = Int32::Parse(txtRequestIGV->Text);
	sr->TotalAmount = Int32::Parse(txtRequestTotalAmount->Text);
	
	sr->Status = "Espera";
	Controller::UpdateServiceRequest(sr);
	
	this->Close();
}
private: System::Void ServiceDetailForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//RefreshDetail();
}
private: System::Void btnStartService_Click(System::Object^ sender, System::EventArgs^ e) {
	ServiceRequest^ sr = gcnew ServiceRequest();

	sr->PetOwner = txtRequestPetOwner->Text;
	sr->Id = Int32::Parse(txtRequestId->Text);
	sr->DateRequest = dtpRequestDate->Value.ToString("dd-MM-yyyy");
	sr->Kind = cbRequestPetKind->Text;
	sr->Pet = cbRequestPet->Text;				//Toma el Texto de txtName y lo carga en Name de p.
	sr->Service = cbRequestServices->Text;
	sr->District = cbRequestDistrict->Text;
	sr->AdressStart = txtRequestAddressStart->Text;
	sr->AdressEnd = txtRequestAddressEnd->Text;
	sr->DateService = dtpRequestDate->Value.ToString("dd-MM-yyyy");
	sr->DateServiceInit = dtpServiceTimeStart->Value.ToString("HH:mm");
	sr->DateServiceEnd = dtpServiceTimeEnd->Value.ToString("HH:mm");

	sr->Carer = txtRequestCarer->Text;
	sr->CarerId = Int32::Parse(txtRequestCarerId->Text);
	sr->SubTotal = Int32::Parse(txtRequestSubTotal->Text);
	sr->IGV = Int32::Parse(txtRequestIGV->Text);
	sr->TotalAmount = Int32::Parse(txtRequestTotalAmount->Text);

	sr->Status = "Iniciado";
	Controller::UpdateServiceRequest(sr);

	this->Close();

}
private: System::Void btnFinishService_Click(System::Object^ sender, System::EventArgs^ e) {
	/*NOTA:COMENTADO HASTA SOLUCIONAR REFRESHDETAIL
	ServiceRequest^ sr = gcnew ServiceRequest();

	sr->PetOwner = txtRequestPetOwner->Text;
	sr->Id = Int32::Parse(txtRequestId->Text);
	sr->DateRequest = dtpRequestDate->Value.ToString("dd-MM-yyyy");
	sr->Kind = cbRequestPetKind->Text;
	sr->Pet = cbRequestPet->Text;				//Toma el Texto de txtName y lo carga en Name de p.
	sr->Service = cbRequestServices->Text;
	sr->District = cbRequestDistrict->Text;
	sr->AdressStart = txtRequestAddressStart->Text;
	sr->AdressEnd = txtRequestAddressEnd->Text;
	sr->DateService = dtpRequestDate->Value.ToString("dd-MM-yyyy");
	sr->DateServiceInit = dtpServiceTimeStart->Value.ToString("HH:mm");
	sr->DateServiceEnd = dtpServiceTimeEnd->Value.ToString("HH:mm");

	sr->Carer = txtRequestCarer->Text;
	sr->CarerId = Int32::Parse(txtRequestCarerId->Text);
	sr->SubTotal = Int32::Parse(txtRequestSubTotal->Text);
	sr->IGV = Int32::Parse(txtRequestIGV->Text);
	sr->TotalAmount = Int32::Parse(txtRequestTotalAmount->Text);

	sr->Status = "Terminado";
	Controller::UpdateServiceRequest(sr);*/

	RankingForm^ rankingForm = gcnew RankingForm();
	rankingForm->ShowDialog();

	this->Close();

}
private: System::Void btnCancelService_Click(System::Object^ sender, System::EventArgs^ e) {
	ServiceRequest^ sr = gcnew ServiceRequest();

	sr->PetOwner = txtRequestPetOwner->Text;
	sr->Id = Int32::Parse(txtRequestId->Text);
	sr->DateRequest = dtpRequestDate->Value.ToString("dd-MM-yyyy");
	sr->Kind = cbRequestPetKind->Text;
	sr->Pet = cbRequestPet->Text;				//Toma el Texto de txtName y lo carga en Name de p.
	sr->Service = cbRequestServices->Text;
	sr->District = cbRequestDistrict->Text;
	sr->AdressStart = txtRequestAddressStart->Text;
	sr->AdressEnd = txtRequestAddressEnd->Text;
	sr->DateService = dtpRequestDate->Value.ToString("dd-MM-yyyy");
	sr->DateServiceInit = dtpServiceTimeStart->Value.ToString("HH:mm");
	sr->DateServiceEnd = dtpServiceTimeEnd->Value.ToString("HH:mm");

	sr->Carer = txtRequestCarer->Text;
	sr->CarerId = Int32::Parse(txtRequestCarerId->Text);
	sr->SubTotal = Int32::Parse(txtRequestSubTotal->Text);
	sr->IGV = Int32::Parse(txtRequestIGV->Text);
	sr->TotalAmount = Int32::Parse(txtRequestTotalAmount->Text);

	sr->Status = "Cancelado";
	Controller::UpdateServiceRequest(sr);

	this->Close();

}
};
}
