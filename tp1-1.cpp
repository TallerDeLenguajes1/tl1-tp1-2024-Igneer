#include <stdio.h>

int cuadrado(int num1);
void cuadradoPuntero(int *p);
void variable(int num1);
void invertir(int *p1, int*p2);
void orden(int *n1,int *n2);

int main()
{
    printf("Hola mundo\n");
    int *puntero;
    int i,e;
    puntero = &i;

    scanf("%d %d",&i,&e);

    printf("El contenido del puntero: %d\n", (*puntero));
    printf("La dirección de memoria del puntero es: %p\n", puntero);
    printf("La dirección de memoria de la variable es: %p\n", (&i));
    printf("La cantidad de memoria que utiliza es de %d bits\n", sizeof(int));

    orden((&i), (&e));

    printf("\nEl valor de i = %d y el de e = %d", i, e);

}

int cuadrado(int num1)
{
    return(num1*num1);
}

void cuadradoPuntero(int *p)
{
    *p = (*p) * (*p);
    return;
}

void variable(int num1)
{
    printf("\nDirección de la variable: %p", (&num1));
    printf("\nEl contenido de la variable: %d", num1);
}

void invertir(int *p1, int*p2)
{
    int aux;
    aux = (*p1);
    (*p1) = (*p2);
    (*p2) = aux;
    return;
}
void orden(int *n1,int *n2)
{
    int aux;

    if(*n1>*n2)
    {
        invertir(n1,n2);
    }
}