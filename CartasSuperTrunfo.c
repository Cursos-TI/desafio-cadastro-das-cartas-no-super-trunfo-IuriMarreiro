#include <stdio.h>

int main(){
//Desenvolvendo a estrutura inicial do jogo
    
    char estado1[10], estado2[10];
    char carta1[20], carta2[20], cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2; 
    int pontos_turisticos1, pontos_turisticos2;
    float area_km1, area_km2, pib1, pib2;
    float dp1, dp2, ppc1, ppc2;


// Informacao da Carta 1 e Carta 2

    printf("Dados da Carta 1\n");
    printf("Digiti Estado: ");
    scanf("%s", &estado1);
    printf("Digiti Codigo: ");
    scanf("%s", &carta1);
    printf("Digiti Nome da Cidade: ");
    scanf("%s", &cidade1);
    printf("Digiti População: ");
    scanf("%lu", &populacao1);
    printf("Digiti Área: ");
    scanf("%f", &area_km1);
    printf("Digiti PIB: ");
    scanf("%f", &pib1);
    printf("Digiti Números de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n\n");

    printf("Dados da Carta 2\n");
    printf("Digiti Estado: ");
    scanf("%s", &estado2);
    printf("Digiti Codigo: ");
    scanf("%s", &carta2);
    printf("Digiti Nome da Cidade: ");
    scanf("%s", &cidade2);
    printf("Digiti População: ");
    scanf("%lu", &populacao2);
    printf("Digiti Área: ");
    scanf("%f", &area_km2);
    printf("Digiti PIB: ");
    scanf("%f", &pib2);
    printf("Digiti Números de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n\n");

// Comando para resultado de Densidade populacional e PIB per capita

    dp1 = (float) populacao1 / area_km1;
    dp2 = (float) populacao2 / area_km2;
    ppc1 = pib1 / populacao1;
    ppc2 = pib2 / populacao2;

// Super Poder

    float superPoder1 = (float) populacao1 + area_km1 + pib1 + pontos_turisticos1 + (1 / dp1) + ppc1;
    float superPoder2 = (float) populacao2 + area_km2 + pib2 + pontos_turisticos2 + (1 / dp2) + ppc2;
    

// Salvando cadastro da carta1//

    printf("Carta 1:\n");
    printf("Estado: %s\nCódigo: %s\n", estado1, carta1);
    printf("Nome da Cidade: %s\nPopulação: %lu\n", cidade1, populacao1);
    printf("Área: %f km²\nPIB: %f bilhões de reais\n", area_km1, pib1);
    printf("Números de pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", dp1);
    printf("PIB per capita: %f reais\n", ppc1);
    printf("Super Poder: %f\n", superPoder1);
    printf("\n\n");
    
// Salvando cadastro da carta2//

    printf("Carta 2:\n");
    printf("Estado: %s\nCódigo: %s\n", estado2, carta2);
    printf("Nome da Cidade: %s\nPopulação: %lu\n", cidade2, populacao2);
    printf("Área: %f km²\nPIB: %f bilhões de reais\n", area_km2, pib2);
    printf("Números de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", dp2);
    printf("PIB per capita: %f reais\n", ppc2);
    printf("Super Poder: %f\n", superPoder2);
    printf("\n\n");

// Comparação de Cartas

    if (populacao1 > populacao2)
    {
        printf("A cidade %s venceu, por possuir uma população de %lu de habitantes\n", cidade1, populacao1);
    }
    else
    {
        printf("A cidade %s venceu, por possuir uma população de %lu de habitantes\n", cidade2, populacao2);
    }
    if (area_km1 > area_km2)
    {
        printf("A cidade %s venceu, por possuir uma área de %f km²\n", cidade1, area_km1);
    }
    else 
    {
        printf("A cidade %s venceu, por possuir uma área de %f km²\n", cidade2, area_km2);
    }
    if (pib1 > pib2)
    {
        printf("A cidade %s venceu, por possuir um PIB de %f bilhões de reias\n", cidade1, pib1);
    }
    else
    {
        printf("A cidade %s venceu, por possuir um PIB de %f bilhões de reias\n", cidade2, pib2);
    }
    if (pontos_turisticos1 > pontos_turisticos2)
    {
        printf("A cidade %s venceu, por possuir %d de pontos turisticos\n", cidade1, pontos_turisticos1);
    }
    else
    {
        printf("A cidade %s venceu, por possuir %d de pontos turisticos\n", cidade2, pontos_turisticos2);
    }
    if (dp1 < dp2)
    {
        printf("A cidade %s venceu, por possuir %f de dencidade populacional\n", cidade1, dp1);
    }
    else
    {
        printf("A cidade %s venceu, por possuir %f de dencidade populacional\n", cidade2, dp2);
    }
    if (ppc1 > ppc2)
    {
        printf("A cidade %s venceu, por possuir %f de PIB per Capita\n", cidade1, ppc1);
    }
    else
    {
        printf("A cidade %s venceu, por possuir %f de PIB per Capita\n", cidade2, ppc2);
    }
    if (superPoder1 > superPoder2)
    {
        printf("A cidade %s venceu, por possuir %f de SUPER PODER\n", cidade1, superPoder1);
    }
    else
    {
        printf("A cidade %s venceu, por possuir %f de SUPER PODER\n", cidade2, superPoder2);
    }
        
    
    return 0;

}