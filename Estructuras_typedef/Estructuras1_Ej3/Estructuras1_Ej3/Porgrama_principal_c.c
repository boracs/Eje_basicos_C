




#include<stdio.h>
#include<Windows.h>

#define  TAM 3

typedef struct {
	char T�tulo[50];
	char Autor[30];
	int Duraci�n;
	char T�tulo;
}CANCION;


main() {

	CANCION disco1[TAM] = {
		{"nuestro primer dia", "amaral",123},
		{"para todos y nadie mas","kandi",111},
		{"nadie se libro","oscar",149},
	};





	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	/*
	*1) Tenemos una tabla como la siguiente mushos elementos cone stos atributos.
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








}

