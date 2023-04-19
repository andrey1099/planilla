#ifndef INTERACCION_H
#define INTERACCION_H
#include "empleado.h"

class interaccion
{

	private:

		empleado* arregloEmpleados;
		int cantidadEmpleados;


	public:

		interaccion();
		interaccion(int numEmpleados);
		~interaccion();
		void generacionEmpleados(int);
		void modificarEmpleado();
		void imprimirEmpleados();
		void pagarEmpleados();
		void obtenerAguinaldo();
};

#endif // INTERACCION_H
