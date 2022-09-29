#pragma once

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de carermaintenance
	/// </summary>
	public ref class carermaintenance : public System::Windows::Forms::Form
	{
	public:
		carermaintenance(void)
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
		~carermaintenance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelId;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerdni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carername;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerlastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerposition;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerstatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carergender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerdirection;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ careremail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerusername;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carervaloration;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerlevel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerexperience;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carersalary;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carerwarranty;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ carernombres;

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
			this->labelId = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->carerId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerdni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carername = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerlastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerposition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerstatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carergender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerdirection = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->careremail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerusername = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carervaloration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerlevel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerexperience = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carersalary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carerwarranty = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->carernombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// labelId
			// 
			this->labelId->AutoSize = true;
			this->labelId->Location = System::Drawing::Point(47, 56);
			this->labelId->Name = L"labelId";
			this->labelId->Size = System::Drawing::Size(18, 16);
			this->labelId->TabIndex = 0;
			this->labelId->Text = L"Id";
			this->labelId->Click += gcnew System::EventHandler(this, &carermaintenance::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Dni";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Dirección";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(47, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Correo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(354, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Género";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(49, 248);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Usuario";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(47, 112);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Nombres";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(354, 112);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Apellidos";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 22);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(145, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(145, 207);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(453, 22);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(145, 145);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(453, 52);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(145, 112);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(161, 22);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(443, 109);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(155, 22);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(443, 79);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(155, 22);
			this->textBox7->TabIndex = 14;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(145, 239);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(157, 22);
			this->textBox8->TabIndex = 15;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(437, 239);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(161, 22);
			this->textBox9->TabIndex = 16;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(620, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(178, 218);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(61, 276);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 45);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(443, 276);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 45);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(255, 276);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 45);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(642, 276);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 45);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Agregar foto";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(821, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 16);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Nivel";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(821, 54);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 16);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Valoración";
			this->label9->Click += gcnew System::EventHandler(this, &carermaintenance::label9_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(821, 118);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 16);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Experiencia";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(821, 213);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 16);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Garantía";
			this->label12->Click += gcnew System::EventHandler(this, &carermaintenance::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(821, 157);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 16);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Salario";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(443, 46);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(155, 24);
			this->comboBox1->TabIndex = 29;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(354, 245);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(50, 16);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Estado";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(354, 50);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 16);
			this->label15->TabIndex = 31;
			this->label15->Text = L"Position";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(931, 50);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(125, 22);
			this->textBox10->TabIndex = 32;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(931, 82);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(125, 22);
			this->textBox11->TabIndex = 33;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(931, 115);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(125, 22);
			this->textBox12->TabIndex = 34;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(931, 145);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(125, 52);
			this->textBox13->TabIndex = 35;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(931, 210);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(125, 111);
			this->textBox14->TabIndex = 36;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(16) {
				this->carerId,
					this->carerdni, this->carername, this->carerlastname, this->carerposition, this->carerstatus, this->carergender, this->carerdirection,
					this->careremail, this->carerusername, this->carervaloration, this->carerlevel, this->carerexperience, this->carersalary, this->carerwarranty,
					this->carernombres
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 335);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1084, 278);
			this->dataGridView1->TabIndex = 37;
			// 
			// carerId
			// 
			this->carerId->HeaderText = L"Id";
			this->carerId->MinimumWidth = 6;
			this->carerId->Name = L"carerId";
			this->carerId->Width = 125;
			// 
			// carerdni
			// 
			this->carerdni->HeaderText = L"Dni";
			this->carerdni->MinimumWidth = 6;
			this->carerdni->Name = L"carerdni";
			this->carerdni->Width = 125;
			// 
			// carername
			// 
			this->carername->HeaderText = L"Nombres";
			this->carername->MinimumWidth = 6;
			this->carername->Name = L"carername";
			this->carername->Width = 125;
			// 
			// carerlastname
			// 
			this->carerlastname->HeaderText = L"Apellidos";
			this->carerlastname->MinimumWidth = 6;
			this->carerlastname->Name = L"carerlastname";
			this->carerlastname->Width = 125;
			// 
			// carerposition
			// 
			this->carerposition->HeaderText = L"Posicion";
			this->carerposition->MinimumWidth = 6;
			this->carerposition->Name = L"carerposition";
			this->carerposition->Width = 125;
			// 
			// carerstatus
			// 
			this->carerstatus->HeaderText = L"Estado";
			this->carerstatus->MinimumWidth = 6;
			this->carerstatus->Name = L"carerstatus";
			this->carerstatus->Width = 125;
			// 
			// carergender
			// 
			this->carergender->HeaderText = L"Género";
			this->carergender->MinimumWidth = 6;
			this->carergender->Name = L"carergender";
			this->carergender->Width = 125;
			// 
			// carerdirection
			// 
			this->carerdirection->HeaderText = L"Dirección";
			this->carerdirection->MinimumWidth = 6;
			this->carerdirection->Name = L"carerdirection";
			this->carerdirection->Width = 125;
			// 
			// careremail
			// 
			this->careremail->HeaderText = L"Correo";
			this->careremail->MinimumWidth = 6;
			this->careremail->Name = L"careremail";
			this->careremail->Width = 125;
			// 
			// carerusername
			// 
			this->carerusername->HeaderText = L"Usuario";
			this->carerusername->MinimumWidth = 6;
			this->carerusername->Name = L"carerusername";
			this->carerusername->Width = 125;
			// 
			// carervaloration
			// 
			this->carervaloration->HeaderText = L"Valoración";
			this->carervaloration->MinimumWidth = 6;
			this->carervaloration->Name = L"carervaloration";
			this->carervaloration->Width = 125;
			// 
			// carerlevel
			// 
			this->carerlevel->HeaderText = L"Nivel";
			this->carerlevel->MinimumWidth = 6;
			this->carerlevel->Name = L"carerlevel";
			this->carerlevel->Width = 125;
			// 
			// carerexperience
			// 
			this->carerexperience->HeaderText = L"Experiencia";
			this->carerexperience->MinimumWidth = 6;
			this->carerexperience->Name = L"carerexperience";
			this->carerexperience->Width = 125;
			// 
			// carersalary
			// 
			this->carersalary->HeaderText = L"Salario";
			this->carersalary->MinimumWidth = 6;
			this->carersalary->Name = L"carersalary";
			this->carersalary->Width = 125;
			// 
			// carerwarranty
			// 
			this->carerwarranty->HeaderText = L"Garantía";
			this->carerwarranty->MinimumWidth = 6;
			this->carerwarranty->Name = L"carerwarranty";
			this->carerwarranty->Width = 125;
			// 
			// carernombres
			// 
			this->carernombres->HeaderText = L"Nombres";
			this->carernombres->MinimumWidth = 6;
			this->carernombres->Name = L"carernombres";
			this->carernombres->Width = 125;
			// 
			// carermaintenance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1108, 625);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelId);
			this->Name = L"carermaintenance";
			this->Text = L"carermaintenance";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
