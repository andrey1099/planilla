#include <iostream>
#include "interaccion.h"
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x, y };
	SetConsoleCursorPosition(hConsole, pos);
}


void menu()
{
	system("cls");
	gotoxy(0, 0); cout << "*------------PLANILLA------------*";
	gotoxy(0, 1); cout << "1) Ingresar Empleados";
	gotoxy(0, 2); cout << "2) Modificar Salario";
	gotoxy(0, 3); cout << "3) Pagar Empleados";
	gotoxy(0, 4); cout << "4) Ver Empleados";
	gotoxy(0, 5); cout << "5) Consultar Aguinaldo";
	gotoxy(0, 6); cout << "6) Salir";

	gotoxy(0, 8); cout << "Digite el numero de opcion: ";
	gotoxy(0, 9); cout << "*--------------------------------*";


}



int main()
{
	interaccion* interaccion1 = new interaccion();
	int numEmpleados = 0;
	boolean salir = false;
	int opcion = 0;

	while (salir == false)
	{
		menu();
		gotoxy(28, 8); cin >> opcion;

		switch (opcion) {
		case 1:
			system("cls");
			cout << "Digite la cantidad de empleados que desea registrar: ";
			cin >> numEmpleados;


			interaccion1->generacionEmpleados();

			break;

		}

	}
}

