#ifndef INTERACCION_H
#define INTERACCION_H

#include "empleado.h"

class interaccion
{

	private:

		empleado* arrayEmpleados;
		int numEmpleados;


	public:


		interaccion() = default;
		interaccion(int);
		void generacionEmpleados();
		void modificarEmpleado();
		void imprimirEmpleados();
		void pagarEmpleados();
		void obtenerAguinaldo();
};

#endif
