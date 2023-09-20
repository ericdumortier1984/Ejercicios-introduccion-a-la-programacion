#include <iostream>
#include <conio2.h>
using namespace std;
//7) Mostrar en Consola la edad y si tu edad es mayor a 50 (debe ser aclarada con 1 o 0) (Spoiler, no usar estructura IF)
//	Salida en consola:
//	======================
//	Tengo <edad> anios
//	Soy mayor a 50? : <1 o 0>
//	======================
int main(int argc, char *argv[]) {
	
	int edad = 38;
	bool respuesta = edad > 50;
	
	cout << "====================" << endl;
	cout << "Tengo " << edad << " años" << endl;
	cout << "¿Soy mayor a 50 años? : " << respuesta;
	
	return 0;
}

