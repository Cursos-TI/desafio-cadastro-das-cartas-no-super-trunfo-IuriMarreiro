#include <stdio.h>

int main(){
//Desenvolvendo a estrutura inicial do jogo
    
    char estado1[20] = "Ceará", estado2[20] = "Bahia";
    char carta1[20] = "C01", carta2[20] = "B01", cidade1[20] = "Fortaleza", cidade2[20] = "Salvador";
    unsigned long int populacao1, populacao2; 
    int pontos_turisticos1, pontos_turisticos2;
    double area_km1, area_km2, pib1, pib2;
    double dp1, dp2, ppc1, ppc2;


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
    
    int opcaoAtributo1, opcaoAtributo2;
    
    printf("     Menu de Compação de Atributos\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha um Atributo: ");
    scanf("%d", &opcaoAtributo1);

    printf("     Menu de Compação de Atributos\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha um Atributo: ");
    scanf("%d", &opcaoAtributo2);
    printf("\n\n");

    if (opcaoAtributo1 == opcaoAtributo2)
    {
        printf("A escolha de Atributos para comparar, foram iguais. Tente novamente!\n");
    }
    else 
    {

    switch (opcaoAtributo1)
    {
    case 1:
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo População, para ser comparado!\n");
            printf("Uma com %lu de habitantes, e a outra com %lu de habitantes\n", populacao1, populacao2);
        }
        break;
        case 2:
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo Área, para ser comparado!\n");
            printf("Uma com %f km², e a outra com %f km²\n", area_km1, area_km2);
        }
        break;
        case 3:
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo PIB, para ser comparado!\n");
            printf("Uma com %f de PIB, e a outra com %f de PIB\n", pib1, pib2);
        }
        break;
        case 4:
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo Pontos Turisticos, para ser comparado!\n");
            printf("Uma com %d de Pontos Turisticos, e a outra com %d de Pontos Turisticos\n", pontos_turisticos1, pontos_turisticos2);
        }
        break;
        case 5:
        {
            printf("Para as cidades %s e %s.\n", cidade1, cidade2);
            printf("Foi escolhido o Atributo Densidade Demografica, para ser comparado!\n");
            printf("Uma com %f de hab/km², e a outra com %f de hab/km²\n", dp1, dp2);
        }
        break;
    }
    switch (opcaoAtributo2)
    {
    case 1:
    {
            printf("Também foi escolhido o Atributo População, para ser comparado!\n");
            printf("Uma com %lu de habitantes, e a outra com %lu de habitantes\n", populacao1, populacao2);
        }
        break;
        case 2:
        {
            printf("Também foi escolhido o Atributo Área, para ser comparado!\n");
            printf("Uma com %f km², e a outra com %f km²\n", area_km1, area_km2);
        }
        break;
        case 3:
        {
            printf("Também foi escolhido o Atributo PIB, para ser comparado!\n");
            printf("Uma com %f de PIB, e a outra com %f de PIB\n", pib1, pib2);
        }
        break;
        case 4:
        {
            printf("Também foi escolhido o Atributo Pontos Turisticos, para ser comparado!\n");
            printf("Uma com %d de Pontos Turisticos, e a outra com %d de Pontos Turisticos\n", pontos_turisticos1, pontos_turisticos2);
        }
        break;
        case 5:
        {
            printf("Também foi escolhido o Atributo Densidade Demografica, para ser comparado!\n");
            printf("Uma com %f de hab/km², e a outra com %f de hab/km²\n", dp1, dp2);
        }
        break;
    }} 

