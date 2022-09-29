#pragma once

using namespace System;
using namespace ChitaModel;
using namespace System::Collections::Generic;

namespace ChitaController {
	public ref class Controller
	{
		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE CARER
		//---------------------------------------------------------------------------------------------------------------------

	private:
		static List <Carer^>^ carerList = gcnew List<Carer^>(); // Variable de clase o atributo estático
	public:
		static int AddCarer(Carer^ carer);                      // Añadir carer
		static int UpdateCarer(Carer^ carer);                   // Modificar carer
		static int DeleteCarer(int carerId);                    // Eliminar carer
		static List <Carer^>^ QueryAllCarers();                 // Consultar todos los Carers activos
		static Carer^ QueryCarerById(int carerId);              // Consultar Carer por ID
	};
}