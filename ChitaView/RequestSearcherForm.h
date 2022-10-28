#pragma once

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RequestSearcherForm
	/// </summary>
	public ref class RequestSearcherForm : public System::Windows::Forms::Form
	{
	public:
		RequestSearcherForm(void)
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
		~RequestSearcherForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtpRequestDate;
	protected:
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::TextBox^ txtRequestAddressEnd;
	private: System::Windows::Forms::TextBox^ txtRequestAddressStart;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ cbRequestServices;
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
	private: System::Windows::Forms::ComboBox^ cbPetKind;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestPetKind;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestPet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestService;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestPetDistrict;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvRequestDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvServiceDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvServiceTimeInit;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

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
			this->dtpRequestDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtRequestAddressEnd = (gcnew System::Windows::Forms::TextBox());
			this->txtRequestAddressStart = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->cbRequestServices = (gcnew System::Windows::Forms::ComboBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->dtpServiceTimeEnd = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpServiceTimeStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpServiceDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->dgvPetForm = (gcnew System::Windows::Forms::DataGridView());
			this->dgvRequestId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestPetKind = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestPet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestService = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestPetDistrict = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRequestDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvServiceDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvServiceTimeInit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbPetKind = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPetForm))->BeginInit();
			this->SuspendLayout();
			// 
			// dtpRequestDate
			// 
			this->dtpRequestDate->Location = System::Drawing::Point(126, 12);
			this->dtpRequestDate->Name = L"dtpRequestDate";
			this->dtpRequestDate->Size = System::Drawing::Size(196, 20);
			this->dtpRequestDate->TabIndex = 76;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 75;
			this->label3->Text = L"Fecha Solicitud:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 73;
			this->label2->Text = L"Mascota:";
			// 
			// txtRequestAddressEnd
			// 
			this->txtRequestAddressEnd->Location = System::Drawing::Point(126, 172);
			this->txtRequestAddressEnd->Name = L"txtRequestAddressEnd";
			this->txtRequestAddressEnd->Size = System::Drawing::Size(196, 20);
			this->txtRequestAddressEnd->TabIndex = 70;
			// 
			// txtRequestAddressStart
			// 
			this->txtRequestAddressStart->Location = System::Drawing::Point(126, 146);
			this->txtRequestAddressStart->Name = L"txtRequestAddressStart";
			this->txtRequestAddressStart->Size = System::Drawing::Size(196, 20);
			this->txtRequestAddressStart->TabIndex = 69;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(25, 175);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 13);
			this->label12->TabIndex = 68;
			this->label12->Text = L"Dirección Entrega:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(25, 149);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(90, 13);
			this->label11->TabIndex = 67;
			this->label11->Text = L"Dirección  Salida:";
			// 
			// cbRequestServices
			// 
			this->cbRequestServices->FormattingEnabled = true;
			this->cbRequestServices->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Paseo", L"Cuidado", L"Transporte" });
			this->cbRequestServices->Location = System::Drawing::Point(126, 92);
			this->cbRequestServices->Name = L"cbRequestServices";
			this->cbRequestServices->Size = System::Drawing::Size(196, 21);
			this->cbRequestServices->TabIndex = 66;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(195, 263);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 64;
			this->btnUpdate->Text = L"¡Cuidar!";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(86, 263);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 63;
			this->btnAdd->Text = L"Buscar";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// dtpServiceTimeEnd
			// 
			this->dtpServiceTimeEnd->CustomFormat = L"HH:mm";
			this->dtpServiceTimeEnd->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpServiceTimeEnd->Location = System::Drawing::Point(258, 224);
			this->dtpServiceTimeEnd->Name = L"dtpServiceTimeEnd";
			this->dtpServiceTimeEnd->ShowUpDown = true;
			this->dtpServiceTimeEnd->Size = System::Drawing::Size(64, 20);
			this->dtpServiceTimeEnd->TabIndex = 62;
			// 
			// dtpServiceTimeStart
			// 
			this->dtpServiceTimeStart->CustomFormat = L"HH:mm";
			this->dtpServiceTimeStart->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpServiceTimeStart->Location = System::Drawing::Point(126, 224);
			this->dtpServiceTimeStart->Name = L"dtpServiceTimeStart";
			this->dtpServiceTimeStart->ShowUpDown = true;
			this->dtpServiceTimeStart->Size = System::Drawing::Size(64, 20);
			this->dtpServiceTimeStart->TabIndex = 61;
			// 
			// dtpServiceDate
			// 
			this->dtpServiceDate->Location = System::Drawing::Point(126, 198);
			this->dtpServiceDate->Name = L"dtpServiceDate";
			this->dtpServiceDate->Size = System::Drawing::Size(196, 20);
			this->dtpServiceDate->TabIndex = 60;
			// 
			// dgvPetForm
			// 
			this->dgvPetForm->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPetForm->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dgvRequestId,
					this->dgvRequestPetKind, this->dgvRequestPet, this->dgvRequestService, this->dgvRequestPetDistrict, this->dgvRequestDate, this->dgvServiceDate,
					this->dgvServiceTimeInit
			});
			this->dgvPetForm->Location = System::Drawing::Point(342, 12);
			this->dgvPetForm->Name = L"dgvPetForm";
			this->dgvPetForm->Size = System::Drawing::Size(644, 421);
			this->dgvPetForm->TabIndex = 59;
			// 
			// dgvRequestId
			// 
			this->dgvRequestId->HeaderText = L"Id";
			this->dgvRequestId->Name = L"dgvRequestId";
			this->dgvRequestId->Width = 60;
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
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(209, 230);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 13);
			this->label10->TabIndex = 58;
			this->label10->Text = L"Hasta:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(25, 230);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 13);
			this->label9->TabIndex = 57;
			this->label9->Text = L"Hora de inicio:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(25, 204);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 13);
			this->label8->TabIndex = 56;
			this->label8->Text = L"Fecha Servicio:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Servicio";
			// 
			// cbPetKind
			// 
			this->cbPetKind->FormattingEnabled = true;
			this->cbPetKind->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Doméstico", L"Exótico" });
			this->cbPetKind->Location = System::Drawing::Point(126, 38);
			this->cbPetKind->Name = L"cbPetKind";
			this->cbPetKind->Size = System::Drawing::Size(196, 21);
			this->cbPetKind->TabIndex = 78;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->TabIndex = 77;
			this->label4->Text = L"Tipo de mascota:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 122);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 13);
			this->label5->TabIndex = 79;
			this->label5->Text = L"Distrito:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Paseo", L"Cuidado", L"Transporte" });
			this->comboBox1->Location = System::Drawing::Point(126, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(196, 21);
			this->comboBox1->TabIndex = 80;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Paseo", L"Cuidado", L"Transporte" });
			this->comboBox2->Location = System::Drawing::Point(126, 119);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(196, 21);
			this->comboBox2->TabIndex = 81;
			// 
			// RequestSearcherForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(996, 445);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cbPetKind);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dtpRequestDate);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtRequestAddressEnd);
			this->Controls->Add(this->txtRequestAddressStart);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->cbRequestServices);
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
			this->Name = L"RequestSearcherForm";
			this->Text = L"Buscador de Solicitudes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPetForm))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
