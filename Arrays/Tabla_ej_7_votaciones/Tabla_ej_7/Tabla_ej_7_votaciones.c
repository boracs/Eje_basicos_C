




#include<stdio.h>
#include<Windows.h>
#define  PVOTOS   10

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	/*
	) Se supone que se están introduciendo los datos de una votación en la que hay 10 candidatos
numerados del 1 al 10. Leer los datos hasta que se introduzca el número 0, ir
almacenándolos en una tabla y al final imprimir un informe como el siguiente.

		CANDIDATO VOTOS %VOTOS
		1
		2
		3
		.
		.
		.

	*/


	int arrVotos [PVOTOS] = { 0,0,0,0,0,0,0,0,0,0 };
	int contVotos = 0;

	int num;
	do {

		printf("Dame un numero del 0 al 10 " );
		scanf_s("%d", &num);

		if (num != 0 && num >= 1 && num<=10) {
			for (int i = 0; i < PVOTOS; i++) {
				if (i == (num - 1)) {
					arrVotos[i]++;
					contVotos++;
				}
			}
		}
		else {
			printf("EL numeor no sirve tiene que estar entre el 0 y el 10\n");
		}
	} while (num != 0 || num<0 ||num>10);


	// imprimo resultados;

	printf(" %10s %10s %10s \n", "CANDIDATOS", "VOTOS", "% DE VOTOS");
	for (int i = 0; i < PVOTOS; i++) {
		printf("%10d %10d %10.2f % \n",i+1, (arrVotos[i]), ((float)arrVotos[i]/contVotos *100));
	}





}

