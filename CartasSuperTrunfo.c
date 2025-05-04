#include <stdio.h>

    int main () {
        char estado1[5], estado2[5];
        char codigo11[50], codigo22[50];
        char cidade1[20], cidade2[20];
        int popu, popu2;
        float area, area2;
        float pib, pib2;
        int turis, turis2;
        float media1, media2;
        float capita1, capita2;

            printf("Carta 1: \n");

            printf("Digite o Estado: ");
            scanf("%s", &estado1);

            printf("Digite o código da carta: ");
            scanf("  %s", &codigo11);

            printf("Digite o nome da cidade: ");
            scanf(" %s", &cidade1);

            printf("Digite a população: ");
            scanf("%d", &popu);

            printf("Digite a area: ");
            scanf("%f", &area);

            printf("Digite o Pib: ");
            scanf("%f", &pib);

            printf("Digite os pontos turisticos: ");
            scanf("%d", &turis);

            media1 = (float) popu / area;
            capita1 = (float) pib / popu;

            // RESULTADO

            printf("\nCarta 1");
            printf("\nEstado: %s\n", estado1);
            printf("Código da carta: %s\n", &codigo11);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n", popu);
            printf("Área: %.2f km²\n", area);
            printf("PIB: %.3f bilhões de reais\n", pib);
            printf("Pontos Turísticos: %d\n", turis);
            printf("Densidade Populacional: %.2f hab/km²\n", media1);
            printf("PIB per capita: %.2f reais\n", capita1);

            // PROXIMO

            printf("\nCarta 2: \n");

            printf("Digite o Estado: ");
            scanf("%s", &estado2);

            printf("Digite o código da carta: ");
            scanf("  %s", &codigo22);

            printf("Digite o nome da cidade: ");
            scanf(" %s", &cidade2);

            printf("Digite a população: ");
            scanf("%d", &popu2);

            printf("Digite a area: ");
            scanf("%f", &area2);

            printf("Digite o Pib: ");
            scanf("%f", &pib2);

            printf("Digite os pontos turisticos: ");
            scanf("%d", &turis2);

            media2 = (float) popu2 / area2;
            capita2 = (float) pib2 / popu2;

            // RESULTADO

            printf("\nCarta 2");
            printf("\nEstado: %s\n", estado2);
            printf("Código da carta: %s\n", &codigo22);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d\n", popu2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f bilhões de reais\n", pib2);
            printf("Pontos Turísticos: %d\n", turis2);
            printf("Densidade Populacional: %.2f hab/km²\n", media2);
            printf("PIB per capita: %.2f reais\n", capita2);



        return 0;
    }