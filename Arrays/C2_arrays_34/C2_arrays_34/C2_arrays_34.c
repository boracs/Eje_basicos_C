




#include<stdio.h>
#include<Windows.h>
#define pos 5
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);



	/*
	34)Escribir un programa que pida números entre 1 y 9 y cuando tecleen 0, visualizar un
	informe donde se indica cada uno de los números y las veces que lo han tecleado.
*/
	int arrDeNum[pos];
	// int arrDeNum[pos] = {0,0,0,0,0,0,0,0,0};    // Aqui inicialicoy declaro a la vez pero,  porque no puedo declarar la variable e nicializarla por separado. es dcir:
				// int arrDeNum[pos];
				// arrDeNum = {0,0,0,0,0,0,0,0,0};

	//inicializo todos los valores del array a 0;
	for (int i = 1; i < pos; i++) {
		arrDeNum[i] = 0;
	}

	// pido mel numeor una  primera vez
	int num ; 
	printf("Introduzca un numero del 1 al %d  que quiera para sumar mas uno en esa posicion, cero si quiere finalizar\n", pos);
	scanf_s("%d", &num);
	//compruebo que el numer introducido esta entre lso valores requeridos sino vuelvoa  pedir
	while (num < 0 || num > pos)
	{
		printf("___ERROR____El numeor no es vlaido met eun numoer del  1 al %d  porfavor o  cero si quiere finalizar \n", pos);
		scanf_s("%d", &num);
	}

	//mientras el numero introducido sea distinto de cero vyuelve a pedir todo:
	while (num != 0) {
		arrDeNum[num - 1]++;  //incremento en mas uno el valor de la posicion escogida
		printf("Introduzca un numero del 1 al %d  que quiera para sumar mas uno en esa posicion, cero si quiere finalizar\n", pos);
		scanf_s("%d", &num);
		//si el numeor introducido no esta entr elos valores requeridos vuelvo a preguntar todo
		while (num < 0 || num > pos)
		{
			printf("___ERROR____El numeor no es vlaido met eun numoer del  1 al %d  porfavor o  cero si quiere finalizar \n", pos);
			scanf_s("%d", &num);
		}
	}
	for (int i = 0; i < pos; i++) {
		printf("eL NUMERO %d la metiste: %d veces \n", i+1, arrDeNum[i]);
	}

}

