#include <stdio.h>

int main(){
    int variavel;

    printf("igite um valor:");
    scanf("%d", &variavel);

    switch (variavel){
    case 1:
        printf("Codigo a ser executavel se variavel == 1");
    break;
    case 2:
        printf("Codigo a ser executavel se variavel == 2");
    break;   
    case 3:
        printf("Codigo a ser executavel se variavel == 3");
    break;
    default:
        printf("Codigo a ser executado se variavel não for == 1, 2 ou 3");
    break;
    }
}