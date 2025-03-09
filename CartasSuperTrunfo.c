#include <stdio.h>

int main(){
//Desenvolvendo a estrutura inicial do jogo
    
    char estado1[20] = "Ceará", estado2[20] = "Bahia";
    char carta1[20] = "C01", carta2[20] = "B01", cidade1[20] = "Fortaleza", cidade2[20] = "Salvador";
    unsigned long int populacao1, populacao2; 
    int pontos_turisticos1, pontos_turisticos2;
    float area_km1, area_km2, pib1, pib2;
    float dp1, dp2, ppc1, ppc2;


// Informacao da Carta 1 e Carta 2
    populacao1 = 2429000; populacao2 = 2418000;
    pontos_turisticos1 = 54; pontos_turisticos2 = 80;
    area_km1 = 313.8; area_km2 = 603.8;
    pib1 = 73.400000000; pib2 = 62.954000000;
    
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

// Menu de Comparações
    
    int opcaoAtributo;
    
    printf("     Menu de Compação de Atributos\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha um Atributo: ");
    scanf("%d", &opcaoAtributo);

    switch (opcaoAtributo)
    {
    case 1:
        if (populacao1 > populacao2)
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo População, para ser comparado!\n");
            printf("Uma com %lu de habitantes, e a outra com %lu de habitantes\n", populacao1, populacao2);
            printf("Assim a cidade de %s, Vence por ter mais habitantes.\n", cidade1);
        }
        else if (populacao1 < populacao2)
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo População, para ser comparado!\n");
            printf("Uma com %lu de habitantes, e a outra com %lu de habitantes\n", populacao1, populacao2);
            printf("Assim a cidade de %s, Vence por ter mais habitantes.\n", cidade2);
        }
        else
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo População, para ser comparado!\n");
            printf("Uma com %lu de habitantes, e a outra com %lu de habitantes\n", populacao1, populacao2);
            printf("Assim, ambas as cidades possuem a mesma quantidade de habitantes!\n");
            printf("Não á Vencedor\n");
        }
        break;
        case 2:
        if (area_km1 > area_km2)
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo Área, para ser comparado!\n");
            printf("Uma com %f km², e a outra com %f km²\n", area_km1, area_km2);
            printf("Assim a cidade de %s, Vence por possuir mais Área.\n", cidade1);
        }
        else if (area_km1 < area_km2)
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo Área, para ser comparado!\n");
            printf("Uma com %f km², e a outra com %f km²\n", area_km1, area_km2);
            printf("Assim a cidade de %s, Vence por possuir mais Área.\n", cidade2);
        }
        else
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo Área, para ser comparado!\n");
            printf("Uma com %f km², e a outra com %f km²\n", area_km1, area_km2);
            printf("Assim, ambas as cidades possuem a mesma quantidade de Área.\n");
            printf("Não á Vencedor\n");
        }
        break;
        case 3:
        if (pib1 > pib2)
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo PIB, para ser comparado!\n");
            printf("Uma com %f de PIB, e a outra com %f de PIB\n", pib1, pib2);
            printf("Assim a cidade de %s, Vence por possuir mais PIB.\n", cidade1);
        }
        else if (pib1 < pib2)
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo PIB, para ser comparado!\n");
            printf("Uma com %f de PIB, e a outra com %f de PIB\n", pib1, pib2);
            printf("Assim a cidade de %s, Vence por possuir mais PIB.\n", cidade2);
        }
        else
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo PIB, para ser comparado!\n");
            printf("Uma com %f de PIB, e a outra com %f de PIB\n", pib1, pib2);
            printf("Assim, ambas as cidades possuem a mesma quantidade de PIB.\n");
            printf("Não á Vencedor\n");
        }
        break;
        case 4:
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo Pontos Turisticos, para ser comparado!\n");
            printf("Uma com %d de Pontos Turisticos, e a outra com %d de Pontos Turisticos\n", pontos_turisticos1, pontos_turisticos2);
            printf("Assim a cidade de %s, Vence por possuir mais Pontos Turisticos.\n", cidade1);
        }
        else if (pontos_turisticos1 < pontos_turisticos2)
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo Pontos Turisticos, para ser comparado!\n");
            printf("Uma com %d de Pontos Turisticos, e a outra com %d de Pontos Turisticos\n", pontos_turisticos1, pontos_turisticos2);
            printf("Assim a cidade de %s, Vence por possuir mais Pontos Turisticos.\n", cidade2);
        }
        else
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo Pontos Turisticos, para ser comparado!\n");
            printf("Uma com %d de Pontos Turisticos, e a outra com %d de Pontos Turisticos\n", pontos_turisticos1, pontos_turisticos2);
            printf("Assim, ambas as cidades possuem a mesma quantidade de Pontos Turisticos.\n");
            printf("Não á Vencedor\n");
        }
        break;
        case 5:
        if (dp1 < dp2)
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo Densidade Demografica, para ser comparado!\n");
            printf("Uma com %f de hab/km², e a outra com %f de hab/km²\n", dp1, dp2);
            printf("Assim a cidade de %s, Vence por ter menos Densidade Demografica.\n", cidade1);
        }
        else if (dp1 > dp2)
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo Densidade Demografica, para ser comparado!\n");
            printf("Uma com %f de hab/km², e a outra com %f de hab/km²\n", dp1, dp2);
            printf("Assim a cidade de %s, Vence por ter menos Densidade Demografica.\n", cidade2);
        }
        else
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo Densidade Demografica, para ser comparado!\n");
            printf("Uma com %f de hab/km², e a outra com %f de hab/km²\n", dp1, dp2);
            printf("Assim, ambas as cidades possuem a mesma quantidade de Densidade Demografica.\n");
            printf("Não á Vencedor\n");
        }
        break;
    }

    
        
    
    return 0;

}