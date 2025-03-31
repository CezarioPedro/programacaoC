#include <stdio.h>

int main(){
    int idade = 20;
    float altura = 1.75;

    //Idade >= 18 -> Verdadeira
    //Idade <= 30 -> Verdadeira
    //Verdadeira && Verdadeira
    //Verdadeira && Altura > 1.70
    //Verdadeiro && Verdadeiro -> Verdadeiro

    if(idade >=18 && idade <=30 && altura = 1.70){
        printf("Você está dentro da faixa etária e sua altura é adequada!\n");
    } else {
        printf("Você não atende aos requisitos.\n");
    }
}