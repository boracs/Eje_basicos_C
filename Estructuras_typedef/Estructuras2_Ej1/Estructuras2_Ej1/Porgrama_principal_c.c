




#include<stdio.h>
#include<Windows.h>

#define  TAM 3

typedef struct {
	char T�tulo[50];
	char Autor[30];
	int Duraci�n;
}CANCION;


main() {

	CANCION disco1[TAM] = {
		{"nuestro primer dia", "borja",123},
		{"para todos y nadie mas","sergio",111},
		{"nadie se libro","borja",149},
	};





	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	/*
	*1) Tenemos una tabla con muchos elementos con estos atributos.
		T�tulo:
		Duraci�n:
		Autor:

		La tabla es de 10 elementos y cada uno de ellos es del tipo CANCION.
		Se pide:
		a) Definir el tipo canci�n para poder almacenar los siguientes datos de una canci�n.
		T�tulo: es una cadena de 15 caracteres.
		Autor: es una cadena de 15 caracteres.
		Duraci�n: es un entero.
		b) Hacer un programa principal que haga lo siguiente:
		i) Cargar la tabla de canciones.
		ii) Pedir nombres de autor hasta introducir la cadena vac�a y para cada uno de
		ellos mostrar la duraci�n total de sus canciones.
	*/

	char cadena[50] = "fdvfebvg";
	while (strcmp(cadena, "") != 0) {
		printf("Dame le nombre de un autor:");
		gets(cadena);
		int tiempo = 0;

		for (int i = 0; i < TAM; i++) {
			if (strcmp(cadena, disco1[i].Autor) == 0) {
				tiempo += disco1[i].Duraci�n;
			}
		}
		printf("la duracion total de sus cancniiones es:  %d ", tiempo);

	}
	






}

