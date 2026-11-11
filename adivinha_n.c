
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int num, palpite;
    int dificuldade, limite;
    int tentativas = 0;

    printf("===== JOGO DE ADIVINHACAO =====\n");

    printf("\nEscolha o nivel de dificuldade:\n");
    printf("1 - Facil (1 ate 5)\n");
    printf("2 - Medio (1 ate 20)\n");
    printf("3 - Dificil (1 ate 100)\n");

    printf("\nDigite sua escolha: ");
    scanf("%i", &dificuldade);

    if(dificuldade == 1){
        limite = 5;
    }
    else if(dificuldade == 2){
        limite = 20;
    }
    else if(dificuldade == 3){
        limite = 100;
    }
    else{
        printf("\nOpcao invalida!\n");
        return 0;
    }

    num = (rand() % limite) + 1;

    do{

        printf("\nInforme um valor de 1 ate %i: ", limite);
        scanf("%i", &palpite);

        tentativas++;

        if(palpite > num){
            printf("Seu palpite e maior que o numero sorteado!\n");
        }
        else if(palpite < num){
            printf("Seu palpite e menor que o numero sorteado!\n");
        }
        else{
            printf("\nParabens! Voce acertou!\n");
        }

    }while(palpite != num);

    printf("\nO numero sorteado era: %i", num);
    printf("\nQuantidade de tentativas: %i\n", tentativas);

    return 0;
}

