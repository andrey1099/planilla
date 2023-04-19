#include "empleado.h"
#include <iostream>
#include <cstring>

using namespace std;


empleado::empleado()
{
	strcpy(cedula, "Sin cedula");
	strcpy(nombreCompleto, "Sin nombre");
	salarioActual = 0;
	salarios12Meses = 0;
	numEmpleado = 0;

}

empleado::empleado(char cedulaAux[], char nombreCompletoAux[], float salarioBaseAux, int numEmpleadoAux)
{
	cout << "Objeto empleado #"contadorEmpleado" creado!";
}



char* empleado::getCedula()
{
	return cedula;
}

char* empleado::getNombre()
{
	return nombreCompleto;
}

float empleado::getSalarioActual()
{

	return salarioActual;

}

float empleado::getSalarios12Meses()
{
	return salarios12Meses;
}

void empleado::setCedula(char[] cedulaAux)
{
	strcpy(cedula, cedulaAux);
}

void empleado::setNombre(char[] nombreAux)
{
	strcpy(nombreCompleto, nombreAux);
}

void empleado::setSalarioActual(float salarioAux)
{
	salarioActual = salarioAux;
}

void empleado::setSalarios12Meses(float salarioAux)
{
	salarios12Meses = salarioAux;
}

void empleado::aumentarSalarioActual(float aumentoSalarial)
{
	if (aumentosalarial == trunc(aumentoSalarial))
	{
		float valorPorcentual = aumentoSalarial / 100;
		salarioActual = salarioActual + (salarioActual * valorPorcentual);
	}
	else
	{
		salarioActual = salarioActual + aumentoSalarial;
	}

	cout << "Aumento Salarial Realizado" << endl;
}

void empleado::registrarPagoSalario(char[] cedulaEmp)
{
	salarios12Meses++;
}

float empleado::obtenerAguinaldo()
{
	float salariosTotal = salarioActual * salarios12Meses;
	float aguinaldo = salariosTotal / 12;

	return aguinaldo;
}

void empleado::imprimirEmpleado()
{
	cout << "La cedula del empleado #"i" es: "cedula << endl;
	cout << "El nombre del empleado #"i" es: "nombreCompleto << endl;
	cout << "El salario base del empleado #"i" es: "salarioActual << endl;
}


