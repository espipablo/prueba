#include <iostream>
using namespace std;
int main () {
	double nota_teoria = 0, nota_practicas = 0, nota_problemas = 0, nota_real_teoria = 0;
	double nota_real_practicas = 0, nota_real_problemas = 0, nota_total = 0;
	const double PORC_TEORIA = 0.7, PORC_PRACTICAS = 0.2, PORC_PROBLEMAS = 0.1;
	
	cout << "Dime tus notas de teoria practicas y problemas y te digo tu nota final! " << endl;
	cout << "Dime el de teoria" << endl;
	cin >> nota_teoria;
	cout << "Dime tu nota de practicas" << endl;
	cin >> nota_practicas;
	cout << "Dime tu nota de problemas " << endl;
	cin >> nota_problemas;
	
	nota_real_teoria = nota_teoria * PORC_TEORIA;
	nota_real_practicas = nota_practicas * PORC_PRACTICAS;
	nota_real_problemas = nota_problemas * PORC_PROBLEMAS;
	nota_total = nota_real_teoria + nota_real_practicas + nota_real_problemas;
	
	cout << "Tu nota total en programación es " << nota_total << endl;
	}
	
	
