
#include <stdio.h>
#include <iostream>


void calcularYMostrarArea() {
    float R;
    float circunferencia = 0;
    float area = 0;
    float  PI = 3.1416;

    printf("Introduzca Radio");
    scanf_s("%f", &R);

    circunferencia = 2 * PI * R;
    area = PI * R * R;


    printf("El area de la circunferencia es de %.2f \n", area);
    printf("%\n", area);
    printf("circunferencia % .2f", circunferencia);
}


main()
{
    calcularYMostrarArea();
}

