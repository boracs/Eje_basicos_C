




#include<stdio.h>
#include<Windows.h>
#define TAM 256

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	// copuia la ffrease 1 en la frase 2  strcpy_s 
	char frase1[TAM] = "UNO";
	int longitud = strlen(frase1)+1;   //guardo en una variable la  cantidad de caracteres de la frase 1 (hago +1 por e ultimo caracter que es null)
	char frase2[TAM];
	strcpy_s(frase2,longitud, frase1);  //copio en la frase 2 a frase 1:
	printf("FRASE1 : ");
	printf(frase1);  //imprimo frase 1 (pondra UNO)
	printf("\n");
	printf("FRASE2 : ");
	printf(frase2);  //imprimo frase 2 (pondra UNO)
	printf("\n");
	printf("---------------------------------------------------------------");
	printf("\n");

	//concaten una frase con otra:  strcat_s
	strcpy_s(frase1, 5, "Hola");
	strcpy_s(frase2, 8, "amigos");
	printf("FRASE1 :");
	printf(frase1);
	printf("\n");
	printf("FRASE2 :");
	printf(frase2);
	printf("\n");
	strcat_s(frase1, strlen(frase2)+strlen(frase1)+1, frase2); //  añado la frase 2 en la 1 (solo hago uan vez mas uno )
	printf("FRASE1 :");
	printf(frase1);
	printf("\n");
	printf("---------------------------------------------------------------");
	printf("\n");

	//strcmp(); me dice si dos cadenas son iguales (devuelve 0 si son iguales menor que cero si la primera es menor y mayor si viceversa. Depende de asci)
	char frase3[TAM] = "Hola amigos que tal estais?"; //tiene 27 caracteres mas le null
	char frase4[TAM] = "Hola amigos que tal estais?";  
	int esIgual = strcmp(frase3, frase4);
	if (esIgual == 0) {
		printf("La frase es igual");
	}
	else if (esIgual == 1) {
		printf("La frase uno es mayor ");
	}
	else{
		printf("La frase dos es mayor ");
	}
	printf("\n");
	printf("---------------------------------------------------------------");
	printf("\n");

	// strlen  me devuelve allongitud de una array d ecaract sinincluir el ultimo quew es null
	printf("la longitud de la frase 1 es: %d", strlen(frase1) + 1); 	
	printf("\n");
	printf("la longitud de la frase 2 es: %d", strlen(frase2) + 1);
	printf("\n");
	printf("la longitud de la frase 3 es: %d", strlen(frase3) + 1);
	printf("\n");
	printf("la longitud de la frase 4 es: %d", strlen(frase4) + 1);
	printf("\n");
}



