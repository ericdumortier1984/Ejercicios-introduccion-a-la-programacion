#include <iostream>
#include <conio2.h>
#include <string>
using namespace std;
//5) Mostrar en consola tu nombre, tu apellido y tu edad pero con la siguiente interfaz: <nombre>,
//	<apellido> y <edad> son las variables a mostrar:
//	Salida en consola:
//	======================
//	Mi Nombre es: <Nombre>
//	Mi apellido es: <Apellido> 
//  Tengo <edad> anios
//	======================
int main(int argc, char *argv[]) {
	
	string nombre;
	string apellido;
	int edad = 38;
	
	cout << "=====================" << endl;
	cout << "Mi Nombre es: ";
	cin >> nombre;
	cout << "Mi apellido es: ";
	cin >> apellido;
	cout << "Tengo " << edad << " años" <<endl;
	cout << "=====================";
	
	return 0;
}

