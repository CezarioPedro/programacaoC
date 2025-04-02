#include <stdio.h>

int main(){
    int opcao;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras");
    printf("3. Sair");

    switch (opcao){
    case 1:
        printf("Iniciando o jogo...\n");
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