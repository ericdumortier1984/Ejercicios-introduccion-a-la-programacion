#include <iostream>
#include <conio2.h>
using namespace std;
//  Ingresar 3 numeros enteros x, y, z e informar por consola la suma de x, el doble de y, todo m�s el triple de z, dividido 6: ((x + 2*y)+3*z)/6
//	Nota, en matem�tica el orden de las operaciones se jerarquizan con par�ntesis en primera instancia, corchete en segunda y llave en tercera. 
//  En C++ para todas las jerarqu�as se utilizan los par�ntesis. Ejemplo:
//	En matem�tica: {[(3 x 3) + 4 ] x 2} � 2 tiene le siguiente orden de resoluci�n: [(9 + 3 ) x 2 ] -2
//	(12 x 2) � 2
//	24 � 2
//	22
//	En C++ esa operaci�n es equivalente a: (((3 x 3) + 4 ) x 2) � 2 y el orden de resoluci�n es el mismo.
int main(int argc, char *argv[]) {
	
	int x;
	int y;
	int z;
	
	cout << "INGRESE NUMERO X: ";
	cin >> x;
	cout << "INGRESE NUMERO Y: ";
	cin >> y;
	cout << "INGRESE NUMERO Z: ";
	cin >> z;
	
	cout << "EL RESULTADO DE ((x + 2*y)+3*z)/6 ES: " <<(( x + 2*y)+3*z)/6;
	
  
	
	return 0;
}

