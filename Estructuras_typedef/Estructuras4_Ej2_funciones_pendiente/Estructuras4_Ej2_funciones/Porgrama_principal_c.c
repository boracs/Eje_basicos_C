
/*

2) Queremos gestionar las horas extras de los trabajadores de una empresa. Para ello tenemos una tabla
con los siguientes datos de 20 trabajadores.
Nombre: cadena de 15 caracteres.
Horas trabajadas: entero.
JornadaMax: entero.
Se pide.

a) Declarar el tipo EMPLEADO para representar los empleados de la tabla.

b) Escribir el programa principal para que muestre el siguiente men�.
i) Crear tabla.
ii) Registrar horas.
iii) Informe de horas disponibles.

c) Programar la opci�n crear tabla para que inicialice las 20 posiciones de la tabla, pidiendo los 3
datos.

d) Programar registrar horas para que:
i) pida la posici�n del empleado.
ii) Pida la cantidad pida la cantidad de horas a registrar.
iii) Acumule las horas trabajadas hasta alcanzar como mucho la jornada m�xima, es decir, si se
quieren registrar 10 pero solo le quedan 3 para alcanzar la jornada m�xima, solo le sumar� 3.

Programar la opci�n Informe de horas disponibles para que muestre un informe como el siguiente
con los datos de todos aquellos empleados que no han cumplido su jornada m�xima:
Nombre Horas disponibles
xxxxx xxxxxx
xxxxx xxxxxx
.....
Donde horas disponibles es la diferencia entre jornada m�xima y horas trabajadas.

*/

typedef struct  {
	char nombre[15];
	int horasTrabajadas;
	int jornadaMax;
 }EMPLEADO;




#define TAM 3
#include<stdio.h>
#include<Windows.h>
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	EMPLEADO empleados1[TAM];




}

