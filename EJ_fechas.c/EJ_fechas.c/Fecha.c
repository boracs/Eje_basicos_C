#include <stdio.h>
#include <stdbool.h>






//Compruebo si es año bisiesto
bool isLeapYear(int year) {

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}







//valido el dia:  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
bool validateDay(int day, int month, int year) {
    int maxdias=31;
    if (month == 2) { //Si el mes es febrero
        if (isLeapYear(year)) {  //invoco la funcion isLeapYear y compruebo si es bisiesto, y si es bisiesto...
            maxdias = 29;
        }
        else {
            maxdias = 28;
        }
    }
    //para meses que no son febrero
    else if (month == 4 || month == 6 || month == 9 || month == 11) { // Abril, junio, septiembre y noviembre
        maxdias = 30;
    }
    /* //esta parte del codigo no hace falta poner lo coge por defecto
    else {
        maxdias = 31;
    }
    */

    if (day <1 || day > maxdias)
    {
        printf("el dia tiene que estar entre 1 y %d", maxdias);
        return false;
    }
    return true;
}



//compruebo el mes--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
bool validateMonth(int month) {
    if (month < 1 || month > 12) {
        printf("Mes invalido, el mes debe ser de entre el 1 que seria enero hata el 12 diciembre.\n");
        return false;
    }
    return true;
}



//compruebo el año----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
bool validateYear(int year) {
    
    if (year > 2024 || year < 2000) {
        printf("EL año es invalido debe ser entre 2000 y 2024 y has introducido %d \n", year);
        return false;
    }
    else {
        return true;
    }
}


// funcion principal que invoco en el main-----------------------------------------------------------------------------------------------------------------------------------------------------------


bool todoOk(int day, int month, int year) {
    if (validateDay(day, month, year) && validateMonth(month) && validateYear(year)) {  //si todas las demas funciones me devuelven true sigo adelante sino improm fecha invalida
        printf("Fecha valida.\n");
        return true;
    }
    else {
        printf("Fecha invalida.\n");
        return false;
    }
}



//MAIN    ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {
    //meto lso valores
    int day, month, year;
    printf("Introduce dia: ");
    scanf_s("%d", &day);
    printf("Introduce mes: ");
    scanf_s("%d", &month);
    printf("Introduce agno: ");
    scanf_s("%d", &year);
    //llamo a la funcion y le mando por parametors el dia mes y fecha e invoco la funcion ver si  la fecha es  valida.
    todoOk(day, month, year);
    
    int a;
    printf("Dame un numero");
    scanf_s("%d", &a);


    getch();
}