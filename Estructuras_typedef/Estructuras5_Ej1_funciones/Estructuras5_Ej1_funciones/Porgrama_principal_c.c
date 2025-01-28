

/*
1) Se trata de programar una aplicación que nos sirva para llevar el control de los kilómetros
realizados por los vehículos de una empresa de transporte. Dicha aplicación funcionará
como sigue:
• Los datos de los 20 vehículos se almacenan en una tabla. Estos datos son los
siguientes:
• Matrícula: La matrícula del vehículo
• Modelo: String de 20 caracteres
• Tipo: Misma descripción que el dato anterior.
• Kms Acumulados: entero que irá acumulando el total de kilómetros
realizados por el vehículo.
En dicho fichero se irán contabilizando los kilómetros.
Se Pide:
a) Programar el programa principal para que muestre el siguiente menú
0. Salir
1. Inicializar.
2. Alta vehículo
3. Registrar viaje.
4. Baja vehículo.
5. Consultar vehículo.
6. Listar vehículo.
Declarar también las estructuras, tipos y variables locales que sean necesarias.
b) Pone a 0 el contador de registros introducidos.
c) Programar la función RegistrarViaje para que:
i) Pida un número de vehículo (índice de la tabla), entre 0 y el número de vehículos
introducidos.
ii) Acceda a la posición de la tabla correspondiente al vehículo introducido y muestre
la matrícula, el tipo y el modelo del mismo.
iii) Pida el número de Kms. realizados por el vehículo introducido y acumule en la
posición correspondiente el número de Kilómetros.
d) Programar la función AltaVehículo para que pida los datos de un vehículo y lo dé de
alta en la primera posición libre (es decir, la indicada por cont) inicializando a 0 el
número de kms. La primera posición libre coincide con el contador de los introducidos
hasta el momento. Tras insertar sumará 1 a dicho contador.
e) Programar la función BajaVehículo para que pida el número (posición) del un vehículo
y lo dé de baja, moviendo todos los registros siguientes hacia atrás y restando 1 al
contador de vehículos introducidos.
f) Programar la función ConsultaVehículo para que pida una matrícula de vehículo y
muestre sus datos.
g) Programar la función ListarVehículos para que muestre un listado con los datos de
todos los vehículo*/



typedef struct {
	char Matricula[10];
	char Modelo[20];
	char Tipo[20];
	float kms;
}VEHICULO;

#include<stdio.h>
#include<Windows.h>
#define TAM 20;


//funciones que voy a usar 




void  mostrarMenu(int opc);
void registrarViaje(int CR, VEHICULO v[]);




main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	int ContReg = 0;
	int opc = -1;
	mostrarMenu(opc);
}
 

void registrarViaje(int CR, VEHICULO v[]) {
	int numV = -1;
	do {
	printf("Dame el numero de vahiculo;\n");
	scanf_s("%d", &numV);
	} while (numV<0 || numV>CR);
	for (int i = 0; i < CR; i++) {
		if (numV == i) {
			printf("Matricula: %s, Tipo: %s, Modelo: %s", v[i].Matricula, v[i].Tipo, v[i].Modelo);
		}
		printf("Dime la cantidad de km recorridos:");
		float km;
		scanf_s("%f", &km);
		v[i].kms = v[i].kms + km;
		printf("El km total ahora es:%d", v[i].kms);
	}
}














 void mostrarMenu(int opc) {
	int opc;
	do {
		do {
			printf("Dame una opcion del 0 al 6\n");
			scanf_s("%d", &opc);
		} while (opc < 0 || opc>6);


		if (opc == 1) {
			printf("opc1 ");
		}
		else if (opc == 2) {
			printf("opc2 ");
		}
		else if (opc == 3) {
			printf("opc3 ");
		}
		else if (opc == 4) {
			printf("opc4 ");
		}
		else if (opc == 5) {
			printf("opc5 ");
		}
		else if (opc == 6) {
			printf("opc6 ");
		}
	} while (opc != 0);

	printf("Se acabo el programa gracias");
}

