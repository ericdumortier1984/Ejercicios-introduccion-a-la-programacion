#include <iostream>
#include <conio2.h>
using namespace std;
//10) Ingresar por consola tu nombre y apellido y mostrarlo en pantalla
int main(int argc, char *argv[]) {
	
	string nombre;
	string apellido;
	
	cout << "MI NOMBRE ES: "; 
    cin >> nombre;
	cout << "MI APELLIDO ES: "; 
	cin >> apellido;
	cout <<endl;
	cout << "SU NOMBRE ES " << nombre << " Y SU APELLIDO ES " << apellido;
	
	return 0;
}

