#include <stdio.h>

int main(){
    int idade;

    printf("Digide a sua idade:\n")
    scanf("%d", &idade);


    if(idade >= 60){
        printf("Você é um idoso!");
    } else if (idade > 18 && idade < 60){
        printf("Você é um adulto!");
    } else if (idade > 12 && idade < 18){
        printf("Você é um adolescente!");
    } else {
        printf("Você é uma criança!")
    }
    return 0;
}