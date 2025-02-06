

/*
1) Se trata de programar una aplicaci�n que nos sirva para llevar el control de los kil�metros
realizados por los veh�culos de una empresa de transporte. Dicha aplicaci�n funcionar�
como sigue:
� Los datos de los 5 veh�culos se almacenan en una tabla. Estos datos son los
siguientes:
� Matr�cula: La matr�cula del veh�culo
� Modelo: String de 20 caracteres
� Tipo: Misma descripci�n que el dato anterior.
� Kms Acumulados: entero que ir� acumulando el total de kil�metros
realizados por el veh�culo.
En dicho fichero se ir�n contabilizando los kil�metros.
Se Pide:
a) Programar el programa principal para que muestre el siguiente men�
0. Salir
1. Inicializar.
2. Alta veh�culo
3. Registrar viaje.
4. Baja veh�culo.
5. Consultar veh�culo.
6. Listar veh�culo.
Declarar tambi�n las estructuras, tipos y variables locales que sean necesarias.
b) Pone a 0 el contador de registros introducidos.
c) Programar la funci�n RegistrarViaje para que:
i) Pida un n�mero de veh�culo (�ndice de la tabla), entre 0 y el n�mero de veh�culos
introducidos.
ii) Acceda a la posici�n de la tabla correspondiente al veh�culo introducido y muestre
la matr�cula, el tipo y el modelo del mismo.
iii) Pida el n�mero de Kms. realizados por el veh�culo introducido y acumule en la
posici�n correspondiente el n�mero de Kil�metros.
d) Programar la funci�n AltaVeh�culo para que pida los datos de un veh�culo y lo d� de
alta en la primera posici�n libre (es decir, la indicada por cont) inicializando a 0 el
n�mero de kms. La primera posici�n libre coincide con el contador de los introducidos
hasta el momento. Tras insertar sumar� 1 a dicho contador.
e) Programar la funci�n BajaVeh�culo para que pida el n�mero (posici�n) del un veh�culo
y lo d� de baja, moviendo todos los registros siguientes hacia atr�s y restando 1 al
contador de veh�culos introducidos.
f) Programar la funci�n ConsultaVeh�culo para que pida una matr�cula de veh�culo y
muestre sus datos.
g) Programar la funci�n ListarVeh�culos para que muestre un listado con los datos de
todos los veh�culo*/

typedef struct
{
	char Matricula[10];
	char Modelo[20];
	char Tipo[20];
	float kms;
} VEHICULO;

#include <stdio.h>
#include <Windows.h>
#define TAM 5

// funciones que voy a usar
void mostrarMenu(int opc, int CR, VEHICULO v[]);
void registrarViaje(int CR, VEHICULO v[]);
void altaVehiculo(int CR, VEHICULO v[]);
void bajaVehiculo(int CR, VEHICULO v[]);
void consultaVehiculo(int CR, VEHICULO v[]);
void InfoVehiculos(int CR, VEHICULO v[]);
void inicializarV(int CR, VEHICULO v[]);

main()
{

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	int ContReg = 0;
	VEHICULO v1[5];
	int opc = -1;
	mostrarMenu(opc, ContReg, v1);
}

void mostrarMenu(int opc, int CR, VEHICULO v[])
{
	int inicio = 0;
	do
	{
		do
		{
			printf("Dame una opcion del 0 al 6\n");
			scanf_s("%d", &opc);
		} while (opc < 0 || opc > 6);

		if (opc == 1)
		{ // inicializar
			inicializarV(CR, v);
			inicio = 1;
		}
		else if (opc == 2)
		{ // alta vehiculo
			if (inicio == 0)
			{
				printf("Tienes que inicializar los vehiculos primero");
			}
			else
			{
				altaVehiculo(CR, v);
			}
		}
		else if (opc == 3)
		{
			if (inicio == 0)
			{
				printf("Tienes que inicializar los vehiculos primero");
			}
			else
			{
				registrarViaje(CR, v);
			}
		}
		else if (opc == 4)
		{
			if (inicio == 0)
			{
				printf("Tienes que inicializar los vehiculos primero");
			}
			else
			{
				bajaVehiculo(CR, v);
			}
		}
		else if (opc == 5)
		{
			if(inicio == 0)
			{
				printf("Tienes que inicializar los vehiculos primero");
			}
			else
			{
				consultaVehiculo(CR, v);
			}
		}
		else if (opc == 6)
		{
			if (inicio == 0)
			{
				printf("Aun no ahy veiculso inicializa todo primero");
			}
			else
			{
				InfoVehiculos(CR, v);
			}
		}
	} while (opc != 0);

	printf("Se acabo el programa gracias");
}

void registrarViaje(int CR, VEHICULO v[])
{
	int numV = -1;
	do
	{
		printf("Dame el numero de vahiculo;\n");
		scanf_s("%d", &numV);
	} while (numV < 0 || numV > CR);
	for (int i = 0; i < CR; i++)
	{
		if (numV == i)
		{
			printf("Matricula: %s, Tipo: %s, Modelo: %s", v[i].Matricula, v[i].Tipo, v[i].Modelo);
		}
		printf("Dime la cantidad de km recorridos:");
		float km;
		scanf_s("%f", &km);
		v[i].kms = v[i].kms + km;
		printf("El km total ahora es:%d", v[i].kms);
	}
}

void altaVehiculo(int CR, VEHICULO v[])
{
	printf("Dame la matricula del vehiculo:");
	scanf_s("%s", &v[CR].Matricula);
	printf("Dame el modelo del vehiculo:");
	scanf_s("%s", &v[CR].Modelo);
	printf("Dame el tipo del vehiculo:");
	scanf_s("%s", &v[CR].Tipo);
	v[CR].kms = 0;
	CR++;
	printf("El vehiculo se ha dado de alta correctamente");
}

void bajaVehiculo(int CR, VEHICULO v[])
{
	int numV = -1;
	do
	{
		printf("Damel el numero del vehiculo");
		scanf_s("%d", &numV);
	} while (numV < 0 || numV > CR);
	for (int i = 0; i < CR; i++)
	{
		if (numV == i)
		{
			for (int j = i; j < CR; j++)
			{
				v[j] = v[j + 1];
			}
		}
	}
	CR--;
}

void consultaVehiculo(int CR, VEHICULO v[])
{
	char matricula[10];
	printf("Dame la matricula del vehiculo que quieres consultar:");
	scanf_s("%s", &matricula);
	for (int i = 0; i < CR; i++)
	{
		if (strcmp(v[i].Matricula, matricula) == 0)
		{
			printf("Matricula: %s, Tipo: %s, Modelo: %s, Kms: %f", v[i].Matricula, v[i].Tipo, v[i].Modelo, v[i].kms);
		}
	}
}

void InfoVehiculos(int CR, VEHICULO v[])
{
	for (int i = 0; i < CR; i++)
	{
		printf("Matricula: %s, Tipo: %s, Modelo: %s, Kms: %f", v[i].Matricula, v[i].Tipo, v[i].Modelo, v[i].kms);
	}
}

void inicializarV(int CR, VEHICULO v[])
{
	printf("cuantos vehiculos quieres meter?");
	int numV = 0;
	scanf_s("%d", &numV);
	for (int i = 0; i < numV; i++)
	{
		printf("Dame la matricula del vehiculo:");
		scanf_s("%s", &v[i].Matricula);
		printf("Dame el modelo del vehiculo:");
		scanf_s("%s", &v[i].Modelo);
		printf("Dame el tipo del vehiculo:");
		scanf_s("%s", &v[i].Tipo);
		v[i].kms = 0;
	}
}