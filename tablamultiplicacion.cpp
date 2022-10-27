#include <iostream>
using namespace std;
int main () {
	int numero_entrada = 0, resultado0 = 0, resultado1 = 0,resultado2 = 0,resultado3 = 0,resultado4 = 0,resultado5 = 0,resultado6 = 0,resultado7 = 0;
	int resultado8 = 0, resultado9 = 0, resultado10 = 0;
	
	cout << "Dime un número y te digo su tabla de multiplicar del 0 al 10" << endl;
	cin >> numero_entrada;
	
	resultado0 = numero_entrada * 0;
	resultado1 = numero_entrada * 1;
	resultado2 = numero_entrada * 2;
	resultado3 = numero_entrada * 3;
	resultado4 = numero_entrada * 4;
	resultado5 = numero_entrada * 5;
	resultado6 = numero_entrada * 6;
 	resultado7 = numero_entrada * 7;
	resultado8 = numero_entrada * 8;
	resultado9 = numero_entrada * 9;
	resultado10 = numero_entrada * 10;
	
	cout << numero_entrada << " * 0 = " << resultado0 << endl;
	cout << numero_entrada << " * 1 = " << resultado1 << endl;
	cout << numero_entrada << " * 2 = " << resultado2 << endl;
	cout << numero_entrada << " * 3 = " << resultado3 << endl;
	cout << numero_entrada << " * 4 = " << resultado4 << endl;
	cout << numero_entrada << " * 5 = " << resultado5 << endl;
	cout << numero_entrada << " * 6 = " << resultado6 << endl;
	cout << numero_entrada << " * 7 = " << resultado7 << endl;
	cout << numero_entrada << " * 8 = " << resultado8 << endl;
	cout << numero_entrada << " * 9 = " << resultado9 << endl;
	cout << numero_entrada << " * 10 = " << resultado10 << endl;
	}
