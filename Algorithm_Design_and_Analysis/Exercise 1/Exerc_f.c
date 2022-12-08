#include<stdio.h>
#define LINHA 2
#define COLUNA 2
//Variavel Global apenas para facilitar os teste, nao e nescessario

int funcao(int n, int m, int matriz[LINHA][COLUNA]);

int main()
{
    int matriz[LINHA][COLUNA],r,i,j;

     for (i=0; i<LINHA; i++)
     {
        for (j=0; j<COLUNA; j++)
        {
            scanf ("%d", &matriz[i][j]);
        }
     }

    r = funcao(LINHA,COLUNA,matriz);

    printf("\n%d", r);

    return 0;
}


int funcao(int n, int m, int matriz[LINHA][COLUNA])
{
    int i,j,soma=0;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i<j)
            {
                soma=soma+matriz[j][i];
            }

        }
    }

    return soma;
}

