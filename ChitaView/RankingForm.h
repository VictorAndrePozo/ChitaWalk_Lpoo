#pragma once

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RankingForm
	/// </summary>
	public ref class RankingForm : public System::Windows::Forms::Form
	{
	public:
		RankingForm(void)
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
		~RankingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::Windows::Forms::Button^ btnCancel;


	private: System::Windows::Forms::ComboBox^ cbRankingComment1;
	private: System::Windows::Forms::ComboBox^ cbRankingComment3;



	private: System::Windows::Forms::ComboBox^ cbRankingComment2;
	private: System::Windows::Forms::ComboBox^ cbRankingComment4;
	private: System::Windows::Forms::TextBox^ txtRankingAdvice;




	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->cbRankingComment1 = (gcnew System::Windows::Forms::ComboBox());
			this->cbRankingComment3 = (gcnew System::Windows::Forms::ComboBox());
			this->cbRankingComment2 = (gcnew System::Windows::Forms::ComboBox());
			this->cbRankingComment4 = (gcnew System::Windows::Forms::ComboBox());
			this->txtRankingAdvice = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Comentarios:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Estrellas:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Recomendaciones:";
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(43, 226);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(75, 23);
			this->btnSend->TabIndex = 3;
			this->btnSend->Text = L"Enviar";
			this->btnSend->UseVisualStyleBackColor = true;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(173, 226);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 4;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// cbRankingComment1
			// 
			this->cbRankingComment1->FormattingEnabled = true;
			this->cbRankingComment1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Sobresaliente", L"Excelente", L"Distinguido",
					L"Muy bueno", L"Aprobado", L"Regular", L"Bueno", L"Malo", L"Insuficiente", L"Reprobado", L"Pésimo"
			});
			this->cbRankingComment1->Location = System::Drawing::Point(19, 30);
			this->cbRankingComment1->Name = L"cbRankingComment1";
			this->cbRankingComment1->Size = System::Drawing::Size(121, 21);
			this->cbRankingComment1->TabIndex = 5;
			// 
			// cbRankingComment3
			// 
			this->cbRankingComment3->FormattingEnabled = true;
			this->cbRankingComment3->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Sobresaliente", L"Excelente", L"Distinguido",
					L"Muy bueno", L"Aprobado", L"Regular", L"Bueno", L"Malo", L"Insuficiente", L"Reprobado", L"Pésimo"
			});
			this->cbRankingComment3->Location = System::Drawing::Point(19, 57);
			this->cbRankingComment3->Name = L"cbRankingComment3";
			this->cbRankingComment3->Size = System::Drawing::Size(121, 21);
			this->cbRankingComment3->TabIndex = 6;
			// 
			// cbRankingComment2
			// 
			this->cbRankingComment2->FormattingEnabled = true;
			this->cbRankingComment2->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Sobresaliente", L"Excelente", L"Distinguido",
					L"Muy bueno", L"Aprobado", L"Regular", L"Bueno", L"Malo", L"Insuficiente", L"Reprobado", L"Pésimo"
			});
			this->cbRankingComment2->Location = System::Drawing::Point(151, 30);
			this->cbRankingComment2->Name = L"cbRankingComment2";
			this->cbRankingComment2->Size = System::Drawing::Size(121, 21);
			this->cbRankingComment2->TabIndex = 7;
			// 
			// cbRankingComment4
			// 
			this->cbRankingComment4->FormattingEnabled = true;
			this->cbRankingComment4->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Sobresaliente", L"Excelente", L"Distinguido",
					L"Muy bueno", L"Aprobado", L"Regular", L"Bueno", L"Malo", L"Insuficiente", L"Reprobado", L"Pésimo"
			});
			this->cbRankingComment4->Location = System::Drawing::Point(151, 57);
			this->cbRankingComment4->Name = L"cbRankingComment4";
			this->cbRankingComment4->Size = System::Drawing::Size(121, 21);
			this->cbRankingComment4->TabIndex = 8;
			// 
			// txtRankingAdvice
			// 
			this->txtRankingAdvice->Location = System::Drawing::Point(19, 166);
			this->txtRankingAdvice->Multiline = true;
			this->txtRankingAdvice->Name = L"txtRankingAdvice";
			this->txtRankingAdvice->Size = System::Drawing::Size(253, 54);
			this->txtRankingAdvice->TabIndex = 9;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(19, 110);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 27);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// RankingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtRankingAdvice);
			this->Controls->Add(this->cbRankingComment4);
			this->Controls->Add(this->cbRankingComment2);
			this->Controls->Add(this->cbRankingComment3);
			this->Controls->Add(this->cbRankingComment1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RankingForm";
			this->Text = L"Calificación";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
