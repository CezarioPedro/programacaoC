#include <stdio.h>

int main(){
    int dia;

    printf("Entre o valor do dia:\n");
    scanf("%d", &dia);

    switch (dia){
    case 1:
        printf("Domingo!");
    break;
    case 2:
        printf("Segunda-feira");
    break;   
    case 3:
        printf("Terça-feira");
    break;
    case 4:
    printf("Quarta-feira");
    break;
    case 5:
    printf("Quinta-feira");
    break;
    case 6:
    printf("Sexta-feira");
    break;
    case 7:
    printf("Sábado");
    break;
    default:
        printf("Dia inválido");
    break;
    }
}