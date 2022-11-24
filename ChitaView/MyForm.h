#pragma once
#include "carermaintenance.h"
#include "PetForm.h"
#include "PetOwnerMaintence.h"
#include "ServiceRequestForm.h"
#include "RequestSearcherForm.h"
#include "CarerWorkForm.h"
#include "DistrictAnalyticForm.h"
#include "UserGraphicsForm.h"
#include "Promotionsmaintenance.h"
#include "DiscountsForm.h"

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
		static Supervisor^ supervisor;
		MyForm(void)
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

	private: System::Windows::Forms::ToolStripMenuItem^ cuidadosPendientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ventasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graficosDistritalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ promocionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ asignarDescuentosToolStripMenuItem;

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
			this->MenuPrincipal = (gcnew System::Windows::Forms::MenuStrip());
			this->transaccionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transaccionToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->solicitarServicioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cuidadosPendientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->carerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosPropietariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promocionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graficosDistritalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asignarDescuentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->MenuPrincipal->Size = System::Drawing::Size(1205, 24);
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
				this->cuidadosPendientesToolStripMenuItem, 
				this->asignarDescuentosToolStripMenuItem
			});
			this->transaccionToolStripMenuItem1->Name = L"transaccionToolStripMenuItem1";
			this->transaccionToolStripMenuItem1->Size = System::Drawing::Size(81, 20);
			this->transaccionToolStripMenuItem1->Text = L"Transaccion";


			// 
			// solicitarServicioToolStripMenuItem
			// 
			this->solicitarServicioToolStripMenuItem->Name = L"solicitarServicioToolStripMenuItem";
			this->solicitarServicioToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->solicitarServicioToolStripMenuItem->Text = L"Solicitar Servicio";
			this->solicitarServicioToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::solicitarServicioToolStripMenuItem_Click);
			// 
			// cuidadosPendientesToolStripMenuItem
			// 
			this->cuidadosPendientesToolStripMenuItem->Name = L"cuidadosPendientesToolStripMenuItem";
			this->cuidadosPendientesToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->cuidadosPendientesToolStripMenuItem->Text = L"Cuidados Pendientes";
			this->cuidadosPendientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cuidadosPendientesToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->carerToolStripMenuItem,
					this->mascotasToolStripMenuItem, this->usuariosPropietariosToolStripMenuItem, this->promocionesToolStripMenuItem
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
			// promocionesToolStripMenuItem
			// 
			this->promocionesToolStripMenuItem->Name = L"promocionesToolStripMenuItem";
			this->promocionesToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->promocionesToolStripMenuItem->Text = L"Promociones";
			this->promocionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::promocionesToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ventasToolStripMenuItem,
					this->usuariosToolStripMenuItem
			});
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// ventasToolStripMenuItem
			// 
			this->ventasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->graficosDistritalesToolStripMenuItem });
			this->ventasToolStripMenuItem->Name = L"ventasToolStripMenuItem";
			this->ventasToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->ventasToolStripMenuItem->Text = L"Ventas";
			// 
			// graficosDistritalesToolStripMenuItem
			// 
			this->graficosDistritalesToolStripMenuItem->Name = L"graficosDistritalesToolStripMenuItem";
			this->graficosDistritalesToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->graficosDistritalesToolStripMenuItem->Text = L"Graficos Distritales";
			this->graficosDistritalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::graficosDistritalesToolStripMenuItem_Click);
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::usuariosToolStripMenuItem_Click);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// asignarDescuentosToolStripMenuItem
			// 
			this->asignarDescuentosToolStripMenuItem->Name = L"asignarDescuentosToolStripMenuItem";
			this->asignarDescuentosToolStripMenuItem->Size = System::Drawing::Size(250, 26);
			this->asignarDescuentosToolStripMenuItem->Text = L"Asignar Descuentos";
			this->asignarDescuentosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::asignarDescuentosToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1205, 612);
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
	RequestSearcherForm^ requestSearcherForm = gcnew RequestSearcherForm(this);		//Crear form.
	requestSearcherForm->MdiParent = this;			//Padre mdi(form de donde viene) this = ese mismo
	requestSearcherForm->Show();
}
private: System::Void graficosDistritalesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DistrictAnalyticForm^ districAnalyticForm = gcnew DistrictAnalyticForm();
	districAnalyticForm->MdiParent = this;			//Padre mdi(form de donde viene) this = ese mismo
	districAnalyticForm->Show();
}
private: System::Void usuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	UserGraphicsForm^ userGraphicsForm = gcnew UserGraphicsForm();
	userGraphicsForm->MdiParent = this;			//Padre mdi(form de donde viene) this = ese mismo
	userGraphicsForm->Show();

}
private: System::Void promocionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Promotionsmaintenance^ PromotionsMaintenance = gcnew Promotionsmaintenance();
	PromotionsMaintenance->ShowDialog();
}
private: System::Void asignarDescuentosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DiscountsForm^ discountsForm = gcnew DiscountsForm();
	discountsForm->MdiParent = this;
	discountsForm->Show();
}
};
}
