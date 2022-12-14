#pragma once


using namespace System;
using namespace ChitaModel;
using namespace System::Collections::Generic;
using namespace System::IO;

using namespace System::Globalization;
using namespace System::Data::SqlClient;

namespace ChitaController {
	public ref class Controller
	{
	public:
		/* Static se usa definir miembros que se pueden invocar
		sin necesidad de contar con una instancia de la clase. */
		static SqlConnection^ GetConnection();

		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE PETOWNER
		//---------------------------------------------------------------------------------------------------------------------
	private:
		static List <PetOwner^>^ PetOwnerList = gcnew List<PetOwner^>(); //lista de PetOwners
	public:

		static int AddPetOwner(PetOwner^ PetOwner); //anadir petowner
		static int UpdatePetOwner(PetOwner^ PetOwner);                   // Modificar petowner
		static int DeletePetOwner(int PetOwnerId);                    // Eliminar petowner
		static List <PetOwner^>^ QueryAllPetOwner();                 // Consultar todos los petowner activos
		static PetOwner^ QueryPetOwnerById(int PetOwnerId);              // Consultar petowner por ID
		static void PersistPetOwner();	
		static void LoadPetOwnerData();

		// Descuentos
		static List<PetOwner^>^ QueryPetOwnerByName(String^);
		static PetOwner^ QueryPetOwnerByDNI(String^ dni);

		//Registro de descuento
		private:
			static List <Discount^>^ DiscountList = gcnew List<Discount^>(); //lista de Discounts
		public:
		static void RegisterDiscount(Discount^ discount);
		static int QueryLastDiscountId();
		static List<Discount^>^ QueryAllDiscounts();
		static void PersistDiscounts();
		static void LoadDiscountsData();

		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE KEEPER
		//---------------------------------------------------------------------------------------------------------------------

	private:
		static List <Keeper^>^ keeperList = gcnew List<Keeper^>(); // Variable de clase o atributo est??tico
	public:
		static int AddKeeper(Keeper^ keeper);                      // A??adir carer
		static int UpdateKeeper(Keeper^ keeper);                   // Modificar carer
		static int DeleteKeeper(int keeperId);                    // Eliminar carer
		static List <Keeper^>^ QueryAllKeepers();                 // Consultar todos los Carers activos
		static Keeper^ QueryKeeperById(int keeperId);              // Consultar Carer por ID
		static void PersistKeepers();
		static void LoadKeepersData();

		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE WALKER
		//---------------------------------------------------------------------------------------------------------------------

	private:
		static List <Walker^>^ walkerList = gcnew List<Walker^>(); // Variable de clase o atributo est??tico
	public:
		static int AddWalker(Walker^ walker);                      // A??adir carer
		static int UpdateWalker(Walker^ walker);                   // Modificar carer
		static int DeleteWalker(int walkerId);                    // Eliminar carer
		static List <Walker^>^ QueryAllWalkers();                 // Consultar todos los Carers activos
		static Walker^ QueryWalkerById(int walkerId);              // Consultar Carer por ID
		static void PersistWalkers();
		static void LoadWalkersData();



		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE PET
		//---------------------------------------------------------------------------------------------------------------------
	
	private:	//privado para que otras clases no accedan a el.
		static List <Pet^>^ petList = gcnew List<Pet^>();	//como atributo para que viva mientras controller est?? activo. static: Lista unica y global.

	public: //static es para que los metodos sean globales.
		static int AddPet(Pet^ pet);				//M??todo para a??adir mascotas.
		static int UpdatePet(Pet^ pet);				//M??todo para actualizar datos de las mascotas.
		static int DeletePet(int petId);		//M??todo para eliminar una mascota del registro.

		static Pet^ QueryPetById(int petId);		//M??todo para mostrar una mascota por ID.
		static List <Pet^>^ QueryAllPets();			//M??todo para mostrar a todas las mascotas en una lista.

		static void PersistPets();

		static Void LoadPetsData();

		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE SERVICE REQUEST
		//---------------------------------------------------------------------------------------------------------------------

	private:	//privado para que otras clases no accedan a el.
		static List <ServiceRequest^>^ servicerequestList = gcnew List<ServiceRequest^>();	//como atributo para que viva mientras controller est?? activo. static: Lista unica y global.

	public: //static es para que los metodos sean globales.
		static int AddServiceRequest(ServiceRequest^ servicerequest);				
		static int UpdateServiceRequest(ServiceRequest^ servicerequest);				
		static int DeleteServiceRequest(int servicerequestId);		//M??todo para eliminar 

		static ServiceRequest^ QueryServiceRequestById(int servicerequestId);		//M??todo para mostrar  por ID.
		
		static List <ServiceRequest^>^ QueryAllServiceRequest();			//M??todo para mostrar a todas en una lista.
		static List <ServiceRequest^>^ QueryServiceRequestByPetKind(String^);
		static List <ServiceRequest^>^ QueryServiceRequestByPet(String^);
		static List <ServiceRequest^>^ QueryServiceRequestByService(String^);
		static List <ServiceRequest^>^ QueryServiceRequestByDistrict(String^);
		static List <ServiceRequest^>^ QueryServiceRequestByServiceDate(String^);
		static List <ServiceRequest^>^ QueryServiceRequestByDateTimeInit(String^);

		static void PersistServiceRequest();

		static Void LoadServiceRequestData();

		//---------------------------------------------------------------------------------------------------------------------
		// PARA TRANSACCI??N INTERFORM DE SERVICE REQUEST
		//---------------------------------------------------------------------------------------------------------------------

		static int CreateTempServiceRequest(ServiceRequest^ servicerequest);				
		static int UpdateTempServiceRequest(ServiceRequest^ servicerequest);
		static int DeleteTempServiceRequest(int servicerequestId);
			static void PersistUnicTempServiceRequest();
		static List <ServiceRequest^>^ QueryTempServiceRequest();
			static Void LoadUnicTempServiceRequestData();
		static ServiceRequest^ QueryServiceRequestByStatus(String^ servicerequestStatus);
			//---------------------------------------------------------------------------------------------------------------------
			// PARA MANTENIMIENTO DE PROMOTIONS
			//---------------------------------------------------------------------------------------------------------------------

		private:
			static List <Promotions^>^ PromotionList = gcnew List<Promotions^>(); // Variable de clase o atributo est??tico
		public:
			static int AddPromotions(Promotions^ Promotions);
			static int UpdatePromotions(Promotions^ Promotions);
			static int DeletePromotions(int PromotionsId);
			static List <Promotions^>^ QueryAllPromotions();
			static Promotions^ QueryPromotionsById(int PromotionsId);
			static void PersistPromotions();
			static void LoadPromotionsData();
			static List<Promotions^>^ QueryPromotionsByNameOrDescription(String^ value);

		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DEL RATING y RANKING
		//---------------------------------------------------------------------------------------------------------------------
		private:	//privado para que otras clases no accedan a el.
			static List <Rating^>^ ratingList = gcnew List<Rating^>();
		public:
			static int AddRating(Rating^ rating);

			static Rating^ QueryRatingById(int ratingId);

			static void PersistRating();
			static Void LoadRatingData();

			static List <Rating^>^ QueryAllRating();
			static List <Rating^>^ QueryRatingByCarerId(int carerid);
		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE SUPERVISOR
		//---------------------------------------------------------------------------------------------------------------------

		private:
			static List <Supervisor^>^ supervisorList = gcnew List<Supervisor^>(); // Variable de clase o atributo est??tico
		public:
			static int AddSupervisor(Supervisor^ supervisor);                      // A??adir supervisor
			static int UpdateSupervisor(Supervisor^ supervisor);                   // Modificar supervisor
			static int DeleteSupervisor(int supervisorId);                    // Eliminar supervisor
			static List <Supervisor^>^ QueryAllSupervisors();                 // Consultar todos los supervisors activos
			static Supervisor^ QuerySupervisorById(int supervisorId);              // Consultar supervisor por ID
			static void PersistSupervisors();
			static void LoadSupervisorsData();
		//---------------------------------------------------------------------------------------------------------------------
		// AUTENTIFICACION DE USUARIO
		//---------------------------------------------------------------------------------------------------------------------
			static User^ Login(String^ username, String^ password);

	};
}