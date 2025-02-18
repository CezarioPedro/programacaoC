#include <stdio.h>

int main(){

    char estado; 
    char codigocarta[20], nomecidade[20];
    int populacao, pontoturistico;
    float area, pib;

    /*Montagem da carta01*/
    printf("Montando a Carta n01- \nInsira o estado selecionado:");
    scanf(" %c", &estado);
    printf("Indique o código da carta (o estado seguido de um número de 01 a 04)");
    scanf(" %s", codigocarta);
    printf("Insira a cidade selecionada:");
    scanf(" %s", nomecidade);
    printf("Informe o número populacional da cidade:");
    scanf("%d", &populacao);
    printf("Informe a área da cidade (em km²):");
    scanf("%f", &area);
    printf("Informe o PIB da cidade:");
    scanf("%f", &pib);
    printf("Informe o número de pontos turísticos da cidade:");
    scanf("%d", &pontoturistico);
  
    char estado2;
    char codigocarta2[20], nomecidade2[20];
    int populacao2, pontoturistico2;
    float area2, pib2;
    /*Montagem da carta02*/
    printf("Montando a Carta n02- \nInsira o estado selecionado:");
    scanf(" %c", &estado2);
    printf("Indique o código da carta (o estado seguido de um número de 01 a 04)");
    scanf(" %s", codigocarta2);
    printf("Insira a cidade selecionada:");
    scanf(" %s", nomecidade2);
    printf("Informe o número populacional da cidade:");
    scanf("%d", &populacao2);
    printf("Informe a área da cidade (em km²):");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade e em seguida o número de pontos turísticos da cidade:");
    scanf("%f %d", &pib2, &pontoturistico2);


    printf("\nInformações da Carta 01:\nEstado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n", estado, codigocarta, nomecidade, populacao, area, pib, pontoturistico);
    printf("Informações da Carta 02:\nEstado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n", estado2, codigocarta2, nomecidade2, populacao2, area2, pib2, pontoturistico2);

}