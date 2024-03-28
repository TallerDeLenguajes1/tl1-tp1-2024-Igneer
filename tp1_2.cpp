#include <stdio.h>

int cuadrado(int num1);
void cuadradoPuntero(int *p);
void variable(int num1);
void invertir(int *p1, int*p2);
void orden(int *n1,int *n2);

int main()
{
    int *puntero;
    int a, b;
    int resultado;
    puntero = &a;

    printf("Ingrese un par de valores:\n");
    printf("a =");
    scanf("%d", &a);
    printf("b =");
    scanf("%d", &b);

    printf("Probando la funcion cuadrado de un numero: \n");
    resultado = cuadrado(a);
    printf("Resultado: a = %d\n", resultado);

    printf("Probando la misma funcion pero ahora es de tipo void:\n");
    cuadradoPuntero(&a);
    resultado = a;
    printf("Resultado: a = %d\n", resultado);

    printf("Probando la funcion para invertir los valores de ambos:\n");
    invertir(&a, &b);
    printf("Ahora a = %d y b = %d\n", a,b);

    printf("Probando la funcion orden:\n");
    orden(&a,&b);
    printf("Ahora a = %d y b = %d\n", a,b);
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
void orden(int *p1,int *p2)
{
    if(*p1>*p2)
    {
        invertir(p1,p2);
    }
}