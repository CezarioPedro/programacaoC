#include <stdio.h>

int main(){

    char estado, estado2;
    char codigocarta[3], nomecidade[15], codigocarta2[3], nomecidade2[15];
    int populacao, pontoturistico, populacao2, pontoturistico2;
    float area, pib, area2, pib2;
    float densidade, pibpcapita, densidade2, pibpcapita2;
    float superpoder, superpoder2;
    int resultadoPopulacao, resultadoArea, resultadoPIB, resultadoPTuristico, resultadoDensidade, resultadoPIBPCapita, resultadoSuperPoder;
    int comparacao;
    
    /*Montagem da carta01*/
    printf("***Montando a Carta n01 -***\nInsira o estado selecionado:");
    scanf("%c", &estado);
    printf("Indique o código da carta (o estado seguido de um número de 01 a 04):");
    scanf(" %s", &codigocarta);
    printf("Insira a cidade selecionada:");
    scanf(" %s", &nomecidade);
    printf("Informe a área da cidade (em km²):");
    scanf("%f", &area);
    printf("Informe o número populacional da cidade:");
    scanf("%d", &populacao);
    printf("Informe o PIB da cidade:");
    scanf("%f", &pib);
    printf("Informe o número de pontos turísticos da cidade:");
    scanf("%d", &pontoturistico);
    densidade = populacao / area;
    pibpcapita = pib / populacao;
    superpoder = populacao + area + pib + pontoturistico + pibpcapita + (1 / densidade);
  
    /*Montagem da carta02*/
    printf("***Montando a Carta n02 -***\nInsira o estado selecionado: ");
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
    densidade2 = populacao2 / area2;
    pibpcapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontoturistico2 + pibpcapita2 + (1 / densidade2);

    printf("Informações da Carta 01:\nEstado: %c \nCódigo da Carta: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f \nPIB: %.2f \nPontos Turísticos: %d \nDensidade Populacional: %.2f\nPIB per Capita: %.2f", estado, codigocarta, nomecidade, populacao, area, pib, pontoturistico, densidade, pibpcapita);
    printf("Informações da Carta 02:\nEstado: %c \nCódigo da Carta: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f \nPIB: %.2f \nPontos Turísticos: %d \nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", estado2, codigocarta2, nomecidade2, populacao2, area2, pib2, pontoturistico2, densidade2, pibpcapita2);

    printf("***COMPARANDO CARTAS***\n");

    if(populacao > populacao2){
        printf("A carta 01 possui pupulação maior e venceu!!!\n");
    } else {
        printf("A carta 02 possui pupulação maior e venceu!!!\n");
    }

    if(area > area2){
        printf("A carta 01 possui área maior e venceu!!!\n");
    } else {
        printf("A carta 02 possui área maior e venceu!!!\n");
    }

    if(pib > pib2){
        printf("A carta 01 possui PIB maior e venceu!!!\n");
    } else {
        printf("A carta 02 possui PIB maior e venceu!!!\n");
    }
    
    if(pontoturistico > pontoturistico2){
        printf("A carta 01 possui maior número de pontos turísticos e venceu!!!\n");
    } else {
        printf("A carta 02 possui maior número de pontos turísticos e venceu!!!\n");
    }

    if(densidade > densidade2){
        printf("A carta 01 possui densidade maior e venceu!!!\n");
    } else {
        printf("A carta 02 possui densidade maior e venceu!!!\n");
    }

    if(pibpcapita > pibpcapita2){
        printf("A carta 01 possui o PIB per Capita maior e venceu!!!\n");
    } else {
        printf("A carta 02 possui o PIB per Capita maior e venceu!!!\n");
    }

    if(superpoder > superpoder2){
        printf("O super poder da carta 01 superou o da carta concorrente!!!\n");
    } else {
        printf("O super poder da carta 01 superou o da carta concorrente!!!\n");
    }

    return 0;

    switch (comparacao)
    {
    case 1;
        printf("Jogador escolheu Nome de País.");
    break;
    case 2;
        printf("Jogador escolheu População");
    break;
    case 3;
        
    break;
    case 4;
        
    break;

    default:

    break;
    }

}