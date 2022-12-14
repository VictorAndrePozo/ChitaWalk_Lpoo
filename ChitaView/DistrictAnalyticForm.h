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
	/// Resumen de DistrictAnalyticForm
	/// </summary>
	public ref class DistrictAnalyticForm : public System::Windows::Forms::Form
	{
	public:
		DistrictAnalyticForm(void)
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
		~DistrictAnalyticForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ Pe;
	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartdistrict;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ piechartdistrict;
	private: System::Windows::Forms::TabPage^ tabPage2;


























































	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ piechart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ piechart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ piechart3;







	protected:



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->Pe = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->chartdistrict = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->piechartdistrict = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->piechart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->piechart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->piechart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Pe->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartdistrict))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechartdistrict))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechart1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechart2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechart3))->BeginInit();
			this->SuspendLayout();
			// 
			// Pe
			// 
			this->Pe->Controls->Add(this->tabPage1);
			this->Pe->Controls->Add(this->tabPage2);
			this->Pe->Controls->Add(this->tabPage3);
			this->Pe->Controls->Add(this->tabPage4);
			this->Pe->Location = System::Drawing::Point(26, 12);
			this->Pe->Name = L"Pe";
			this->Pe->SelectedIndex = 0;
			this->Pe->Size = System::Drawing::Size(1052, 513);
			this->Pe->TabIndex = 44;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->chartdistrict);
			this->tabPage1->Controls->Add(this->piechartdistrict);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1044, 484);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Dueños";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// chartdistrict
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartdistrict->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartdistrict->Legends->Add(legend1);
			this->chartdistrict->Location = System::Drawing::Point(20, 16);
			this->chartdistrict->Name = L"chartdistrict";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Distritos";
			this->chartdistrict->Series->Add(series1);
			this->chartdistrict->Size = System::Drawing::Size(504, 434);
			this->chartdistrict->TabIndex = 3;
			this->chartdistrict->Text = L"chartdistrict";
			// 
			// piechartdistrict
			// 
			chartArea2->Name = L"ChartArea1";
			this->piechartdistrict->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->piechartdistrict->Legends->Add(legend2);
			this->piechartdistrict->Location = System::Drawing::Point(524, 16);
			this->piechartdistrict->Margin = System::Windows::Forms::Padding(4);
			this->piechartdistrict->Name = L"piechartdistrict";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Distritos";
			this->piechartdistrict->Series->Add(series2);
			this->piechartdistrict->Size = System::Drawing::Size(473, 457);
			this->piechartdistrict->TabIndex = 2;
			this->piechartdistrict->Text = L"piechartdistrict";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->chart1);
			this->tabPage2->Controls->Add(this->piechart1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1044, 484);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Cuidador";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(34, 14);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Distritos";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(504, 434);
			this->chart1->TabIndex = 5;
			this->chart1->Text = L"chart1";
			// 
			// piechart1
			// 
			chartArea4->Name = L"ChartArea1";
			this->piechart1->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->piechart1->Legends->Add(legend4);
			this->piechart1->Location = System::Drawing::Point(538, 14);
			this->piechart1->Margin = System::Windows::Forms::Padding(4);
			this->piechart1->Name = L"piechart1";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series4->Legend = L"Legend1";
			series4->Name = L"Distritos";
			this->piechart1->Series->Add(series4);
			this->piechart1->Size = System::Drawing::Size(473, 457);
			this->piechart1->TabIndex = 4;
			this->piechart1->Text = L"chart2";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chart2);
			this->tabPage3->Controls->Add(this->piechart2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1044, 484);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Paseador";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart2
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart2->Legends->Add(legend5);
			this->chart2->Location = System::Drawing::Point(34, 14);
			this->chart2->Name = L"chart2";
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"Distritos";
			this->chart2->Series->Add(series5);
			this->chart2->Size = System::Drawing::Size(504, 434);
			this->chart2->TabIndex = 5;
			this->chart2->Text = L"chart2";
			// 
			// piechart2
			// 
			chartArea6->Name = L"ChartArea1";
			this->piechart2->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->piechart2->Legends->Add(legend6);
			this->piechart2->Location = System::Drawing::Point(538, 14);
			this->piechart2->Margin = System::Windows::Forms::Padding(4);
			this->piechart2->Name = L"piechart2";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series6->Legend = L"Legend1";
			series6->Name = L"Distritos";
			this->piechart2->Series->Add(series6);
			this->piechart2->Size = System::Drawing::Size(473, 457);
			this->piechart2->TabIndex = 4;
			this->piechart2->Text = L"piechart2";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->chart3);
			this->tabPage4->Controls->Add(this->piechart3);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1044, 484);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Supervisor";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// chart3
			// 
			chartArea7->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea7);
			legend7->Name = L"Legend1";
			this->chart3->Legends->Add(legend7);
			this->chart3->Location = System::Drawing::Point(34, 14);
			this->chart3->Name = L"chart3";
			series7->ChartArea = L"ChartArea1";
			series7->Legend = L"Legend1";
			series7->Name = L"Distritos";
			this->chart3->Series->Add(series7);
			this->chart3->Size = System::Drawing::Size(504, 434);
			this->chart3->TabIndex = 5;
			this->chart3->Text = L"chart3";
			// 
			// piechart3
			// 
			chartArea8->Name = L"ChartArea1";
			this->piechart3->ChartAreas->Add(chartArea8);
			legend8->Name = L"Legend1";
			this->piechart3->Legends->Add(legend8);
			this->piechart3->Location = System::Drawing::Point(538, 14);
			this->piechart3->Margin = System::Windows::Forms::Padding(4);
			this->piechart3->Name = L"piechart3";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series8->Legend = L"Legend1";
			series8->Name = L"Distritos";
			this->piechart3->Series->Add(series8);
			this->piechart3->Size = System::Drawing::Size(473, 457);
			this->piechart3->TabIndex = 4;
			this->piechart3->Text = L"piechart3";
			// 
			// DistrictAnalyticForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1101, 552);
			this->Controls->Add(this->Pe);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DistrictAnalyticForm";
			this->Text = L"Graficos por Distritos";
			this->Load += gcnew System::EventHandler(this, &DistrictAnalyticForm::DistrictAnalyticForm_Load);
			this->Pe->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartdistrict))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechartdistrict))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechart1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechart2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechart3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void DistrictAnalyticForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<PetOwner^>^ PetOwnerList = Controller::QueryAllPetOwner();
		for (int i = 0; i < PetOwnerList->Count; i++) {
			chartdistrict->Series["Distritos"]->Points->Add(PetOwnerList[i]->Id);
			chartdistrict->Series["Distritos"]->Points[i]->AxisLabel = PetOwnerList[i]->District;
			chartdistrict->Series["Distritos"]->Points[i]->Label = Convert::ToString(PetOwnerList[i]->Firstname);

			piechartdistrict->Series["Distritos"]->Points->Add(PetOwnerList[i]->Id);
			piechartdistrict->Series["Distritos"]->Points[i]->LegendText = PetOwnerList[i]->District;
			piechartdistrict->Series["Distritos"]->Points[i]->Label = Convert::ToString(PetOwnerList[i]->Firstname);

		}

		List<Keeper^>^ keeperList = Controller::QueryAllKeepers();
		for (int i = 0; i < keeperList->Count; i++) {
			chart1->Series["Distritos"]->Points->Add(keeperList[i]->Id);
			chart1->Series["Distritos"]->Points[i]->AxisLabel = keeperList[i]->District;
			chart1->Series["Distritos"]->Points[i]->Label = Convert::ToString(keeperList[i]->Firstname);

			piechart1->Series["Distritos"]->Points->Add(keeperList[i]->Id);
			piechart1->Series["Distritos"]->Points[i]->LegendText = keeperList[i]->District;
			piechart1->Series["Distritos"]->Points[i]->Label = Convert::ToString(keeperList[i]->Firstname);

		}

		List<Walker^>^ walkerList = Controller::QueryAllWalkers();
		for (int i = 0; i < walkerList->Count; i++) {
			chart2->Series["Distritos"]->Points->Add(walkerList[i]->Id);
			chart2->Series["Distritos"]->Points[i]->AxisLabel = walkerList[i]->District;
			chart2->Series["Distritos"]->Points[i]->Label = Convert::ToString(walkerList[i]->Firstname);

			piechart2->Series["Distritos"]->Points->Add(walkerList[i]->Id);
			piechart2->Series["Distritos"]->Points[i]->LegendText = walkerList[i]->District;
			piechart2->Series["Distritos"]->Points[i]->Label = Convert::ToString(walkerList[i]->Firstname);

		}


		List<Supervisor^>^ supervisorList = Controller::QueryAllSupervisors();
		for (int i = 0; i < supervisorList->Count; i++) {
			chart3->Series["Distritos"]->Points->Add(supervisorList[i]->Id);
			chart3->Series["Distritos"]->Points[i]->AxisLabel = supervisorList[i]->District;
			chart3->Series["Distritos"]->Points[i]->Label = Convert::ToString(supervisorList[i]->Firstname);

			piechart3->Series["Distritos"]->Points->Add(supervisorList[i]->Id);
			piechart3->Series["Distritos"]->Points[i]->LegendText = supervisorList[i]->District;
			piechart3->Series["Distritos"]->Points[i]->Label = Convert::ToString(supervisorList[i]->Firstname);

		}
	}



};
}
