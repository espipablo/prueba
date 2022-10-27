#include <iostream>
using namespace std;
int main () {

	double numero1 = 0, numero2 = 0, resultado_suma = 0, resultado_resta = 0, resultado_producto = 0, resultado_division = 0;
	cout << "voy a decirte la suma, resta ,multiplicación y la división  de los 2 números que digas, dime el primer número" << endl;
	cin >> numero1;
	cout << "Dime el número 2" << endl;
	cin >> numero2;
	
	resultado_suma = numero1 + numero2;
	resultado_resta = numero1 - numero2;
	resultado_producto = numero1 * numero2;
	resultado_division = numero1 / numero2;
	

	cout << "El resultado de de la suma es " << resultado_suma <<endl;
	cout << "El resultado de de la resta es " << resultado_resta <<endl;
	cout << "El resultado de del producto es " << resultado_producto <<endl;
	cout << "El resultado de de la división es " << resultado_division <<endl;
	}
	
