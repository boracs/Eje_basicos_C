




#include<stdio.h>
#include<Windows.h>
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
/*6) Diseñar un programa que lea un importe de venta y una cantidad pagada y calcule el
número mínimo monedas a entregar como cambio a la cantidad pagada.
*/





	int monedas[] = { 200,100,50,20,10,5,2,1 };


	float importe;
	float pagado;
	int vueltas;
	int n;
	int i;
	printf("dame el importe");
	scanf_s("%f",&importe);
	do {
		printf("Dame la cantidad que vas a pagar");
		scanf_s("%f", &pagado);
	} while (pagado < importe);
	vueltas = (int)((pagado - importe) * 100);
	if (vueltas != 0) {
		printf("El importe NO ES EXACTO hay vueltas");
		 i = 0;
		while (vueltas != 0) {
			n = vueltas / monedas[i];
			if (n != 0) {
				printf("%d modenas de %f€\n",n, (float)monedas[i] / 100);
			}
			vueltas = vueltas % monedas[i];
			i++;
		}



	}
	else {
		printf("El importe es exacto NO HAY VUELTAS");
	}








}

