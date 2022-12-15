#pragma once

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace ChitaModel;
	using namespace ChitaController;

	/// <summary>
	/// Resumen de UserGraphicsForm
	/// </summary>
	public ref class UserGraphicsForm : public System::Windows::Forms::Form
	{
	public:
		UserGraphicsForm(void)
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
		~UserGraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ ChartHistorial;
	protected:

	protected:

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ piesChartUser;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ txtUserGraphId;


	private: System::Windows::Forms::ComboBox^ cmbUserGraphKind;
	private: System::Windows::Forms::Button^ Search;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtUserGraphTotalStars;

	private: System::Windows::Forms::TextBox^ txtUserGraphTotalServices;
	private: System::Windows::Forms::TextBox^ txtUserGraphMedia;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartTopStars;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->ChartHistorial = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->piesChartUser = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtUserGraphId = (gcnew System::Windows::Forms::TextBox());
			this->cmbUserGraphKind = (gcnew System::Windows::Forms::ComboBox());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtUserGraphTotalStars = (gcnew System::Windows::Forms::TextBox());
			this->txtUserGraphTotalServices = (gcnew System::Windows::Forms::TextBox());
			this->txtUserGraphMedia = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chartTopStars = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChartHistorial))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piesChartUser))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTopStars))->BeginInit();
			this->SuspendLayout();
			// 
			// ChartHistorial
			// 
			chartArea1->Name = L"ChartArea1";
			this->ChartHistorial->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->ChartHistorial->Legends->Add(legend1);
			this->ChartHistorial->Location = System::Drawing::Point(35, 164);
			this->ChartHistorial->Name = L"ChartHistorial";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Estrellas";
			this->ChartHistorial->Series->Add(series1);
			this->ChartHistorial->Size = System::Drawing::Size(356, 300);
			this->ChartHistorial->TabIndex = 1;
			this->ChartHistorial->Text = L"chart1";
			// 
			// piesChartUser
			// 
			chartArea2->Name = L"ChartArea1";
			this->piesChartUser->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->piesChartUser->Legends->Add(legend2);
			this->piesChartUser->Location = System::Drawing::Point(772, 164);
			this->piesChartUser->Name = L"piesChartUser";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Estrellas Top1";
			this->piesChartUser->Series->Add(series2);
			this->piesChartUser->Size = System::Drawing::Size(300, 300);
			this->piesChartUser->TabIndex = 2;
			this->piesChartUser->Text = L"chart2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Id Usuario:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Tipo de búsqueda:";
			// 
			// txtUserGraphId
			// 
			this->txtUserGraphId->Location = System::Drawing::Point(124, 35);
			this->txtUserGraphId->Name = L"txtUserGraphId";
			this->txtUserGraphId->Size = System::Drawing::Size(121, 20);
			this->txtUserGraphId->TabIndex = 7;
			// 
			// cmbUserGraphKind
			// 
			this->cmbUserGraphKind->FormattingEnabled = true;
			this->cmbUserGraphKind->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Historial", L"Cantidad Estrellas", L"Top de Máximos " });
			this->cmbUserGraphKind->Location = System::Drawing::Point(124, 70);
			this->cmbUserGraphKind->Name = L"cmbUserGraphKind";
			this->cmbUserGraphKind->Size = System::Drawing::Size(121, 21);
			this->cmbUserGraphKind->TabIndex = 9;
			// 
			// Search
			// 
			this->Search->Location = System::Drawing::Point(90, 109);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(75, 23);
			this->Search->TabIndex = 10;
			this->Search->Text = L"Buscar";
			this->Search->UseVisualStyleBackColor = true;
			this->Search->Click += gcnew System::EventHandler(this, &UserGraphicsForm::Search_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(442, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Información:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(442, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Total Estrellas";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(442, 85);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Cantidad Servicios";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(442, 111);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(147, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Promedio Estrella por Servicio";
			// 
			// txtUserGraphTotalStars
			// 
			this->txtUserGraphTotalStars->Location = System::Drawing::Point(601, 56);
			this->txtUserGraphTotalStars->Name = L"txtUserGraphTotalStars";
			this->txtUserGraphTotalStars->Size = System::Drawing::Size(100, 20);
			this->txtUserGraphTotalStars->TabIndex = 15;
			// 
			// txtUserGraphTotalServices
			// 
			this->txtUserGraphTotalServices->Location = System::Drawing::Point(601, 82);
			this->txtUserGraphTotalServices->Name = L"txtUserGraphTotalServices";
			this->txtUserGraphTotalServices->Size = System::Drawing::Size(100, 20);
			this->txtUserGraphTotalServices->TabIndex = 16;
			// 
			// txtUserGraphMedia
			// 
			this->txtUserGraphMedia->Location = System::Drawing::Point(601, 108);
			this->txtUserGraphMedia->Name = L"txtUserGraphMedia";
			this->txtUserGraphMedia->Size = System::Drawing::Size(100, 20);
			this->txtUserGraphMedia->TabIndex = 17;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtUserGraphId);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->cmbUserGraphKind);
			this->groupBox1->Controls->Add(this->Search);
			this->groupBox1->Location = System::Drawing::Point(71, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(268, 148);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ingrese los datos del Usuario";
			// 
			// chartTopStars
			// 
			chartArea3->Name = L"ChartArea1";
			this->chartTopStars->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chartTopStars->Legends->Add(legend3);
			this->chartTopStars->Location = System::Drawing::Point(397, 164);
			this->chartTopStars->Name = L"chartTopStars";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Estrellas";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Servicios";
			this->chartTopStars->Series->Add(series3);
			this->chartTopStars->Series->Add(series4);
			this->chartTopStars->Size = System::Drawing::Size(356, 300);
			this->chartTopStars->TabIndex = 19;
			this->chartTopStars->Text = L"chart1";
			// 
			// UserGraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1123, 489);
			this->Controls->Add(this->chartTopStars);
			this->Controls->Add(this->txtUserGraphMedia);
			this->Controls->Add(this->txtUserGraphTotalServices);
			this->Controls->Add(this->txtUserGraphTotalStars);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->piesChartUser);
			this->Controls->Add(this->ChartHistorial);
			this->Controls->Add(this->groupBox1);
			this->Name = L"UserGraphicsForm";
			this->Text = L"UserGraphicsForm";
			this->Load += gcnew System::EventHandler(this, &UserGraphicsForm::UserGraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChartHistorial))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piesChartUser))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTopStars))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserGraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Rating^>^ ratingList = Controller::QueryAllRating();
		List<Rating^>^ ratingCarerList = Controller::QueryRatingByCarerId(111);

		
		for (int i = 0; i < ratingList->Count; i++) {

			ChartHistorial->Series["Estrellas"]->Points->Add(ratingList[i]->Stars);
			//ChartUser->Series["Estrellas"]->Points[0]->Label = Convert::ToString(ratingList[i]->Stars);
		}
		
		//Para topStars
		for (int i = 0; i < ratingCarerList->Count; i++) {

			chartTopStars->Series["Estrellas"]->Points->Add(ratingCarerList[i]->Stars);
			chartTopStars->Series["Estrellas"]->Points[0]->Label = Convert::ToString(ratingList[i]->CarerId);

			chartTopStars->Series["Servicios"]->Points->Add(ratingCarerList[i]->Stars);
			chartTopStars->Series["Servicios"]->Points[0]->Label = Convert::ToString(ratingCarerList[i]->CarerId);

		}

	}
	private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (txtUserGraphId->Text->Trim() != "") {
			//Busqueda de solicitud por el tipo de busqueda
			List <Ranking^>^ requestList = Controller::QueryServiceRequestByPetKind(cbSearcherPetKind->Text->Trim());
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
		else if (cbSearcherPet->Text->Trim() != "") {
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
		else if (cbSearcherService->Text->Trim() != "") {
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
	}*/
		
}
};
}
