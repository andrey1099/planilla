#include "interaccion.h"
#include <iostream>
#include <cstring>

using namespace std;

interaccion::interaccion()
{
	arrayEmpleados = nullptr;
	numEmpleados = 0;
}

interaccion::interaccion(int numEmpleadosAux)
{
	arrayEmpleados = new empleado[numEmpleadosAux];
	numEmpleados = numEmpleadosAux;
}


void interaccion::generacionEmpleados()
{
	int arrayTamano = sizeof(arrayEmpleados) / sizeof(arrayEmpleados[0]);

	for (int i = 0; i < arrayTamano; i++)
	{
		char[20] cedulaAux;
		char[50] nombreAux;
		float salarioBaseAux = 0;

		cout << "Digite la cedula del empleado #"i + 1": ";
		cin.getline(cedulaAux, 20);
		cout << endl << endl;

		cout << "Digite el nombre del empleado #"i + 1": ";
		cin.getline(nombreAux, 20);
		cout << endl << endl;

		cout << "Digite el salario base del empleado #"i + 1": ";
		cin << salarioBaseAux;
		cout << endl << endl;

		arrayEmpleados[i] = empleado(cedulaAux, nombreAux, salarioBaseAux, i + 1);

		cout << "Empleado #"i + 1" creado";

		system("cls");
	}
}

void interaccion::modificarEmpleado()
{
	char[20] cedulaAux;
	float aumentoSalarial = 0;
	int arrayTamano = sizeof(arrayEmpleados) / sizeof(arrayEmpleados[0]);
	cout << "Digite la cedula del empleado que desea modificar: ";
	cin.getline(cedulaAux, 20);
	cout << endl << endl;

	for (int i = 0; i < arrayTamano; i++)
	{
		if (strcmp(cedulaAux, arrayEmpleados[i].getCedula) == 0) {

			cout << "Digite el aumento salarial que desea hacer: ";
			cin >> aumentosalarial;

			arrayEmpleados[i].aumentarSalarioActual(aumentoSalarial);

			cout << "aumento salarial realizado";
		}
	}
}

void interaccion::imprimirEmpleados()
{
	int arrayTamano = sizeof(arrayEmpleados) / sizeof(arrayEmpleados[0]);

	for (int i = 0; i < arrayTamano; i++)
	{
		arrayEmpleados[i].imprimirEmpleado;

		cout << endl << endl;
	}
}

void interaccion::pagarEmpleados()
{
	int arrayTamano = sizeof(arrayEmpleados) / sizeof(arrayEmpleados[0]);

	for (int i = 0; i < arrayTamano; i++)
	{
		arrayEmpleados[i].registrarPagoSalario;

		cout << endl << endl;
	}

	cout << "Pagos realizados a todos los empleados";
}

void interaccion::obtenerAguinaldo()
{
	char[20] cedulaAux;

	float aguinaldoEmpleado = 0;
	int arrayTamano = sizeof(arrayEmpleados) / sizeof(arrayEmpleados[0]);
	cout << "Digite la cedula del empleado para obtener el aguinaldo a pagar: ";
	cin.getline(cedulaAux, 20);
	cout << endl << endl;

	for (int i = 0; i < arrayTamano; i++)
	{
		if (strcmp(cedulaAux, arrayEmpleados[i].getCedula) == 0) {

			aguinaldoEmpleado = arrayEmpleados[i].obtenerAguinaldo();

			cout << "El aguinaldo del empleado encontrado es: "aguinaldoEmpleado;
		}
	}
}

