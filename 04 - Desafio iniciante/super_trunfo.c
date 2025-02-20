#include <stdio.h>

int main(){

    char estado;
    char estado2;
    char codigocarta[3], nomecidade[15];
    char codigocarta2[3], nomecidade2[15];
    int populacao, pontoturistico;
    int populacao2, pontoturistico2;
    float area, pib;
    float area2, pib2;

    /*Montagem da carta01*/
    printf("Montando a Carta n01 -\n Insira o estado selecionado: ");
    scanf("%c", &estado);
    printf("Indique o código da carta (o estado seguido de um número de 01 a 04): ");
    scanf(" %s", &codigocarta);
    printf("Insira a cidade selecionada: ");
    scanf(" %s", &nomecidade);
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Informe o número populacional da cidade: ");
    scanf("%d", &populacao);
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &pontoturistico);
  
    /*Montagem da carta02*/
    printf("Montando a Carta n02 -\n Insira o estado selecionado: ");
    scanf(" %c", &estado2);
    printf("Indique o código da carta (o estado seguido de um número de 01 a 04): ");
    scanf(" %s", codigocarta2);
    printf("Insira a cidade selecionada: ");
    scanf(" %s", nomecidade2);
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Informe o número populacional da cidade: ");
    scanf("%d", &populacao2);
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &pontoturistico2);

    printf("Informações da Carta 01:\nEstado: %c \nCódigo da Carta: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f \nPIB: %.2f \nPontos Turísticos: %d \n", estado, codigocarta, nomecidade, populacao, area, pib, pontoturistico);
    printf("Informações da Carta 02:\nEstado: %c \nCódigo da Carta: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f \nPIB: %.2f \nPontos Turísticos: %d \n", estado2, codigocarta2, nomecidade2, populacao2, area2, pib2, pontoturistico2);

    return 0;

}