// Calculo para soma e decisão de comparação

    double soma1, soma2;

    if (opcaoAtributo1 == 1 && opcaoAtributo2 == 2 || opcaoAtributo1 == 2 && opcaoAtributo2 == 1)
    {
        soma1 = populacao1 + area_km1;
        soma2 = populacao2 + area_km2;
        printf("A soma dos atributos são: %f, para a carta %s.\n", soma1, cidade1);
        printf("E a outra soma dos atributos são: %f, para a carta %s.\n", soma2, cidade2);
    } else if (opcaoAtributo1 == 1 && opcaoAtributo2 == 3 || opcaoAtributo1 == 3 && opcaoAtributo2 == 1)
    {
        soma1 = populacao1 + pib1;
        soma2 = populacao2 + pib2;
        printf("A soma dos atributos são: %f, para a carta %s.\n", soma1, cidade1);
        printf("E a outra soma dos atributos são: %f, para a carta %s.\n", soma2, cidade2);  
    } else if (opcaoAtributo1 == 1 && opcaoAtributo2 == 4 || opcaoAtributo1 == 4 && opcaoAtributo2 == 1)
    {
        soma1 = populacao1 + pontos_turisticos1;
        soma2 = populacao2 + pontos_turisticos2;
        printf("A soma dos atributos são: %f, para a carta %s.\n", soma1, cidade1);
        printf("E a outra soma dos atributos são: %f, para a carta %s.\n", soma2, cidade2);  
    } else if (opcaoAtributo1 == 1 && opcaoAtributo2 == 5 || opcaoAtributo1 == 5 && opcaoAtributo2 == 1)
    {
        soma1 = populacao1 + dp1;
        soma2 = populacao2 + dp2;
        printf("A soma dos atributos são: %f, para a carta %s.\n", soma1, cidade1);
        printf("E a outra soma dos atributos são: %f, para a carta %s.\n", soma2, cidade2); 
    } else if (opcaoAtributo1 == 2 && opcaoAtributo2 == 3 || opcaoAtributo1 == 3 && opcaoAtributo2 == 2)
    {
        soma1 = area_km1 + pib1;
        soma2 = area_km2 + pib2;
        printf("A soma dos atributos são: %f, para a carta %s.\n", soma1, cidade1);
        printf("E a outra soma dos atributos são: %f, para a carta %s.\n", soma2, cidade2);    
    } else if (opcaoAtributo1 == 2 && opcaoAtributo2 == 4 || opcaoAtributo1 == 4 && opcaoAtributo2 == 2)
    {
        soma1 = area_km1 + pontos_turisticos1;
        soma2 = area_km2 + pontos_turisticos2;
        printf("A soma dos atributos são: %f, para a carta %s.\n", soma1, cidade1);
        printf("E a outra soma dos atributos são: %f, para a carta %s.\n", soma2, cidade2);
    } else if (opcaoAtributo1 == 2 && opcaoAtributo2 == 5 || opcaoAtributo1 == 5 && opcaoAtributo2 == 2)
    {
        soma1 = area_km1 + dp1;
        soma2 = area_km2 + dp2;
        printf("A soma dos atributos são: %f, para a carta %s.\n", soma1, cidade1);
        printf("E a outra soma dos atributos são: %f, para a carta %s.\n", soma2, cidade2);
    } else if (opcaoAtributo1 == 3 && opcaoAtributo2 == 4 || opcaoAtributo1 == 4 && opcaoAtributo2 == 3)
    {
        soma1 = pib1 + pontos_turisticos1;
        soma2 = pib2 + pontos_turisticos2;
        printf("A soma dos atributos são: %f, para a carta %s.\n", soma1, cidade1);
        printf("E a outra soma dos atributos são: %f, para a carta %s.\n", soma2, cidade2);
    } else if (opcaoAtributo1 == 3 && opcaoAtributo2 == 5 || opcaoAtributo1 == 5 && opcaoAtributo2 == 3)
    {
        soma1 = pib1 + dp1;
        soma2 = pib2 + dp2;
        printf("A soma dos atributos são: %f, para a carta %s.\n", soma1, cidade1);
        printf("E a outra soma dos atributos são: %f, para a carta %s.\n", soma2, cidade2);
    } else if (opcaoAtributo1 == 4 && opcaoAtributo2 == 5 || opcaoAtributo1 == 5 && opcaoAtributo2 == 4)
    {
        soma1 = pontos_turisticos1 + dp1;
        soma2 = pontos_turisticos2 + dp2;
        printf("A soma dos atributos são: %f, para a carta %s.\n", soma1, cidade1);
        printf("E a outra soma dos atributos são: %f, para a carta %s.\n", soma2, cidade2);
    }
    
    soma1 > soma2 ? printf("A Carta %s, %s. Venceu!", estado1, cidade1) : 
                    printf("A Carta %s, %s. Venceu!\n", estado2, cidade2);

    return 0;

}