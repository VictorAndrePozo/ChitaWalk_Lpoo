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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ ChartUser;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ piesChartUser;

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
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ChartUser = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->piesChartUser = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChartUser))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piesChartUser))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(37, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 121);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// ChartUser
			// 
			chartArea1->Name = L"ChartArea1";
			this->ChartUser->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->ChartUser->Legends->Add(legend1);
			this->ChartUser->Location = System::Drawing::Point(37, 164);
			this->ChartUser->Name = L"ChartUser";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Dueños";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Cuidadores";
			this->ChartUser->Series->Add(series1);
			this->ChartUser->Series->Add(series2);
			this->ChartUser->Size = System::Drawing::Size(356, 300);
			this->ChartUser->TabIndex = 1;
			this->ChartUser->Text = L"chart1";
			// 
			// piesChartUser
			// 
			chartArea2->Name = L"ChartArea1";
			this->piesChartUser->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->piesChartUser->Legends->Add(legend2);
			this->piesChartUser->Location = System::Drawing::Point(460, 164);
			this->piesChartUser->Name = L"piesChartUser";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->piesChartUser->Series->Add(series3);
			this->piesChartUser->Size = System::Drawing::Size(300, 300);
			this->piesChartUser->TabIndex = 2;
			this->piesChartUser->Text = L"chart2";
			// 
			// UserGraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 489);
			this->Controls->Add(this->piesChartUser);
			this->Controls->Add(this->ChartUser);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"UserGraphicsForm";
			this->Text = L"UserGraphicsForm";
			this->Load += gcnew System::EventHandler(this, &UserGraphicsForm::UserGraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChartUser))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piesChartUser))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void UserGraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<PetOwner^>^ petOwnerList = Controller::QueryAllPetOwner();
		List<Walker^>^    carerList    = Controller::QueryAllWalkers();
		List<Keeper^>^    keeperList  = Controller::QueryAllKeepers();
		/*
		for (int i = 0; i < petOwnerList->Count; i++) {

			ChartUser->Series["Dueños"]->Points->Add(petOwnerList[i]->Gender);
			ChartUser->Series["Dueños"]->Points[0]->Label = Convert::ToString(petOwnerList[i]->Gender);

			ChartUser->Series["Cuidadores"]->Points->Add(carerList[i]->Gender);
			ChartUser->Series["Cuidadores"]->Points[0]->Label = Convert::ToString(petOwnerList[i]->Gender);
				
		}
		*/

	}
};
}
