




#include<stdio.h>
#include<Windows.h>
#define CARACTERES 100

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);



	/*
		18) Escribir un programa que pida una frase y muestre el siguiente informe.
		Palabra      longitud
		Xxxx          xxxxx
		Donde aparece una palabra en cada línea junto con el número de letras de esa palabra
	*/

	//pido la frase 
	char frase1[CARACTERES] = "";
	printf("Introduce una palabra \n");
	gets(frase1);
	//imprimo el encabezado del formulario
	printf("%20s %20s \n", "PALABRA", "LONGITUD");

	//inicializo las varaibles que voy a necesitar
	int i  = 0;    //para recorrer cada letra de la frase
	char palabra[20] = "";  //palabra que a la que le voy añadiedno lso caracteres
	int j = 0;  // contador de la palabra me dice n que posicion quieor meter el siguiente caracter es decir frase[i] en palabra[j]
	int longitud = 0;  //me dice la cnatidad d caracteres que tiene una palabra

	//recorro la frase
	while (frase1[i] != '\0'){ //mientras no sea el ultimo caracter
		char espacio = 0;

		if (frase1[i] == ' ') {  //mientras que no sea un espacio o el caracter de cierre 
			printf("%20s %20d \n", palabra, longitud);
			j = 0;
			// palabra[20] = ""; //esto como no puedo hacerlo igual todo a espacios manualmente. en la siguiente linea
			memset(palabra, 0, sizeof(palabra));  // Limpiamos la variable palabra y la pone a ""
			longitud = 0;  // inicializo longitdu a cero
			espacio = 1;	//digo k espacio es 1 para que no me recorra la siguietne condicion
		
		}
		else if (espacio == 0) {        //mientras sean letras o caracteres distintos de espacio
			if (isalpha(frase1[i])) {   //mientras sean letras
				palabra[j] = frase1[i]; //le añado a palabra y el espacio que corresponde el caracter que toca de la frase
				j++;		//j mas uno para añadir el caracter de la frase que toca a la siguiente posicion de la palabra
				//como posiblemetne haya espacioso de mas tengo k asegurarme qde qu eno me cuente lso espsacios
				longitud++;				

		}
		i++;
	}
}

