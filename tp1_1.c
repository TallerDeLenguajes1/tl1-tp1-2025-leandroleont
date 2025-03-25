#include <stdio.h>

int main() {

    printf("Hola mundo!\n");

    int num = 10;

    int *pnum = &num;

    printf("Contenido del puntero: %d\n", *pnum);
    printf("Direccion de memoria del puntero: %p\n", pnum);
    printf("Direccion de memoria de la variable num: %p\n", &num);
    printf("Direccion de memoria del puntero: %p\n", &pnum);
    printf("Tamaño de memoria usado por la variable num: %p\n", sizeof(num));

    return 0;
}