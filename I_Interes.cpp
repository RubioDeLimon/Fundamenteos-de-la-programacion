/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
//
// (C) JORGE MARIN SANCHEZ
// 1ºC INGENIERIA INFORMÁTICA
//
// Bloque practicas 2
//
/* Programa que calcula una cantidad de euros en base a una cantidad depositada
	más un incremento a lo largo de un año:
															    	  interes
			cantidad total = cantidad inicial + cantidad inicial * ------------
																		100
*/				
/***************************************************************************/
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	float capital;
	float interes;
	float total;
	
	//#ENTRADA
	cout << "CALCULO DE INCREMTO DE EUROS A PLAZO FIJO EN UN AÑO" << endl;
	cout << "Introduce el capital inicial: ";
	cin >> capital;
	cout << "Introduce el porcentaje de interes: " << endl;
	cin >> interes;
	
	// Comprobación de interes valido
	if(interes < 0 || interes > 100){
		do{
			cout << "Introduce un porcentaje de interes valido: " << endl;
			cin >> interes;
		} while (interes < 0 || interes > 100);
	}
	
	//#CALCULO
	total = capital + capital * interes /100;
	total = floor(100*total)/100; // Redondeo a las centesimas
	
	//#SALIDA
	cout << "La cantidad total despues de un año es de: " << total << " Euros."
	<< endl;
	
	return 0;	
}
