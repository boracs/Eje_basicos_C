





#include<stdio.h>
#include<Windows.h>
#define POS 6
#define INTRODUCIDOS 3
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);




	//Escribir un programa que cargue n�meros en una tabla, validando que cada n�mero sea
	//mayor que el anterior. Pedir 10 n�meros y decir cu�ntos de ellos estaban en la tabla y
	//cu�ntos no. Probarlo tambi�n con b�squeda binaria.


	int arr[POS];


	//INTRODUZCO VALORES AL ARRAY DE 6 POSICIONES
	printf("dame un numeor para rellenar el arrya en al posicion %d:", 0);
	int num;
	scanf_s("%d", &num);
	arr[0] = num;

	for (int i = 1; i < POS; i++) {
		printf("dame un numeor para rellenar el arrya en al posicion %d:", i);
		int num;
		scanf_s("%d", &num);
		while (num < arr[i - 1]) {
			printf("_____ERROR_____El numeor es menor que le anterior, introduzca otro:");
			printf("dame un numeor para rellenar el arrya en al posicion %d:", i);
			scanf_s("%d", &num);
		}
		arr[i] = num;
	}

	//pregunto los numeros que quieor comprobar si exitsen en el array anterior

	int intro[INTRODUCIDOS];

	for (int i = 0; i < INTRODUCIDOS; i++) {
		printf("dame un numeore para saber si existe:");
		int num;
		scanf_s("%d", &num);
		intro[i] = num;
	}



	//PIDO NUMOERS Y COMPRUEBO SI ESTAN  ( CON BUSQUEDA BINARIA ) 

	int existe = 0;
	int noEncontrados = 0;

	for (int i = 0; i < INTRODUCIDOS; i++) {
		int numbuscado = intro[i];

		int pinf = 0;
		int psup = POS - 1;
		int	pmed = POS / 2;


		while (pinf <= psup && arr[pmed] != numbuscado) {
			if (numbuscado < arr[pmed]) {
				psup = pmed;
				pmed = pmed / 2;
			}
			if (numbuscado > arr[pmed]) {
				pinf = pmed;
				pmed = pinf + (psup - pinf) / 2;
			}
		}


		if (arr[pmed] != numbuscado) {
			printf("Numero no encontrado");
			noEncontrados++;
		}
		if (arr[pmed] == numbuscado) {
			existe++;
		}

	}

	printf("Existen %d numeros de los 3 introducidoa en el array de 6 numeros", existe);
	printf("Los numeors no existemtes son:  %d", noEncontrados);
}
