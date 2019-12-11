/*
 * main.c
 *
 * Dieses Programm berechnet aus festgelegten Euro Werten die dazugehörigen US-Dollar Beträge nach dem Wechselkurs.
 *
 *  Created on: 16.10.2019
 *      Author: Froemberg Raphael
 */

#include <stdio.h>

//konstante Variablen
const double nRateEUR = 1.28, nRateUSD = 0.78;

//Berechnung des neuen Betrags
double convert(double nValue, double nRate){
	return (nValue * nRate);
}

//Ausführung der Convert Funktionen und Ausgabe der Ergebnisse
int main(){
	double nValue1 = 1, nValue2 = 2, nValue3 = 5, nValue4 = 10, nValue5 = 20, nValue6 = 50, nValue7 = 100;

	printf("EUR  ->  USD\n");
	printf("%.2f \t %.2f\n", nValue1, convert(nValue1, nRateEUR));
	printf("%.2f \t %.2f\n", nValue2, convert(nValue2, nRateEUR));
	printf("%.2f \t %.2f\n", nValue3, convert(nValue3, nRateEUR));
	printf("%.2f \t %.2f\n", nValue4, convert(nValue4, nRateEUR));
	printf("%.2f \t %.2f\n", nValue5, convert(nValue5, nRateEUR));
	printf("%.2f \t %.2f\n", nValue6, convert(nValue6, nRateEUR));
	printf("%.2f \t %.2f\n", nValue7, convert(nValue7, nRateEUR));
	printf("\n");
	printf("USD  ->  EUR\n");
	printf("%.2f \t %.2f\n", nValue1, convert(nValue1, nRateUSD));
	printf("%.2f \t %.2f\n", nValue2, convert(nValue2, nRateUSD));
	printf("%.2f \t %.2f\n", nValue3, convert(nValue3, nRateUSD));
	printf("%.2f \t %.2f\n", nValue4, convert(nValue4, nRateUSD));
	printf("%.2f \t %.2f\n", nValue5, convert(nValue5, nRateUSD));
	printf("%.2f \t %.2f\n", nValue6, convert(nValue6, nRateUSD));
	printf("%.2f \t %.2f\n", nValue7, convert(nValue7, nRateUSD));

	return 0;
}
