#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hola mundo\n");
    int *puntero;
    int i = 90;
    //int e;
    puntero = &i;

    //scanf("%d %d",&i,&e);

    printf("El contenido del puntero: %d\n", (*puntero));
    printf("La dirección de memoria almacenada por el puntero es: %p\n", puntero);
    printf("La dirección de memoria de la variable es: %p\n", (&i));
    printf("la dirección de memoria del puntero es: %p\n", &puntero);
    printf("La cantidad de memoria que utiliza es de %d bits\n", sizeof(int));

    //orden((&i), (&e));
    //printf("\nEl valor de i = %d y el de e = %d", i, e);
}
