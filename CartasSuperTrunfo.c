#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    printf("-Desafio Super Trunfo- \n");
    printf("\n");
    printf("Aperte Enter para começar \n");
    scanf("Aperte Enter para começar");

    printf("Cadastro da cidade 1 \n");
    scanf("Cadastro da cidade 1");
    printf("\n");

    // CARTA 1

    // Variáveis

    char estado1[50];
    char codigo1[50], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, pibpercapita1, densidadepop1;

    // Código de print e scan

    printf("Digite a primeira letra do estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // CARTA 2

    printf("Cadastro da cidade 2 \n");
    scanf("Cadastro da cidade 2");
    printf("\n");

    // Variáveis

    char estado2[50];
    char codigo2[50], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, pibpercapita2, densidadepop2;

    // Código de print e scan

    printf("Digite a primeira letra do estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Calculos

    densidadepop1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidadepop2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;


    //Printf carta 1

    printf("Carta 1:\n");
    printf("\n");
    printf("Código: %s%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop1);
    printf("PIB per Capita: %.2f R$\n", pibpercapita1);
    printf("\n");

    //Printf carta 2

    printf("Carta 2:\n");
    printf("\n");
    printf("Código: %s%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per Capita: %.2f R$\n", pibpercapita2);

    return 0;
}
