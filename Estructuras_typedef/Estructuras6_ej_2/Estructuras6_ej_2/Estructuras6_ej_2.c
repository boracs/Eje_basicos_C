#include <stdio.h>
#include <Windows.h>
#define TAM 3


 typedef struct
 {
	char nombre[16];
	int fallos;
	long costos;
}AREA;



void inicializar(AREA areas[], int tama�oArr);
void leerIncidencia(AREA areas[], int tama�oArr);




main(){

	AREA areas[TAM];
	inicializar(areas,TAM);

	for (int i = 0; i < TAM; i++) {
		printf("Area %d: %s, Fallos: %d, Costos: %ld\n", i + 1, areas[i].nombre, areas[i].fallos, areas[i].costos);
	}

	printf("Primera incidencia");
	 leerIncidencia(areas, TAM);
	printf("Segunda incidencia");
	 leerIncidencia(areas, TAM);



	for (int i = 0; i < TAM; i++) {
		printf("Area %d: %s, Fallos: %d, Costos: %ld\n", i + 1, areas[i].nombre, areas[i].fallos, areas[i].costos);
	}


}


void inicializar(AREA areas[], int tama�oArr) {

	for (int i = 0; i < tama�oArr; i++) {
		printf("area:%d \n Dame nombre",i);
		gets(areas[i].nombre);
		areas[i].fallos = 0;
		areas[i].costos = 0;
	}
}

void leerIncidencia(AREA areas[], int tama�oArr) {

	printf("Dame el noombre del area");
	int nombre = "";
	gets(nombre);

	printf("Dame el costo que ha supuesto");
	int costo;
	scanf_s("%d", &costo);

	for (int i = 0; i < tama�oArr; i++) {
		if ( strcmp(areas[i].nombre,nombre)==0) {
			areas[i].fallos++;
			areas[i].costos = areas[i].costos + costo;
			printf("Se abrio la incidencia nueva");
		}
	}


}