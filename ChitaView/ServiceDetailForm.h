#pragma once

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ServiceDetailForm
	/// </summary>
	public ref class ServiceDetailForm : public System::Windows::Forms::Form
	{
	public:
		ServiceDetailForm(void)
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
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
			this->txtRequestAddressEnd->Location = System::Drawing::Point(113, 193);
			this->txtRequestAddressEnd->Name = L"txtRequestAddressEnd";
			this->txtRequestAddressEnd->Size = System::Drawing::Size(196, 20);
			this->txtRequestAddressEnd->TabIndex = 66;
			// 
			// txtRequestAddressStart
			// 
			this->txtRequestAddressStart->Enabled = false;
			this->txtRequestAddressStart->Location = System::Drawing::Point(113, 166);
			this->txtRequestAddressStart->Name = L"txtRequestAddressStart";
			this->txtRequestAddressStart->Size = System::Drawing::Size(196, 20);
			this->txtRequestAddressStart->TabIndex = 65;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 196);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 13);
			this->label12->TabIndex = 64;
			this->label12->Text = L"Dirección Entrega:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 169);
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
			this->dtpServiceTimeEnd->Location = System::Drawing::Point(245, 246);
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
			this->dtpServiceTimeStart->Location = System::Drawing::Point(113, 245);
			this->dtpServiceTimeStart->Name = L"dtpServiceTimeStart";
			this->dtpServiceTimeStart->ShowUpDown = true;
			this->dtpServiceTimeStart->Size = System::Drawing::Size(64, 20);
			this->dtpServiceTimeStart->TabIndex = 60;
			// 
			// dtpServiceDate
			// 
			this->dtpServiceDate->Enabled = false;
			this->dtpServiceDate->Location = System::Drawing::Point(113, 219);
			this->dtpServiceDate->Name = L"dtpServiceDate";
			this->dtpServiceDate->Size = System::Drawing::Size(196, 20);
			this->dtpServiceDate->TabIndex = 59;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(196, 251);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 13);
			this->label10->TabIndex = 58;
			this->label10->Text = L"Hasta:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 251);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 13);
			this->label9->TabIndex = 57;
			this->label9->Text = L"Hora de inicio:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 225);
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(113, 293);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 20);
			this->textBox1->TabIndex = 112;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 296);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 111;
			this->label2->Text = L"Nombre Cuidador:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(113, 319);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 20);
			this->textBox2->TabIndex = 110;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 322);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(64, 13);
			this->label13->TabIndex = 109;
			this->label13->Text = L"Id Cuidador:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(113, 360);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(196, 20);
			this->textBox3->TabIndex = 114;
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
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(113, 386);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(196, 20);
			this->textBox4->TabIndex = 116;
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
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(113, 412);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(196, 20);
			this->textBox5->TabIndex = 118;
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
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(184, 447);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 120;
			this->btnUpdate->Text = L"Cancelar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(70, 447);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 119;
			this->btnAdd->Text = L"¡Cuidar!";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// ServiceDetailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(328, 490);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
