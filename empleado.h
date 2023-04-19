#ifndef EMPLEADO_H
#define EMPLEADO_H

class empleado {

	private:

		char cedula[20];
		char nombreCompleto[50];
		float salarioActual;
		float salarios12Meses;
		int numEmpleado;


	public:

		empleado();
		empleado(char[], char[], float, int);
		char* getCedula();
		char* getNombre();
		float getSalarioActual();
		float getSalarios12Meses();
		void  setCedula(char[]);
		void  setNombre(char[]);
		void  setSalarioActual(float);
		void  setSalarios12Meses(float);
		void  aumentarSalarioActual(float);
		void  registrarPagoSalario(char[]);
		float obtenerAguinaldo();
		void  imprimirEmpleado();
};

#endif // EMPLEADO_H
