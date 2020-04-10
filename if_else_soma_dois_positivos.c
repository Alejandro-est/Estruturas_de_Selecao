#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val1, val2, soma;

    printf("Digite o primeiro valor: ");
    scanf("%d",&val1);
    printf("Digite o segundo valor: ");
    scanf("%d",&val2);

    if(val1<0 || val2<0)
    {
        printf("ERRO! Numero negativo");   
    }
    else
    {
        soma = val1 + val2;    /* code */
        printf("\nResultado: %d",soma);

    }
    
   return 0; 
}