
#include<stdio.h>
#include<Windows.h>
#define POS 6
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
/*
	1) Escribir un programa que:
	a) Cargue una tabla.
	b) Pida una posición y mientras esta sea positiva.
	i) Pide un número y si es mayor que el contenido de la posición leída en b)
	introduce en dicha posición el número.
	ii) Vuelve a pedir posición y vuelva a b).
	c) Muestra un informe como el siguiente con los datos ordenados por selección.
	POSICIÓN CONTENIDO
	0 _______XXX
	1 _______XXXX
	2 _______XXXXX
	3 _______XXXXX
*/
	//cargo un array 
	int arr[POS] = {3,6,5,7,8,2};
	// Pida una posición y mientras esta sea positiva
	int num=0;
	int dig=0;
		do {
			printf("que posicion quieres saber\n");
			scanf_s("%d", &num);
			if (num >= POS) {
				printf("Error_____vuevla  a intentarlo introduzca un numeor menor que %d o negativo si desea salir\n", POS);
			}
			else if (num<0) {
				printf("Metiste u n numero negativo por lo que finaizo el programa aqui tiene su informe\n");
			}
			else{
				printf("la posicion %d tiene le valor %d \n", num, arr[num]);
				printf("que numero quieres introducir en su lugar\n");
				int dig;
				scanf_s("%d", &dig);
				//comparo que el digito es mayor que el numeor en esa pos y lo cambio si es asi.
				if (dig > arr[num]) {
					arr[num] = dig;
					printf("la posicion es mayor se cambiaran  los datos\n");
				}
				else {
					printf("Error____el dig es menor que el valor que posee esta posicion no se intercambiaran los datos\n");
				}
				//imprimo el array
				for (int i = 0; i < POS; i++) {
					printf("la posicion %d tiene le valor %d \n", i, arr[i]);
				}
			}
		} while (num >= 0);
		


	printf("%20s %20s \n", "POSICION", "VALOR");
	for (int i = 0; i < POS; i++) {
		printf("%20d %20d\n", i, arr[i]);
	}




}

