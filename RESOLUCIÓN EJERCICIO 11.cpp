#include <iostream>
#include <conio2.h>
using namespace std;
//11) Ingresar por consola, Nombre, apellido y edad y mostrarlo en pantalla con la salida:
//	======================
//	Ingrese nombre: ------
//	Mi Nombre es: <Nombre> 
//  Ingrese Apellido: --------
//	Mi apellido es: <Apellido> 
//  Ingrese edad: --------
//	Tengo <edad> anios
//	======================
int main(int argc, char *argv[]) {
	
	string nombre;
	string apellido;
	int edad;
	
	cout << "==================" << endl;
	cout << "Ingrese nombre: "; 
	cin >> nombre;
	cout << "Mi nombre es: " <<nombre<< endl;
	cout << "Ingrese apellido: ";
	cin>> apellido;
	cout << "Mi apellido es: " <<apellido<< endl;
	cout << "Ingrese edad: ";
	cin >> edad;
	cout << "Tengo " <<edad<< " años" << endl;
	cout << "==================";
	
	
	
	
	return 0;
}

