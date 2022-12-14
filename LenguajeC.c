#include <stdio.h>
void saludo(int dim, char name[dim]);
int suma(int num1, int num2);

int main()
{
    int sumar;
    char nombre[20];
    int x, y;
    printf("Ingrese dos numeros: ");
    scanf("%i %i", &x, &y);
    printf("Numero 1: %i\n", x);
    printf("Numero 2: %i\n\n", y);

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    saludo(20, nombre);

    sumar = suma(x, y);
    printf("La suma de los dos numeros es: %i", suma);
    return 0;
}
void saludo(int dim, char name[dim])
{printf("Hola %s", name);}

int suma(int num1, int num2)
{
    int suma = 0;
    suma = num1 + num2;
    return suma;
}