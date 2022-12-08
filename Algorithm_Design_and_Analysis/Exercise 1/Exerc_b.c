#include<stdio.h>
float funcao(float i, float j);

int main()
{
    float i=5,j=7;
    float resultado;

    resultado=funcao(i,j);

    printf("\n%.20f", resultado);

    return 0;
}



float funcao(float i, float j)
{
    float a,b;
    float resultado=0;

    for(a=1; a<=i; a++)
    {
        for(b=1; b<=j; b++)
        {
            resultado = resultado + (a*b);
        }
    }
    return resultado;
}
