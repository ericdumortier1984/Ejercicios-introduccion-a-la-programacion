#include <iostream>
#include <conio2.h>
using namespace std;
//    Ingresar un número entero y decir si es mayor o menor a 100 informando con 1 o 0 (Spoiler, no
//    usar estructura IF)
//	  Ingrese numero del 1 al 100: ------
//	  Su numero es mayor a 100? : <1 o 0>
int main(int argc, char *argv[]) {
	
	int valor;
	
	cout << "INGRESE UN NUMERO DEL 1 AL 100: ";
	cin >> valor;
	cout << "SU NUMERO ES MAYOR A 100? :" << (valor >= 100) << endl;
	
	
	
	return 0;
}

