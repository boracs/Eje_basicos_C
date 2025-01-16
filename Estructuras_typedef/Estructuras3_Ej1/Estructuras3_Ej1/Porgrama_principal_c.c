




#include<stdio.h>
#include<Windows.h>
#define TAM 3

typedef struct {
	char pregunta[100];
	char respuesta[100];
	int valor;
}Test1;


main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	/*Se quiere construir una aplicación para jugar a un juego de preguntas y respuestas. Teniendo en
cuenta que las preguntas se almacenan en una tabla de 10 posiciones.
1) Definir el tipo DATO para que contenga los datos que se necesitan de cada pregunta, es
decir:
• Pregunta: será un dato de tipo cadena de 100 caracteres máximo.
• Respuesta: será un dato de tipo cadena de 100 caracteres máximo.
• Valor: Será un dato de tipo int.

2) Implementar la aplicación principal con las siguientes opciones:
(0) Salir.
(1) Inicializar tabla: Pide las 10 preguntas, las 10 respuestas y los valores de cada
pregunta.
(2) Juego nuevo. Pone a 0 el marcador.
(3) Hacer pregunta. Pide un número entre 1 y 10 y saca la pregunta
correspondiente. El usuario introduce la respuesta, si acierta le suma al
marcador el valor de la pregunta, si falla se lo resta (si el número resultante es
negativo el marcador se queda en 0).
(4) Informe: muestra un listado con todas las preguntas disponibles (solo
preguntas, no contestaciones) y sus valores.*/


	int opcionmenu = -4;
	int marcador = 0;
	int cargado = 0;
	Test1 preguntas1[TAM];

	while (opcionmenu != 0) {


				  
					while (opcionmenu < 0 || opcionmenu>4) {
						printf("Dame u numero entre el 0 y el 4 dependiendo que quieres hacer: ----1salir pulsa 0 ----2juego nuevo ----3hacer pregunta ---4 informe \n");
						scanf_s("%d", &opcionmenu);
					}
					printf("Dame u numero entre el 0 y el 4 dependiendo que quieres hacer: ----1salir pulsa 0 ----2juego nuevo ----3hacer pregunta ---4 informe \n");
					scanf_s("%d", &opcionmenu);
					if (opcionmenu == 1) {
						printf("Cargamos las 3 pregunta\n");
						Test1 preguntas1[TAM] = {
							{"Cuando comenzo la segunda guerra mmundial?", "uno de septiembre de 1939",1},
							{"Cual es la capital de España?", "Madrid",5},
							{"Doonde esta Holanda?", "Europa",3},
						};
						cargado = 1;
					}

					if (opcionmenu == 2) {
						if (cargado == 1) {
							printf("Reniciando todo el programa borrando rpeguntas... reseteando marcador....\n");
							marcador = 0;
							cargado = 0;
						};
					};

					if (opcionmenu == 3) {
						if (cargado == 0) {
							printf("Antes debes de cargar las preguntas\n");
						}
						else {
							int numeroPregunta = -1;
							while (numeroPregunta > 2 || numeroPregunta < 0) {
								printf("Dame el numero entre el 0 y el 2 incluidos para esocger tu pregunta");
								scanf_s("%d", &numeroPregunta);
							}
							printf("Pregunta: %c", preguntas1[numeroPregunta].pregunta);
							printf("Dame tu respuesta:\n");
							char respuesta[100];
							gets(respuesta);
							int acertado = 0;

							if (strcmp(respuesta, preguntas1[numeroPregunta].respuesta) == 0) {
								acertado == 1;
							}
							else {
								acertado = 0;
							};

							if (acertado == 0) {
								if (marcador - preguntas1[numeroPregunta].valor < 0) {
									marcador = 0;
								};
								if (marcador - preguntas1[numeroPregunta].valor >= 0) {
									marcador = marcador - preguntas1[numeroPregunta].valor;
								};
							}
							else {
								marcador = marcador + marcador - preguntas1[numeroPregunta].valor;
							}
							printf("Llevas %d puntos", marcador);
						};
					};

					if (opcionmenu == 4) {
						printf("Mostrando lista de pregunta sy sus correspondiente valores:\n");
						for (int i = 0; i < TAM; i++) {
							printf("%c le corresponden  %d", preguntas1[i].pregunta, preguntas1[i].valor);
						}
					};

	};

}

