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
#include "Supervisormaintenance.h"
#include "LoginForm.h"
#include "Profiles.h"
#include "PromotionsSearchs.h"


namespace ChitaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ChitaModel;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Thread^ myThread;
	//private: System::Windows::Forms::ToolStripMenuItem^ tiendasToolStripMenuItem;

	public:
		static Supervisor^ supervisor;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:


	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ToolStripMenuItem^ perfilesToolStripMenuItem;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ToolStripMenuItem^ perfilesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ verpromocionesToolStripMenuItem;





	public:
		static User^ user;

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
	private: System::Windows::Forms::ToolStripMenuItem^ supervisoresToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->MenuPrincipal = (gcnew System::Windows::Forms::MenuStrip());
			this->transaccionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transaccionToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->solicitarServicioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cuidadosPendientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asignarDescuentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->carerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosPropietariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promocionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supervisoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graficosDistritalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perfilesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perfilesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verpromocionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->MenuPrincipal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// MenuPrincipal
			// 
			this->MenuPrincipal->ImageScalingSize = System::Drawing::Size(20, 20);
			this->MenuPrincipal->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->transaccionToolStripMenuItem,
					this->archivoToolStripMenuItem, this->transaccionToolStripMenuItem1, this->mantenimientoToolStripMenuItem, this->reporteToolStripMenuItem,
					this->perfilesToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->MenuPrincipal->Location = System::Drawing::Point(0, 0);
			this->MenuPrincipal->Name = L"MenuPrincipal";
			this->MenuPrincipal->Padding = System::Windows::Forms::Padding(11, 4, 0, 4);
			this->MenuPrincipal->Size = System::Drawing::Size(1009, 32);
			this->MenuPrincipal->TabIndex = 1;
			this->MenuPrincipal->Text = L"MenuPrincipal";
			// 
			// transaccionToolStripMenuItem
			// 
			this->transaccionToolStripMenuItem->Name = L"transaccionToolStripMenuItem";
			this->transaccionToolStripMenuItem->Size = System::Drawing::Size(14, 24);
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::salirToolStripMenuItem_Click_1);
			// 
			// transaccionToolStripMenuItem1
			// 
			this->transaccionToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->solicitarServicioToolStripMenuItem,
					this->cuidadosPendientesToolStripMenuItem, this->asignarDescuentosToolStripMenuItem
			});
			this->transaccionToolStripMenuItem1->Name = L"transaccionToolStripMenuItem1";
			this->transaccionToolStripMenuItem1->Size = System::Drawing::Size(100, 24);
			this->transaccionToolStripMenuItem1->Text = L"Transaccion";
			// 
			// solicitarServicioToolStripMenuItem
			// 
			this->solicitarServicioToolStripMenuItem->Name = L"solicitarServicioToolStripMenuItem";
			this->solicitarServicioToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->solicitarServicioToolStripMenuItem->Text = L"Solicitar Servicio";
			this->solicitarServicioToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::solicitarServicioToolStripMenuItem_Click);
			// 
			// cuidadosPendientesToolStripMenuItem
			// 
			this->cuidadosPendientesToolStripMenuItem->Name = L"cuidadosPendientesToolStripMenuItem";
			this->cuidadosPendientesToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->cuidadosPendientesToolStripMenuItem->Text = L"Cuidados Pendientes";
			this->cuidadosPendientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cuidadosPendientesToolStripMenuItem_Click);
			// 
			// asignarDescuentosToolStripMenuItem
			// 
			this->asignarDescuentosToolStripMenuItem->Name = L"asignarDescuentosToolStripMenuItem";
			this->asignarDescuentosToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->asignarDescuentosToolStripMenuItem->Text = L"Asignar Descuentos";
			this->asignarDescuentosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::asignarDescuentosToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->carerToolStripMenuItem,
					this->mascotasToolStripMenuItem, this->usuariosPropietariosToolStripMenuItem, this->promocionesToolStripMenuItem, this->supervisoresToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// carerToolStripMenuItem
			// 
			this->carerToolStripMenuItem->Name = L"carerToolStripMenuItem";
			this->carerToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->carerToolStripMenuItem->Text = L"Cuidadores";
			this->carerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::carerToolStripMenuItem_Click);
			// 
			// mascotasToolStripMenuItem
			// 
			this->mascotasToolStripMenuItem->Name = L"mascotasToolStripMenuItem";
			this->mascotasToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->mascotasToolStripMenuItem->Text = L"Mascotas";
			this->mascotasToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mascotasToolStripMenuItem_Click);
			// 
			// usuariosPropietariosToolStripMenuItem
			// 
			this->usuariosPropietariosToolStripMenuItem->Name = L"usuariosPropietariosToolStripMenuItem";
			this->usuariosPropietariosToolStripMenuItem->Size = System::Drawing::Size(232, 26);
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
			// supervisoresToolStripMenuItem
			// 
			this->supervisoresToolStripMenuItem->Name = L"supervisoresToolStripMenuItem";
			this->supervisoresToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->supervisoresToolStripMenuItem->Text = L"Supervisores";
			this->supervisoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::supervisoresToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ventasToolStripMenuItem,
					this->usuariosToolStripMenuItem
			});
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// ventasToolStripMenuItem
			// 
			this->ventasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->graficosDistritalesToolStripMenuItem });
			this->ventasToolStripMenuItem->Name = L"ventasToolStripMenuItem";
			this->ventasToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ventasToolStripMenuItem->Text = L"Gráficos Pie";
			// 
			// graficosDistritalesToolStripMenuItem
			// 
			this->graficosDistritalesToolStripMenuItem->Name = L"graficosDistritalesToolStripMenuItem";
			this->graficosDistritalesToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->graficosDistritalesToolStripMenuItem->Text = L"Graficos Distritales";
			this->graficosDistritalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::graficosDistritalesToolStripMenuItem_Click);
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			// 
			// perfilesToolStripMenuItem
			// 
			this->perfilesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->perfilesToolStripMenuItem1,
					this->verpromocionesToolStripMenuItem
			});
			this->perfilesToolStripMenuItem->Name = L"perfilesToolStripMenuItem";
			this->perfilesToolStripMenuItem->Size = System::Drawing::Size(61, 24);
			this->perfilesToolStripMenuItem->Text = L"Vistas";
			// 
			// perfilesToolStripMenuItem1
			// 
			this->perfilesToolStripMenuItem1->Name = L"perfilesToolStripMenuItem1";
			this->perfilesToolStripMenuItem1->Size = System::Drawing::Size(178, 26);
			this->perfilesToolStripMenuItem1->Text = L"Perfiles";
			this->perfilesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::perfilesToolStripMenuItem1_Click);
			// 
			// verpromocionesToolStripMenuItem
			// 
			this->verpromocionesToolStripMenuItem->Name = L"verpromocionesToolStripMenuItem";
			this->verpromocionesToolStripMenuItem->Size = System::Drawing::Size(178, 26);
			this->verpromocionesToolStripMenuItem->Text = L"Promociones";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1009, 582);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(-6, 30);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(370, 582);
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::Desktop;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(12, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(352, 131);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Descubre los mejores cuidadores/paseadores para tu mascota";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(77, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 47);
			this->label1->TabIndex = 14;
			this->label1->Text = L"CHITA WALK";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(12, 448);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(39, 37);
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(12, 507);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(39, 37);
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(12, 563);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(39, 37);
			this->pictureBox6->TabIndex = 18;
			this->pictureBox6->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->ForeColor = System::Drawing::Color::DarkGray;
			this->label3->Location = System::Drawing::Point(77, 448);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(225, 37);
			this->label3->TabIndex = 19;
			this->label3->Text = L"+51945045018";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->ForeColor = System::Drawing::Color::DarkGray;
			this->label4->Location = System::Drawing::Point(77, 507);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(211, 37);
			this->label4->TabIndex = 20;
			this->label4->Text = L"_chitawalk_pe";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->ForeColor = System::Drawing::Color::DarkGray;
			this->label5->Location = System::Drawing::Point(77, 563);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 37);
			this->label5->TabIndex = 21;
			this->label5->Text = L"chita_Walky";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 36);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1009, 612);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->MenuPrincipal);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->MenuPrincipal;
			this->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->Name = L"MyForm";
			this->Text = L"Chita : Pagina general";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MenuPrincipal->ResumeLayout(false);
			this->MenuPrincipal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		if (user == nullptr) {
			LoginForm^ loginForm = gcnew LoginForm();
			loginForm->ShowDialog();
		}
		if (user != nullptr) {
			if (user->GetType() == Walker ::typeid) {
				carerToolStripMenuItem->Visible = false;
				mascotasToolStripMenuItem->Visible = false;
				usuariosPropietariosToolStripMenuItem->Visible = false;
				ventasToolStripMenuItem->Visible = false;
				promocionesToolStripMenuItem->Visible = false;
				supervisoresToolStripMenuItem->Visible = false;
				solicitarServicioToolStripMenuItem->Visible = false;
				asignarDescuentosToolStripMenuItem->Visible = false;
				cuidadosPendientesToolStripMenuItem->Visible = false;

			}
			else if (user->GetType() == Keeper::typeid) {
				carerToolStripMenuItem->Visible = false;
				mascotasToolStripMenuItem->Visible = false;
				usuariosPropietariosToolStripMenuItem->Visible = false;
				ventasToolStripMenuItem->Visible = false;
				promocionesToolStripMenuItem->Visible = false;
				supervisoresToolStripMenuItem->Visible = false;
				solicitarServicioToolStripMenuItem->Visible = false;
				asignarDescuentosToolStripMenuItem->Visible = false;
				cuidadosPendientesToolStripMenuItem->Visible = false;
			}
			else if (user->GetType() == PetOwner::typeid) {
				carerToolStripMenuItem->Visible = false;
				mascotasToolStripMenuItem->Visible = false;
				usuariosPropietariosToolStripMenuItem->Visible = false;
				ventasToolStripMenuItem->Visible = false;
				promocionesToolStripMenuItem->Visible = false;
				supervisoresToolStripMenuItem->Visible = false;
				solicitarServicioToolStripMenuItem->Visible = false;
				asignarDescuentosToolStripMenuItem->Visible = false;
				cuidadosPendientesToolStripMenuItem->Visible = false;
			}


			myThread = gcnew Thread(gcnew ThreadStart(this, &MyForm::MyRun));
			myThread->IsBackground = true;
			myThread->Start();
		}
	}

		   delegate void MyDelegate(String^);

		   void MyRun() {
			   while (true) {
				   try {
					   myThread->Sleep(1000);
					   Invoke(gcnew MyDelegate(this, &MyForm::UpdateTitle),
						   DateTime::Now.ToString("dd/MM/yyyy hh:mm:ss"));
				   }
				   catch (Exception^ ex) {
					   return;
				   }
			   }
		   }
		   void UpdateTitle(String^ new_title) {
			   this->Text = new_title;
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
	//districAnalyticForm->MdiParent = this;			//Padre mdi(form de donde viene) this = ese mismo
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
	discountsForm->ShowDialog();
}
private: System::Void supervisoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Supervisormaintenance^ supervisormaintenance = gcnew Supervisormaintenance();
	supervisormaintenance->ShowDialog();
	//Carermaintenance->MdiParent = this;
	//Carermaintenance->Show();
}


private: System::Void perfilesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Profiles^ profiles = gcnew Profiles();
	profiles->ShowDialog();
}
private: System::Void verpromocionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PromotionsSearchs^ promotionsSearchs = gcnew PromotionsSearchs();
	promotionsSearchs->ShowDialog();
}
private: System::Void salirToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
};
}
