




#include<stdio.h>
#include<Windows.h>

#define  TAM 3

typedef struct {
	char Título[50];
	char Autor[30];
	int Duración;
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
		Título:
		Duración:
		Autor:

		La tabla es de 10 elementos y cada uno de ellos es del tipo CANCION.
		Se pide:
		a) Definir el tipo canción para poder almacenar los siguientes datos de una canción.
		Título: es una cadena de 15 caracteres.
		Autor: es una cadena de 15 caracteres.
		Duración: es un entero.
		b) Hacer un programa principal que haga lo siguiente:
		i) Cargar la tabla de canciones.
		ii) Pedir nombres de autor hasta introducir la cadena vacía y para cada uno de
		ellos mostrar la duración total de sus canciones.
	*/

	char cadena[50] = "fdvfebvg";
	while (strcmp(cadena, "") != 0) {
		printf("Dame le nombre de un autor:");
		gets(cadena);
		int tiempo = 0;

		for (int i = 0; i < TAM; i++) {
			if (strcmp(cadena, disco1[i].Autor) == 0) {
				tiempo += disco1[i].Duración;
			}
		}
		printf("la duracion total de sus cancniiones es:  %d ", tiempo);

	}
	






}

