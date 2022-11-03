#pragma once
#include "carermaintenance.h"
#include "PetForm.h"
#include "PetOwnerMaintence.h"
#include "ServiceRequestForm.h"
#include "RequestSearcherForm.h"
#include "CarerWorkForm.h"
#include "DistrictAnalyticForm.h"

namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ MenuPrincipal;
	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transaccionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transaccionToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ carerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mascotasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosPropietariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ solicitarServicioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscadorDeSolicitudesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cuidadosPendientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ventasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graficosDistritalesToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->MenuPrincipal = (gcnew System::Windows::Forms::MenuStrip());
			this->transaccionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transaccionToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->solicitarServicioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscadorDeSolicitudesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cuidadosPendientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->carerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosPropietariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graficosDistritalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuPrincipal->SuspendLayout();
			this->SuspendLayout();
			// 
			// MenuPrincipal
			// 
			this->MenuPrincipal->ImageScalingSize = System::Drawing::Size(20, 20);
			this->MenuPrincipal->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->transaccionToolStripMenuItem,
					this->archivoToolStripMenuItem, this->transaccionToolStripMenuItem1, this->mantenimientoToolStripMenuItem, this->reporteToolStripMenuItem,
					this->ayudaToolStripMenuItem
			});
			this->MenuPrincipal->Location = System::Drawing::Point(0, 0);
			this->MenuPrincipal->Name = L"MenuPrincipal";
			this->MenuPrincipal->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->MenuPrincipal->Size = System::Drawing::Size(675, 24);
			this->MenuPrincipal->TabIndex = 1;
			this->MenuPrincipal->Text = L"MenuPrincipal";
			// 
			// transaccionToolStripMenuItem
			// 
			this->transaccionToolStripMenuItem->Name = L"transaccionToolStripMenuItem";
			this->transaccionToolStripMenuItem->Size = System::Drawing::Size(12, 20);
			this->transaccionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::transaccionToolStripMenuItem_Click);
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::salirToolStripMenuItem_Click);
			// 
			// transaccionToolStripMenuItem1
			// 
			this->transaccionToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->solicitarServicioToolStripMenuItem,
					this->buscadorDeSolicitudesToolStripMenuItem, this->cuidadosPendientesToolStripMenuItem
			});
			this->transaccionToolStripMenuItem1->Name = L"transaccionToolStripMenuItem1";
			this->transaccionToolStripMenuItem1->Size = System::Drawing::Size(81, 20);
			this->transaccionToolStripMenuItem1->Text = L"Transaccion";
			// 
			// solicitarServicioToolStripMenuItem
			// 
			this->solicitarServicioToolStripMenuItem->Name = L"solicitarServicioToolStripMenuItem";
			this->solicitarServicioToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->solicitarServicioToolStripMenuItem->Text = L"Solicitar Servicio";
			this->solicitarServicioToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::solicitarServicioToolStripMenuItem_Click);
			// 
			// buscadorDeSolicitudesToolStripMenuItem
			// 
			this->buscadorDeSolicitudesToolStripMenuItem->Name = L"buscadorDeSolicitudesToolStripMenuItem";
			this->buscadorDeSolicitudesToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->buscadorDeSolicitudesToolStripMenuItem->Text = L"Buscador de Solicitudes";
			this->buscadorDeSolicitudesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::buscadorDeSolicitudesToolStripMenuItem_Click_1);
			// 
			// cuidadosPendientesToolStripMenuItem
			// 
			this->cuidadosPendientesToolStripMenuItem->Name = L"cuidadosPendientesToolStripMenuItem";
			this->cuidadosPendientesToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->cuidadosPendientesToolStripMenuItem->Text = L"Cuidados Pendientes";
			this->cuidadosPendientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cuidadosPendientesToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->carerToolStripMenuItem,
					this->mascotasToolStripMenuItem, this->usuariosPropietariosToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// carerToolStripMenuItem
			// 
			this->carerToolStripMenuItem->Name = L"carerToolStripMenuItem";
			this->carerToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->carerToolStripMenuItem->Text = L"Carer";
			this->carerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::carerToolStripMenuItem_Click);
			// 
			// mascotasToolStripMenuItem
			// 
			this->mascotasToolStripMenuItem->Name = L"mascotasToolStripMenuItem";
			this->mascotasToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->mascotasToolStripMenuItem->Text = L"Mascotas";
			this->mascotasToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mascotasToolStripMenuItem_Click);
			// 
			// usuariosPropietariosToolStripMenuItem
			// 
			this->usuariosPropietariosToolStripMenuItem->Name = L"usuariosPropietariosToolStripMenuItem";
			this->usuariosPropietariosToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->usuariosPropietariosToolStripMenuItem->Text = L"Usuarios Propietarios";
			this->usuariosPropietariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::usuariosPropietariosToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ventasToolStripMenuItem });
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// ventasToolStripMenuItem
			// 
			this->ventasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->graficosDistritalesToolStripMenuItem });
			this->ventasToolStripMenuItem->Name = L"ventasToolStripMenuItem";
			this->ventasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ventasToolStripMenuItem->Text = L"Ventas";
			// 
			// graficosDistritalesToolStripMenuItem
			// 
			this->graficosDistritalesToolStripMenuItem->Name = L"graficosDistritalesToolStripMenuItem";
			this->graficosDistritalesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->graficosDistritalesToolStripMenuItem->Text = L"Graficos Distritales";
			this->graficosDistritalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::graficosDistritalesToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(675, 325);
			this->Controls->Add(this->MenuPrincipal);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->MenuPrincipal;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Chita : Pagina general";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MenuPrincipal->ResumeLayout(false);
			this->MenuPrincipal->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void transaccionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void carerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	carermaintenance^ Carermaintenance = gcnew carermaintenance();
	Carermaintenance->ShowDialog();
	//Carermaintenance->MdiParent = this;
	//Carermaintenance->Show();
}
	   
private: System::Void mascotasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	PetForm^ petForm = gcnew PetForm();		//Crear form.
	petForm->ShowDialog();
	//petForm -> MdiParent = this;			//Padre mdi(form de donde viene) this = ese mismo
	//petForm -> Show();						//Mostrar form
}
private: System::Void usuariosPropietariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PetOwnerMaintence^ PetOwnerForm = gcnew PetOwnerMaintence();
	PetOwnerForm->ShowDialog();
	//PetOwnerForm->MdiParent = this;
	//PetOwnerForm->Show();
}
private: System::Void solicitarServicioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ServiceRequestForm^ serviceRequestForm = gcnew ServiceRequestForm();		//Crear form.
	serviceRequestForm->MdiParent = this;			//Padre mdi(form de donde viene) this = ese mismo
	serviceRequestForm->Show();
}

private: System::Void cuidadosPendientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CarerWorkForm^ carerWorkForm = gcnew CarerWorkForm();		//Crear form.
	carerWorkForm ->MdiParent = this;			//Padre mdi(form de donde viene) this = ese mismo
	carerWorkForm ->Show();

}

private: System::Void buscadorDeSolicitudesToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	RequestSearcherForm^ requestSearcherForm = gcnew RequestSearcherForm();		//Crear form.
	requestSearcherForm->MdiParent = this;			//Padre mdi(form de donde viene) this = ese mismo
	requestSearcherForm->Show();
}
private: System::Void graficosDistritalesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DistrictAnalyticForm^ districAnalyticForm = gcnew DistrictAnalyticForm();
	districAnalyticForm->MdiParent = this;			//Padre mdi(form de donde viene) this = ese mismo
	districAnalyticForm->Show();
}
};
}
