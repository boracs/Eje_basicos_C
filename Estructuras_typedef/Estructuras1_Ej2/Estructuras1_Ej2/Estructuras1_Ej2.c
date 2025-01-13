




#include<stdio.h>
#include<Windows.h>
#define TAM 5
typedef struct {
	char palabraOriginal[25];
	char traduccion[25];
} palabra;


main() {
	/*
	1) Se quiere programar una aplicación para traducir palabras de castellano a euskera.
		Para ello se cuenta con una estructura como la siguiente:
		Palabra:
		Traduccion:
		...............................................................................................
		.........
		Palabra:
		Traduccion:
		Que consiste en una tabla de TAM ENTRADAS donde cada entrada consta de
		dos campos cada uno de los cuales es una cadena de caracteres de longitud máxima 25
		caracteres.
		El programa pedirá palabras en castellano, las buscará en la tabla y si ésta está
		en el diccionario mostrará su traducción.
		Se pide:
		a) Declarar el tipo ENTRADA con la estructura necesaria para almacenar una
		palabra y su traducción.
		b) Realizar el programa principal para que haga lo siguiente; (declarar todas las
		variables que sean necesarias e incluir los .h que hagan falta).
		i) Cargue la tabla.
		ii) Ordene la tabla por orden alfabético de palabra.
		iii) Repita lo siguiente:
		(1) Pedir una palabra
		(2) Traducirla buscando la palabra en la tabla
		(3) Mostrar el resultado de la traducción.
		(4) Preguntar si continuar.
		Mientras la respuesta sea positiva
	*/
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	//cargo la tabla
	//opccion 1 (las mete el programa estaticamente para aligicar las pruebas)
	palabra diccionario1[TAM] = {
		{"fuego","sua"},
		{"secador","lerogailua"},
		{"lavadora","lavagailua"},
		{"peine","orratza"},
		{"camion","camioia"},
	};
	/*
	* //opcion2 (las mete el usuario , mas dinamico)
	for (int i=0; i < TAM; i++) {
		printf("Dame una palabra;");
		gets(diccionario1[i].palabraOriginal);
		printf("Dame una traduccion;");
		gets(diccionario1[i].traduccion);
		rewind(stdin); //meto rewind siempre que teng aun gets despues de un scan_f(); // lo uso cuando hay un scanf_s antes del gets
	}
	*/


	printf("\n");
	//imprimo la tabla
	printf("%20s %20s \n", "palabra", "traduccion");
	for (int i = 0; i < TAM; i++) {
		printf("%20s %20s \n", diccionario1[i].palabraOriginal, diccionario1[i].traduccion);;
	}
	printf("\n");

	//ordeno la tabla alfabeticamente

	for (int i = 0; i < TAM-1; i++) {
		for (int j = 0; j < TAM - 1-i; j++) {
			//No puedo hacr esto: dicc1[j].palbr > dicc1[j+1].palbr xk esty comparando 2 palabras
			//entocnes hago lo sogiiente(linea d eabajo)
			int resultado = strcmp(diccionario1[j].palabraOriginal, diccionario1[j+1].palabraOriginal);
			//si resultado = 1:   la palabra en el 1º param es mayor.
			//si resultado = 0:   las palbras son ==.
			//si resultado = -1:  la palabra en el 1º param es menor.
			if (resultado>0){
				palabra aux = diccionario1[j];
				diccionario1[j] = diccionario1[j+1];
				diccionario1[j+1] = aux;
			}
		}
	}
	printf("\n");
	// imprimo el diccionario1 ordenado
	printf("%20s %20s \n", "palabra", "traduccion");
	for (int i = 0; i < TAM; i++) {
		printf("%20s %20s \n", diccionario1[i].palabraOriginal, diccionario1[i].traduccion);;
	}
	printf("\n");


	int respuesta = 1;

	while (respuesta == 1) {

		//pregunto la palabra que se desea buscar

		printf("Dame una palabra que quieras buscar:");
		char palabraBuscada[25];
		gets(palabraBuscada);

		//hago la busqueda (binaria)

		char com = 0;
		char fin = TAM - 1;
		char med = (com + fin) / 2;
		int resultado = strcmp(palabraBuscada, diccionario1[med].palabraOriginal);

		while (resultado != 0 && com <= fin) {
			if (resultado > 0) {
				com = med + 1;
			}
			else if (resultado < 0) {
				fin = med - 1;
			}
			med = (com + fin) / 2;
			resultado = strcmp(palabraBuscada, diccionario1[med].palabraOriginal);
		};
		if (resultado != 0) {
			printf("Palabra no encontrada");
			respuesta = 0;
		}
		else {
			printf("la palabra traducida es: %s", diccionario1[med].traduccion);
		}

	}




}

