




#include<stdio.h>
#include<Windows.h>
#define TAM 11 //TAMAÑNO DEL MES MAS LARGO QUE ES SEPTIEMBRE
#define MESES 12
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
/*
	49)Escribir un programa que pida una fecha en formato DD-MM-AA, si no es correcta
	visualizar mensaje de error y si es correcta la visualice como DD de nombre-mes de
	19AA
*/
	// declaro el array
	char meses[MESES][TAM] = { "enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septimebre", "ocubre", "noviembre", "diciembre" };
	
	//pido dia
	printf("Dame un dia:");
	int dia = 0;
	scanf_s("%d", &dia);
	//pido mes
	printf("Dame un mes:");
	int mes = 0;
	scanf_s("%d", &mes);
	//pido agno
	printf("Dame un agno:");
	int agno = 0;
	scanf_s("%d", &agno);


	//Valido si existe es fecha:
	int correcto = 1; //inicializo correcot en true

	//validaciones basica iniciales
	if(   dia < 1 || dia > 31    ||    mes < 1 || mes>12   ||   agno < 2000 || agno>2100    ) {
		correcto = 0;
	}
	else {
		if ((mes == 2 || mes == 4 || mes == 6|| mes == 9|| mes == 11) && (dia>30)) {
			correcto = 0;
		}
		else if(mes==2) {
			if ( !(agno % 4 == 0 && (agno % 100 != 0 || agno % 400 == 0)) && dia>28) {//si no  es visiesto y eñ dia es mayor que 28 correcto =0;
				correcto = 0;
			}
			else if (dia > 29) {
				correcto = 0;
			}
		}
	}
	if (correcto == 0) {
		printf("La fewcha introducida es incorrecta");
	}
	else {
		char Nombremes[TAM];
		strcpy_s(Nombremes,strlen(meses[mes-1])+1, meses[mes-1]);
		printf("la fecha es: %d de  %s de  %d", dia, Nombremes,  agno);
	}


}

