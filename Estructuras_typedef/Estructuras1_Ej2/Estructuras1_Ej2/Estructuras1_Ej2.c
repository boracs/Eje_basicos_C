




#include<stdio.h>
#include<Windows.h>
#define TAM 4
typedef struct {
	char palabraOriginal[25];
	char traduccion[25];
} palabra;


main() {
	/*
	1) Se quiere programar una aplicaci�n para traducir palabras de castellano a euskera.
		Para ello se cuenta con una estructura como la siguiente:
		Palabra:
		Traduccion:
		...............................................................................................
		.........
		Palabra:
		Traduccion:
		Que consiste en una tabla de TAM ENTRADAS donde cada entrada consta de
		dos campos cada uno de los cuales es una cadena de caracteres de longitud m�xima 25
		caracteres.
		El programa pedir� palabras en castellano, las buscar� en la tabla y si �sta est�
		en el diccionario mostrar� su traducci�n.
		Se pide:
		a) Declarar el tipo ENTRADA con la estructura necesaria para almacenar una
		palabra y su traducci�n.
		b) Realizar el programa principal para que haga lo siguiente; (declarar todas las
		variables que sean necesarias e incluir los .h que hagan falta).
		i) Cargue la tabla.
		ii) Ordene la tabla por orden alfab�tico de palabra.
		iii) Repita lo siguiente:
		(1) Pedir una palabra
		(2) Traducirla buscando la palabra en la tabla
		(3) Mostrar el resultado de la traducci�n.
		(4) Preguntar si continuar.
		Mientras la respuesta sea positiva
	*/
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	palabra listaPalabras1[TAM];


	//cargo la tabla
	for (int i=0; i < TAM; i++) {
		printf("Dame una palabra;");
		gets(listaPalabras1[i].palabraOriginal);
		printf("Dame una traduccion;");
		gets(listaPalabras1[i].traduccion);
		rewind(stdin);
	}
	printf("\n");
	//imprimo la tabla
	printf("%20s %20s \n", "palabra", "traduccion");
	for (int i = 0; i < TAM; i++) {
		printf("%20s %20s \n", listaPalabras1[i].palabraOriginal, listaPalabras1[i].traduccion);;
	}
	printf("\n");

	//ordeno la tabla alfabeticamente


}

