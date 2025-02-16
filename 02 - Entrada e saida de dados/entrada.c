#include <stdio.h>

int main(){
    int idade;
    float altura;
    char nome[40];
    char opcao;

    printf("Insira a sua idade:");
    scanf("%d", &idade);
    printf("A sua idade é: %d\n", idade);
    printf("Insira a sua altura:\n");
    scanf("%f", &altura);
    printf("A sua altura é: %.2f\n", altura);
    printf("Insira o seu nome:\n");
    scanf("%s", nome);
    printf("O seu nome é: %s\n", nome);
    printf("Insira a sua opção:\n");
    scanf(" %c", &opcao);
    printf("A sua opção é: %c\n", opcao);
}