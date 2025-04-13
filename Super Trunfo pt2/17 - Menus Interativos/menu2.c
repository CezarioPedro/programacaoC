#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){
    int opcao;
    int numerosecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            srand(time(0));
            numerosecreto = rand() % 10 + 1;
            printf("Adivinhe o número (entre 1 e 10): \n");
            scanf("%d", &palpite);
            if (numerosecreto == palpite){
                printf("Você acertou!!!\n");
                printf("Número secreto: %d\n", &numerosecreto);
            } else {
                printf("Você errou!!!\n"); 
                printf("Número secreto: %d\n", &numerosecreto);  
            }
            
        break;
        case 2:
        printf("Regras do jogo:\n");
        printf("Regra número 1.\n");
        printf("Regra número 2.\n");
        printf("Regra número 3.\n");
        break;
        case 3:
        printf("Fechando o jogo...\n");
        break;
        default:
            printf("Opção inválida.");
        break;
        }
}