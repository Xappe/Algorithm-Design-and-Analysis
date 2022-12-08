#include<stdio.h>

float funcao(float a, float n);

int main()
{
    float a=10,n=5;
    float resultado;

    resultado=funcao(a,n);

    printf("\n%.20f", resultado);

    return 0;
}



float funcao(float a, float n)
{
    float i,j, denominador;
    float resultado=0;

    for(j=1; j<=n; j++)
    {
        denominador=1;
        for(i=0; i<j; i++)
        {
            denominador = denominador*a;
        }
        resultado = resultado +(j/denominador);
    }
    return resultado;
}
