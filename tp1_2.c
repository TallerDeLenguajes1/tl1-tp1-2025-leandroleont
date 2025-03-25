#include <stdio.h>

int cuadrado(int num);
void cuadradoVoid(int num, int *resultado);
void mostrar(int num);
void invertir(int *num1, int *num2);
void orden(int *num1, int *num2);



int main() {

    int selector, num1, num2;

    printf("Que funcion desea utilizar: \n");
    printf("1- Cuadrado de un n%cmero \n", 163);
    printf("2- Cuadrado de un n%cmero (void) \n", 163);
    printf("3- Mostrar contenido y direcci%cn de memoria de una variable \n", 162);
    printf("4- Invertir dos valores \n");
    printf("5- Ordenar dos valores \n");

    scanf("%d", &selector); 

    switch (selector) {
    case 1:
        printf("Ingrese un n%cmero: \n", 163);
        scanf("%d", &num1); 
        printf("El cuadrado de %d es: %d\n", num1, cuadrado(num1));
        break;

    case 2:
        printf("Ingrese un n%cmero: \n", 163);
        scanf("%d", &num1);
        cuadradoVoid(num1, &num2); 
        printf("El cuadrado de %d (con funci%cn void) es: %d\n", num1, 162, num2);
        break;

    case 3:
        printf("Ingrese un n%cmero: \n", 163);
        scanf("%d", &num1); 
        mostrar(num1); 
        break;

    case 4:
        printf("Ingrese el primer valor: \n");
        scanf("%d", &num1); 
        printf("Ingrese el segundo valor: \n");
        scanf("%d", &num2); 
        printf("Antes de invertir: x = %d, y = %d\n", num1, num2);
        invertir(&num1, &num2); 
        printf("Despu%cs de invertir: x = %d, y = %d\n", 130, num1, num2);
        break;

    case 5:
        printf("Ingrese el primer valor: \n");
        scanf("%d", &num1); 
        printf("Ingrese el segundo valor: \n");
        scanf("%d", &num2); 
        printf("Antes de ordenar: x = %d, y = %d\n", num1, num2);
        orden(&num1, &num2); 
        printf("Despu%cs de ordenar: x = %d, y = %d\n", 130, num1, num2);
        break;

    default:
        printf("Opción no válida.\n");
        break;
    }

}

int cuadrado(int num)
{
    return num * num;
}

void cuadradoVoid(int num, int *resultado)
{
    *resultado = num * num;
}

void mostrar(int num)
{
    printf("El contenido de la variable es: %d \n", num);
    printf("La dirección de memoria de la variable es: %d \n", &num);
}

void invertir(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void orden(int *num1, int *num2)
{
    if (*num1 > *num2)
    {
        invertir(num1, num2);
    }
    
}
