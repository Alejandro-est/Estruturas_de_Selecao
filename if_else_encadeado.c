#include <stdio.h>
int main ()
{
    int chute, sorteado;
    printf("********************************************\n");
    printf("**** Bem-vindo ao Jogo Da Adivinhacao! *****\n");
    printf("********************************************\n");

    printf("Digite um numero: \n");
    scanf("%d",&chute);
    sorteado=42;

    if(chute==sorteado){
        printf("Voce Acertou!!!\n");
}
        else{
                if(chute<sorteado){
                                   printf("Voce Perdeu!!! seu chute %d, e menor que o sorteado!!!\n",chute);
                                  }
                                  else{
                                       printf("Voce Perdeu!!! seu chute %d, e maior que o sorteado!!!\n",chute);
                                    }
            }

      Printf("*** GAME OVER ***/n");
      return 0;
    }