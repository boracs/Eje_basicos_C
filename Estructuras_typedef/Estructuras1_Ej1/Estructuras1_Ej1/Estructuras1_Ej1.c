




#include<stdio.h>
#include<Windows.h>
//defino el tamañao del array de productos
#define TAM 5
// declaro el type def
typedef struct{
	char nombre[30];
	int existencias;
}producto;
main() {
/*
1) Escribir un programa que:
• Cargue una tabla de 10 elementos como la siguiente.
Producto
Existencias
Producto
Existencias.
Donde cada posición almacena un nombre de producto de 30 caracteres y un
número de existencias que será entero.
• Ordene la tabla por orden ascendente de existencias.
• Pida un número y muestre un listado como el siguiente con todos los datos de
los registros cuyas existencias sean superiores al número.
Posición Producto Existencias.
Xxxxxxx xxxxxxxx xxxxxxxx
Xxxxxxx xxxxxxxx xxxxxxxx
Total: SUMA DE EXISTENCIAS
*/
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	//cargado estatico del array
	
	producto listaProductos1[TAM] = {
		{"alfombra",21},
		{"secador",13},
		{"lavadora",3},
		{"peine",11},
		{"dardo",1},
	};
	
	//cargado dinamico del array (carga el usuario)
			//primero creo el array
	// producto listaProductos1[3];

	/*
	//cargo los dtos en el array d emanera dinamica
	for (int i = 0; i < TAM; i++) {
		printf("Dame el nombre del %d producto:",i+1);
		gets(listaProductos1[i].nombre);
		printf("Dame el numero de %s:", listaProductos1[i].nombre);
		scanf_s("%d", &listaProductos1[i].existencias);
		rewind(stdin);
	}
	*/
	//imprimo el array
	printf("%20s %20s %20s \n", "Posicion", "Producto", "Existencias");
	for (int i = 0; i < TAM; i++) {
		printf("%20d %20s %20d  \n",i,listaProductos1[i].nombre,listaProductos1[i].existencias);
	}
	printf("\n");

	//ordeno al array por burbuja el menor al final


	for (int i = 0; i < TAM-1; i++) {
		for (int j = 0; j < TAM-1-i; j++) {
			if (listaProductos1[j].existencias > listaProductos1[j+1].existencias) {
				producto aux = listaProductos1[j];
				listaProductos1[j] = listaProductos1[j+1];
				listaProductos1[j + 1] = aux;
			}
		}
	}

	printf("%20s %20s %20s \n", "Posicion", "Producto", "Existencias");
	for (int i = 0; i < TAM; i++) {
		printf("%20d %20s %20d  \n", i, listaProductos1[i].nombre, listaProductos1[i].existencias);
	}
	printf("\n");



	printf("Dame un numero y te dire todos los productos que tengan mas existencias de este numero");
	int cant;
	scanf_s("%d", &cant);

	for (int i = 0; i < TAM; i++) {
		if (listaProductos1[i].existencias >= cant) {
		printf("%20d %20s %20d  \n", i, listaProductos1[i].nombre, listaProductos1[i].existencias);
		}
	}


}

