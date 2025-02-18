#include <stdio.h>

int main(){
//Desenvolvendo a estrutura inicial do jogo//
    char estado1[10], estado2[10];
    char carta1[20], carta2[20], cidade1[20], cidade2[20];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area_km1, area_km2, pib1, pib2;
// Informacao da Carta 1 e Carta 2//

    printf("Dados da Carta 1\n");
    printf("Digiti Estado: ");
    scanf("%s", &estado1);
    printf("Digiti Codigo: ");
    scanf("%s", &carta1);
    printf("Digiti Nome da Cidade: ");
    scanf("%s", &cidade1);
    printf("Digiti População: ");
    scanf("%d", &populacao1);
    printf("Digiti Área: ");
    scanf("%f", &area_km1);
    printf("Digiti PIB: ");
    scanf("%f", &pib1);
    printf("Digiti Números de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Dados da Carta 2\n");
    printf("Digiti Estado: ");
    scanf("%s", &estado2);
    printf("Digiti Codigo: ");
    scanf("%s", &carta2);
    printf("Digiti Nome da Cidade: ");
    scanf("%s", &cidade2);
    printf("Digiti População: ");
    scanf("%d", &populacao2);
    printf("Digiti Área: ");
    scanf("%f", &area_km2);
    printf("Digiti PIB: ");
    scanf("%f", &pib2);
    printf("Digiti Números de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    

// Salvando cadastro da carta1//

    printf("Carta 1:\n");
    printf("Estado: %s\nCódigo: %s\n", estado1, carta1);
    printf("Nome da Cidade: %s\nPopulação: %d\n", cidade1, populacao1);
    printf("Área: %f km²\nPIB: %f bilhões de reais\n", area_km1, pib1);
    printf("Números de pontos turisticos: %d\n", pontos_turisticos1);


// Salvando cadastro da carta2//

    printf("Carta 2:\n");
    printf("Estado: %s\nCódigo: %s\n", estado2, carta2);
    printf("Nome da Cidade: %s\nPopulação: %d\n", cidade2, populacao2);
    printf("Área: %f km²\nPIB: %f bilhões de reais\n", area_km2, pib2);
    printf("Números de pontos turisticos: %d\n", pontos_turisticos2);




    return 0;

}