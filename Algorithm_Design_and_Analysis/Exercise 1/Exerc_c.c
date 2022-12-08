#include<stdio.h>


int funcao(int n);

int main()
{
    int n=8,i;

    i=funcao(n);

    printf("\n%d", i);

    return 0;
}



int funcao(int n)
{
    int i;

    for(i=2; i<=n/2; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
