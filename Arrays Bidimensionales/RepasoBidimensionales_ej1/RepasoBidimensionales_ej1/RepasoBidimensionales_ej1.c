




#include<stdio.h>
#include<Windows.h>
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

/*
2) 
Realizar un programa que muestre el siguiente men�:
a) Cargar tabla: carga una tabla bidimensional de 3 X 5.
b) Consultar: pide un n�mero (n) y saca un informe como el siguiente
Fila Veces
0 xxxxx
1 xxxxx
2 xxxxx
Total: suma de la columna veces.
Donde en cada l�nea se muestra cu�ntas veces aparece el n�mero n en la fila
correspondiente. Total ser� la suma de las veces que aparece n en todas las
filas. 

*/
	int opcion = -1;

	do {
		printf("Que quieres hacer \n 1)cargar una tabla bidimensional \n 2)Consultar");
		int opcion;
		scanf_s("d", & opcion);

	} while (opcion == -1);

	printf("Fin del programas gracias");








}

