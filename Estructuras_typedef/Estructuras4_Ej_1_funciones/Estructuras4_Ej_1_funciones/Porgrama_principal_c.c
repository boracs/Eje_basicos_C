

/*1) Queremos gestionar las existencias de los productos de un almac�n. Para ello tenemos una tabla con
20 estructuras PRODUCTO como la siguiente.
Descripci�n: cadena de 15 caracteres.
Existencias: entero.
Stock m�nimo: entero.
Se pide.
a) Declarar el tipo PRODUCTO para representar los productos de la tabla.
b) Escribir el programa principal para que muestre el siguiente men�.
i) Crear tabla.
ii) Realizar venta.
iii) Informe de Necesidades.
c) Programar la opci�n crear tabla para que inicialice las 20 posiciones de la tabla, pidiendo los 3
datos.
d) Programar realizar venta para que:
i) Pida la posici�n del producto a vender.
ii) Pida la cantidad a vender.
iii) Si hay unidades suficientes se resta de las existencias la cantidad introducida (si no dar�
error). Habr� unidades suficientes si hay m�s de las que se quieren vender.
e) Programar la opci�n Necesidades de compra para que muestre un informe como el siguiente
con los datos de todos aquellos productos cuyas existencias est�n por debajo del stock m�nimo:
Descripci�n Cantidad a pedir.
xxxxx xxxxxx
xxxxx xxxxxx
.....
Donde la cantidad a pedir es la diferencia entre el campo existencias y el campo Stock m�nimo.*/


#include<stdio.h>
#include<Windows.h>
#define TAM 3

typedef struct {
	char desc[15];
	int ex;
	int stockMin;
}PRODUCTO;

void cargarPedido(PRODUCTO pedido[], int tama�oDelArray);
void realizarVenta(PRODUCTO pedido[], int tama�oDelArray);
void informeNeecesidades(PRODUCTO pedido[], int tama�oDelArray);



main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int opc = 1;
	PRODUCTO pedido1[TAM];


	//1� bucle pregunto si etsa entre valores validos  incluido el cero
	do {
		printf(" MENU_1: Que deseas hacer?\n 1 Crear tabla\n 2 Realziar venta\n 3 Informe de necesidades\n 0 Salir\n");
		scanf_s("%d", &opc);
		if (opc < 0 || opc>3) {
			printf("metiste una opcion erronea vulve a meter una opcion-0-1-2-3\n");
		}
	} while (opc < 0 || opc>3);


	//2� bucle verifico si es distinto de cero si es asi realizo logico y vuelvo a preguntar por uan ocpion sino finalizo
	
	int realziado2 = 0;

	while (opc != 0) {
			//logica:
		if (opc == 1) {
				cargarPedido(pedido1, TAM);
				realziado2 = 1;

		} else if(opc==2) {
			if (realziado2 == 1) {
				realizarVenta(pedido1, TAM);
			}
			else {
				printf("Debe realziar el llenado primero-");
			}
		}
		else if(opc==3) {

			if (realziado2 == 1) {
				informeNeecesidades(pedido1, TAM);
			}
			else {
				printf("Debe realziar el llenado primero-");
			}
		

		}
			//volvemos a preguntar 
			do {
				printf("MENU_2:Que deseas hacer?\n 1 Crear tabla\n 2 Realziar venta\n 3 Informe de necesidades \n 0 salir\n");
				
				scanf_s("%d", &opc);

				if (opc < 0 || opc>3) {
					printf("metiste una opcion erronea vulve a meter una opcion-0-1-2-3\n");
				}
			} while (opc <0 || opc>3);

		}
		//si metiste cero se acabo el programa salims del bucle
	
			

	
printf("El programa fializo con exito puslsaste cero");
	
}




void cargarPedido(PRODUCTO pedido[], int tama�oDelArray) {

	for (int i = 0; i < tama�oDelArray; i++) {
		printf("Dame la descripcion\n");
		rewind(stdin);
		gets(pedido[i].desc);
		printf("Dame las existencias\n");
		scanf_s("%d",&pedido[i].ex);
		printf("Dame el stock Minimo\n");
		scanf_s("%d", &pedido[i].stockMin);
	};

}




void realizarVenta(PRODUCTO pedido[], int tama�oDelArray) {
	int pos = -1;
	while (pos < 0 || pos > TAM-1) {
		printf("Dame la posicion del producto que quieres vender entre 0 y %d \n ", TAM - 1);
		scanf_s("%d", &pos);
	};

	printf("Que cantidad quieres vender\n");
	int cant;
	scanf_s("%d", &cant);

	if (pedido[pos].ex > cant) {
		pedido[pos].ex = pedido[pos].ex - cant;
	}
	else {
		printf("No hay tantas unidades lo siento se cancela el proceso\n");
	}
}



void informeNeecesidades(PRODUCTO pedido[], int tama�oDelArray) {
	printf(" %20s %20s \n ", "Descripcion", "Cantidad a pedir");
	for (int i = 0; i < tama�oDelArray; i++) {
		if (pedido[i].ex < pedido[i].stockMin) {
			printf(" %20s %20d \n ", pedido[i].desc, pedido[i].ex);
		}
	}




}