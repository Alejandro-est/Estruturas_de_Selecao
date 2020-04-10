#include <stdio.h>
int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    if(numero > 0){
        printf("O numero e maior que 0\n");
    }
    else{
        if(numero == 0){
            printf("O numero e igual a 0\n");
        }
        else{
            printf("O numero e menor que 0\n");
        }
    }
    return 0;
}
