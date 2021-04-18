#include <stdio.h>

int main(){
    double number = 0;
    double total = 0;
    double average = 0;
    int count = 0;

    printf("Bienvenido, ingrese los numeros a promediar\n");
    printf("Presione 9999 para realizar el calculo\n");

    while (number != 9999){
        printf ("Ingrese un numero: ");
        scanf(" %lf", &number);
        printf("\n");
        if (number != 9999){
            total += number;
            count++;
        }
    }
    average = total / count;
    printf("El promedio de todos los numeros ingresados es: %.2lf\n",average);
}