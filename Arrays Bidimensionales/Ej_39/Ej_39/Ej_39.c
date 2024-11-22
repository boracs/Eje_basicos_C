
#include<stdio.h>
#include<Windows.h>
#define Vend 5
#define Art 10

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
/* 
	39)Tenemos 5 vendedores y 10 artículos. Escribir un pragrama que pida Nº de
	Vendedor, Nº de Artículo y Unidades vendidas, y cuando tecleen 0 al pedir el Nº de
	Vendedor que visualice el siguiente informe:

	Nº Vendedor:
	Nº Artículo Unidades vendidas
	1
	2
	3
*/

	int ventas[Vend][Art];

	
	printf("Dame el numero dle vendero");
	int numVend;
	scanf("%d", numVend);

	do {





		printf("Dame el numero dle vendero");
		int numVend;
		scanf("%d", numVend);

	} while (numVend != 0);







}

