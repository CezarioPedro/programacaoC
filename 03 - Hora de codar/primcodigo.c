#include <stdio.h>

int main(){
    int idade;
    float altura, matricula;
    char nome[50];


    printf("Digite seu nome: \n");
    scanf(" %s", nome);

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite a sua matrícula: \n");
    scanf("%f", &matricula);

    printf("Nome do aluno: %s \n Idade: %d \n Altura: %.2f \n Matrícula de número: %f", nome, idade, altura, matricula);

    return 0;
}