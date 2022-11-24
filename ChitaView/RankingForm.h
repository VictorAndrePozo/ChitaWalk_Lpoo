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
	private: System::Windows::Forms::ImageList^ starsList;
	private: System::Windows::Forms::Label^ lblStarList;
	private: System::Windows::Forms::Label^ lblStar2;

	private: System::Windows::Forms::Label^ lblStar5;



	private: System::Windows::Forms::Label^ lblStar4;

	private: System::Windows::Forms::Label^ lblStar1;
	private: System::Windows::Forms::Label^ lblStar3;

	private: System::ComponentModel::IContainer^ components;







	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RankingForm::typeid));
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
			this->starsList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->lblStarList = (gcnew System::Windows::Forms::Label());
			this->lblStar2 = (gcnew System::Windows::Forms::Label());
			this->lblStar5 = (gcnew System::Windows::Forms::Label());
			this->lblStar4 = (gcnew System::Windows::Forms::Label());
			this->lblStar1 = (gcnew System::Windows::Forms::Label());
			this->lblStar3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Comentarios:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Estrellas:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Recomendaciones:";
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(46, 266);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(75, 23);
			this->btnSend->TabIndex = 3;
			this->btnSend->Text = L"Enviar";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &RankingForm::btnSend_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(151, 266);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 4;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RankingForm::btnCancel_Click);
			// 
			// cbRankingComment1
			// 
			this->cbRankingComment1->FormattingEnabled = true;
			this->cbRankingComment1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Sobresaliente", L"Excelente", L"Distinguido",
					L"Muy bueno", L"Aprobado", L"Regular", L"Bueno", L"Malo", L"Insuficiente", L"Reprobado", L"Pésimo"
			});
			this->cbRankingComment1->Location = System::Drawing::Point(12, 30);
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
			this->cbRankingComment3->Location = System::Drawing::Point(12, 57);
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
			this->txtRankingAdvice->Location = System::Drawing::Point(9, 196);
			this->txtRankingAdvice->Multiline = true;
			this->txtRankingAdvice->Name = L"txtRankingAdvice";
			this->txtRankingAdvice->Size = System::Drawing::Size(263, 54);
			this->txtRankingAdvice->TabIndex = 9;
			// 
			// starsList
			// 
			this->starsList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"starsList.ImageStream")));
			this->starsList->TransparentColor = System::Drawing::Color::White;
			this->starsList->Images->SetKeyName(0, L"stars_0.png");
			this->starsList->Images->SetKeyName(1, L"stars_1.png");
			this->starsList->Images->SetKeyName(2, L"stars_2.png");
			this->starsList->Images->SetKeyName(3, L"stars_3.png");
			this->starsList->Images->SetKeyName(4, L"stars_4.png");
			this->starsList->Images->SetKeyName(5, L"stars_5.png");
			// 
			// lblStarList
			// 
			this->lblStarList->BackColor = System::Drawing::Color::Transparent;
			this->lblStarList->Enabled = false;
			this->lblStarList->ForeColor = System::Drawing::Color::OrangeRed;
			this->lblStarList->ImageIndex = 0;
			this->lblStarList->ImageList = this->starsList;
			this->lblStarList->Location = System::Drawing::Point(9, 112);
			this->lblStarList->Name = L"lblStarList";
			this->lblStarList->Size = System::Drawing::Size(263, 50);
			this->lblStarList->TabIndex = 10;
			// 
			// lblStar2
			// 
			this->lblStar2->BackColor = System::Drawing::Color::Transparent;
			this->lblStar2->Location = System::Drawing::Point(67, 112);
			this->lblStar2->Name = L"lblStar2";
			this->lblStar2->Size = System::Drawing::Size(45, 50);
			this->lblStar2->TabIndex = 11;
			this->lblStar2->Click += gcnew System::EventHandler(this, &RankingForm::lblStar2_Click);
			// 
			// lblStar5
			// 
			this->lblStar5->BackColor = System::Drawing::Color::Transparent;
			this->lblStar5->Location = System::Drawing::Point(219, 112);
			this->lblStar5->Name = L"lblStar5";
			this->lblStar5->Size = System::Drawing::Size(45, 50);
			this->lblStar5->TabIndex = 14;
			this->lblStar5->Click += gcnew System::EventHandler(this, &RankingForm::lblStar5_Click);
			// 
			// lblStar4
			// 
			this->lblStar4->BackColor = System::Drawing::Color::Transparent;
			this->lblStar4->Location = System::Drawing::Point(169, 112);
			this->lblStar4->Name = L"lblStar4";
			this->lblStar4->Size = System::Drawing::Size(45, 50);
			this->lblStar4->TabIndex = 13;
			this->lblStar4->Click += gcnew System::EventHandler(this, &RankingForm::lblStar4_Click);
			// 
			// lblStar1
			// 
			this->lblStar1->BackColor = System::Drawing::Color::Transparent;
			this->lblStar1->Location = System::Drawing::Point(17, 112);
			this->lblStar1->Name = L"lblStar1";
			this->lblStar1->Size = System::Drawing::Size(45, 50);
			this->lblStar1->TabIndex = 15;
			this->lblStar1->Click += gcnew System::EventHandler(this, &RankingForm::lblStar1_Click);
			// 
			// lblStar3
			// 
			this->lblStar3->BackColor = System::Drawing::Color::Transparent;
			this->lblStar3->Location = System::Drawing::Point(118, 112);
			this->lblStar3->Name = L"lblStar3";
			this->lblStar3->Size = System::Drawing::Size(45, 50);
			this->lblStar3->TabIndex = 12;
			this->lblStar3->Click += gcnew System::EventHandler(this, &RankingForm::lblStar3_Click);
			// 
			// RankingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 303);
			this->Controls->Add(this->lblStarList);
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
			this->Controls->Add(this->lblStar3);
			this->Controls->Add(this->lblStar2);
			this->Controls->Add(this->lblStar1);
			this->Controls->Add(this->lblStar5);
			this->Controls->Add(this->lblStar4);
			this->Name = L"RankingForm";
			this->Text = L"Calificación";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {


	}

private: System::Void lblStar1_Click(System::Object^ sender, System::EventArgs^ e) {
	lblStarList->ImageIndex = 1;
}
private: System::Void lblStar2_Click(System::Object^ sender, System::EventArgs^ e) {
	lblStarList->ImageIndex = 2;
}
private: System::Void lblStar3_Click(System::Object^ sender, System::EventArgs^ e) {
	lblStarList->ImageIndex = 3;
}
private: System::Void lblStar4_Click(System::Object^ sender, System::EventArgs^ e) {
	lblStarList->ImageIndex = 4;
}
private: System::Void lblStar5_Click(System::Object^ sender, System::EventArgs^ e) {
	lblStarList->ImageIndex = 5;
}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {


}
};
}
