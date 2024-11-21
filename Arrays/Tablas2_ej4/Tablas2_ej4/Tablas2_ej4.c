
#include<stdio.h>
#include<Windows.h>
#define POS 3
main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	/*
	4) Escribir un programa que muestre el siguiente menú:
		i) Cargar tabla: Carga una tabla de 10 elementos. Calcular la suma y la media a
		medida que se introducen.
		ii) Modificar posición: pide una posición y un dato y lo introduce en la posición
		introducida. Actualizar la media (a ser posible sin volver a sumar todas las
		posiciones).
		iii) Calcular cuántos están por debajo de la media.
		iv) Calcular cuántos están por encima de la media.
		v) Salir
	*/

	int arr[POS];

	int opcion=1;
	int cargado = 0;
	int avg = 0;

	printf("Dme una opcion del 1 al 5\n");
	printf("MENU: \n Pulsa-1: Cargar tabla.\n Pulsa-2: Modificar posición \n Pulsa-3:Calcular cuántos están por debajo de la medi\n Pulsa-4:Calcular cuántos están por encima de la media.\n Pulsa-5:Salir\n");
	scanf_s("%d", &opcion);

	while(opcion!=0){

		if (opcion == 1) {
			INT sumTot= 0;
			for (int i = 0; i < POS; i++) {
				int dig;
				printf("en la %dº posicion que quieres meter?\n", i);
				scanf_s("%d", &dig);
				arr[i] = dig;
				sumTot = sumTot + dig;
				printf("De momento la media es: %d y la suma: %d\n", sumTot/(i+1), sumTot);
			}
			avg = sumTot / POS;
			cargado = 1;
		}else if (opcion == 2 && cargado!=0) {
				printf("Que posicion deseas modificar introduzca una entre 0 y %d\n", POS-1);
				int pos = -1;
				while (pos < 0 || pos >= POS){
					scanf_s("%d", &pos);
					if (pos < 0 || pos >= POS) {
						printf("No esta entre el rango exigido vuelva  a introducir\n");
					}
				} ;
				printf("Que numero desea introducir");
				int dig;
				scanf_s("%d", &dig);
				for (int i = 0; i < POS; i++) {
					if (pos == i) {
						int dif = arr[pos] - dig;
						int difAvg = dif / POS;
						avg = avg + difAvg;
						arr[pos] = dig;
					}
				}
				printf("La media se ha modificado ahora es %d\n", avg);
		} else if (opcion==3 && cargado!=0){
			int porEncimaDeLaMedia = 0;
			for (int i = 0; i < POS; i++) {
				if (arr[i] > avg) {
					porEncimaDeLaMedia++;
				}
			}
			printf("La cantidad de digitos por encima de la media es de %d", porEncimaDeLaMedia);
		}
		else if (opcion == 4 && cargado!=0) {
			int porDebajjoDeLaMedia = 0;
			for (int i = 0; i < POS; i++) {
				if (arr[i] < avg) {
					porDebajjoDeLaMedia++;
				}
			}
			printf("La cantidad de digitos por encima de la medai es de %d", porDebajjoDeLaMedia);
		}
		else if(cargado ==0 && opcion>0 && opcion<5){
			printf("OJO CUIDADO, antes de seleccionar cualquier opcion  deber pasar por la 1º.\n");
		
		}
		else if( opcion ==5){
			opcion == 0;
		}


		else {
			printf("Introduce un numero entre el 1 y 5\n");
		}
		if (opcion != 5) {
			printf("Dme una opcion del 1 al 5\n");
			printf("MENU: \n Pulsa-1: Cargar tabla.\n Pulsa-2: Modificar posición \n Pulsa-3:Calcular cuántos están por debajo de la medi\n Pulsa-4:Calcular cuántos están por encima de la media.\n Pulsa-5:Salir\n");
			scanf_s("%d", &opcion);
		}
	}
	printf("opcion5 introducida entendemos que dese salir Buen dia");

}

