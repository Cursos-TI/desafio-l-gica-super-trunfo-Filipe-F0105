#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char codigo1[4];
    unsigned long int Populacao1;
    int PontosTuristicos1;
    float Pib1, Area1, Densidadepopulacional1, Pibpercapita1, Superpoder1;

    // Variáveis da Carta 2
    char codigo2[4];
    unsigned long int Populacao2;
    int PontosTuristicos2;
    float Pib2, Area2, Densidadepopulacional2, Pibpercapita2, Superpoder2;

    int opcao; // Menu

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Codigo (ex: A01): ");
    scanf("%3s", codigo1);

    printf("População: ");
    scanf("%lu", &Populacao1);

    printf("Área: ");
    scanf("%f", &Area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &Pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // Cálculos da Carta 1
    Densidadepopulacional1 = Populacao1 / Area1;
    Pibpercapita1 = (Pib1 * 1000000000) / Populacao1;
    Superpoder1 = (float)Populacao1 + Area1 + Pib1 + PontosTuristicos1 + Pibpercapita1 + (1.0f / Densidadepopulacional1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Codigo (ex: B02): ");
    scanf("%3s", codigo2);

    printf("População: ");
    scanf("%lu", &Populacao2);

    printf("Área: ");
    scanf("%f", &Area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &Pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculos da Carta 2
    Densidadepopulacional2 = Populacao2 / Area2;
    Pibpercapita2 = (Pib2 * 1000000000) / Populacao2;
    Superpoder2 = (float)Populacao2 + Area2 + Pib2 + PontosTuristicos2 + Pibpercapita2 + (1.0f / Densidadepopulacional2);

    // Exibição inicial das cartas
    printf("\nCarta 1 - %s\n", codigo1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões\n", Pib1);
    printf("Pontos turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n", Pibpercapita1);
    printf("Superpoder: %.2f\n", Superpoder1);

    printf("\nCarta 2 - %s\n", codigo2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", Pib2);
    printf("Pontos turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", Pibpercapita2);
    printf("Superpoder: %.2f\n", Superpoder2);

    // Menu interativo
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Superpoder\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    // Switch para comparação
    switch (opcao) {
        case 1: // População
            printf("\nComparando População...\n");
            if (Populacao1 > Populacao2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
            else if (Populacao2 > Populacao1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("\nComparando Área...\n");
            if (Area1 > Area2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
            else if (Area2 > Area1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("\nComparando PIB...\n");
            if (Pib1 > Pib2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
            else if (Pib2 > Pib1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("\nComparando Pontos Turísticos...\n");
            if (PontosTuristicos1 > PontosTuristicos2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
            else if (PontosTuristicos2 > PontosTuristicos1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade (aqui a lógica é invertida!)
            printf("\nComparando Densidade Populacional...\n");
            if (Densidadepopulacional1 < Densidadepopulacional2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
            else if (Densidadepopulacional2 < Densidadepopulacional1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
            else
                printf("Empate!\n");
            break;

        case 6: // PIB per capita
            printf("\nComparando PIB per Capita...\n");
            if (Pibpercapita1 > Pibpercapita2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
            else if (Pibpercapita2 > Pibpercapita1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
            else
                printf("Empate!\n");
            break;

        case 7: // Superpoder
            printf("\nComparando Superpoder...\n");
            if (Superpoder1 > Superpoder2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
            else if (Superpoder2 > Superpoder1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
