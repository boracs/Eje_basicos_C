#include <stdio.h>
#define PI 3.1416

/*
						//---------------------------------------------------------

						Antes de comenzar dejo una lista de como imprimir los distintos tipos de tipos de datos: 

							int a = 10;
							float b = 3.14;
							double c = 3.14159265359;
							char d = 'A';
							char e[] = "Hola, mundo!";

						//	printf("El valor de a es: %d\n", a);       // Imprimir int
						//	printf("El valor de b es: %f\n", b);       // Imprimir float
						//	printf("El valor de c es: %lf\n", c);      // Imprimir double
						//	printf("El valor de d es: %c\n", d);       // Imprimir char
						//	printf("El valor de e es: %s\n", e);       // Imprimir string

						//-----------------------------------------------------------



// EJERCICIOS  1 al 7: 

1) Pedir dos números enteros e imprimir su suma.
2) Pedir dos números enteros e imprimir su resta.
3) Pedir cinco números reales e imprimir su suma.
4) Pedir rádio de un círculo e imprimir su longitud y su área.
5) Pedir tres números enteros e imprimir :  A.B/ 3.C
6) Pedir dos números enteros e imprimir :  A(al cubo)+ B(a lcubo) / 5
7) Pedir 5 números enteros e imprimir la suma y la media de los cinco números.
*/


main() {
	



	//1 
	/*
	int a = 0;
	int b = 0;
	int c = 0;

	printf("Dame el primer numeor entero:");
	scanf_s("%d", &a );
	printf("Dame el segundo numeor entero:");
	scanf_s("%d", &b );
	c = a + b;
	printf("El total de la suma es:%d\n",c);
	*/








	//2
	/*
	printf("Dame el primer numeor entero:");
	scanf_s("%d", &a);
	printf("Dame el segundo numeor entero:");
	scanf_s("%d", &b);
	c = a - b;
	printf("El total de la suma es:%d\n", c);
	*/






	//3                                                                                          
	/*
	* 
	double uno = 0;
	double dos = 0;
	double tres = 0;
	double cuatro = 0;
	double cinco = 0;

	printf("dame el primer numero:");
	scanf_s("%lf", &uno);
	printf("dame el segundo numero:");
	scanf_s("%lf", &dos);
	printf("dame el tercer numero:");
	scanf_s("%lf", &tres);
	printf("dame el cuarto numero:");
	scanf_s("%lf", &cuatro);
	printf("dame el quinto numero:");
	scanf_s("%lf", &cinco);

	double suma = uno + dos + tres + cuatro + cinco;

	printf("la suma de todos es: %lf", suma);
	
	*/







	//4

	/*

	float  radio = 0;
	float longitud = 0;
	float area = 0;

	printf("dame el radio del circulo:");
	scanf_s("%f", &radio);

	longitud = 2 * PI * radio;
	area = 2 * PI * radio * radio;

	printf("La longitud del circulo es: %f \n", longitud);
	printf("y el area del circulo es: %f\n" , area);
	
	*/







	//5
	/*
	int numeroUno = 0;
	int numeroDos =0;
	int numeroTres =0;

	printf("dame el primer numero");
	scanf_s("%d", &numeroUno);

	printf("dame el segundo numero");
	scanf_s("%d", &numeroDos);

	printf("dame el tercer numero");
	scanf_s("%d", &numeroTres);

	int resultado = (numeroUno * numeroDos) / (3 * numeroTres);

	printf("El resulado de esta operacion es : %d", resultado);

	*/








	//6

	/*
	
	int a = 0; 
	int b = 0; 
		
	printf("dame el primer numero :");
	scanf_s("%d", &a);

	printf("dame el segundo numero :");
	scanf_s("%d", &b);

	int resultado = ((a * a) + (b * b)) / 5;

	printf("el resultado es:%d", resultado);

	*/


	//7    Pedir 5 números enteros e imprimir la suma y la media de los cinco números.


		

			int uno = 0;
			int dos = 0;
			int tres = 0;
			int cuatro = 0;
			int cinco = 0;

			printf("dame el primer numero:");
			scanf_s("%d", &uno);
			printf("dame el segundo numero:");
			scanf_s("%d", &dos);
			printf("dame el tercer numero:");
			scanf_s("%d", &tres);
			printf("dame el cuarto numero:");
			scanf_s("%d", &cuatro);
			printf("dame el quinto numero:");
			scanf_s("%d", &cinco);

		    int suma = uno + dos + tres + cuatro + cinco;
			printf(" La suma da: %d", suma);


			printf("la media es: %f", (suma/5.0f));

}		