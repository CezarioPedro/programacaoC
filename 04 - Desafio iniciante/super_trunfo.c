#include <stdio.h>

int main(){

    char estado;
    char codigocarta[20], nomecidade[20];
    int populacao, pontoturistico;
    float area, pib;

    printf("Informações da Carta 01- \nInsira o estado selecionado:\n");
    scanf("%c", &estado);
    printf("Indique o código da carta (o estado seguido de um número de 01 a 04)\n");
    scanf(" %s", &codigocarta);
    printf("Insira a cidade selecionada:\n");
    scanf(" %s", &nomecidade);
    printf("Informe o número populacional da cidade: \n");
    scanf("%d", &populacao);
    printf("Informe a área da cidade (em km²): \n");
    scanf("%f", area);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", pib);

}