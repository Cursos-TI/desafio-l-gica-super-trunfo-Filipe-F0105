#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char codigo1[4];
    unsigned long int Populacao1;
    int PontosTuristicos1;
    float Pib1, Area1, Densidade1, Pibcapita1, Superpoder1;

    // Variáveis da Carta 2
    char codigo2[4];
    unsigned long int Populacao2;
    int PontosTuristicos2;
    float Pib2, Area2, Densidade2, Pibcapita2, Superpoder2;

    int opcao1, opcao2; // menus dinâmicos
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    float soma1, soma2;

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
    Densidade1 = Populacao1 / Area1;
    Pibcapita1 = (Pib1 * 1000000000) / Populacao1;
    Superpoder1 = (float)Populacao1 + Area1 + Pib1 + PontosTuristicos1 + Pibcapita1 + (1.0f / Densidade1);

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
    Densidade2 = Populacao2 / Area2;
    Pibcapita2 = (Pib2 * 1000000000) / Populacao2;
    Superpoder2 = (float)Populacao2 + Area2 + Pib2 + PontosTuristicos2 + Pibcapita2 + (1.0f / Densidade2);

    // Exibição inicial
    printf("\n===== CARTAS =====\n");
    printf("Carta 1 - %s | População: %lu | Área: %.2f | PIB: %.2f | Pontos: %d | Densidade: %.2f | PIB/cap: %.2f | Superpoder: %.2f\n",
           codigo1, Populacao1, Area1, Pib1, PontosTuristicos1, Densidade1, Pibcapita1, Superpoder1);
    printf("Carta 2 - %s | População: %lu | Área: %.2f | PIB: %.2f | Pontos: %d | Densidade: %.2f | PIB/cap: %.2f | Superpoder: %.2f\n",
           codigo2, Populacao2, Area2, Pib2, PontosTuristicos2, Densidade2, Pibcapita2, Superpoder2);

    // Menu para escolha do primeiro atributo
    printf("\n===== MENU DE ATRIBUTOS =====\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Superpoder\n");
    printf("Escolha o PRIMEIRO atributo: ");
    scanf("%d", &opcao1);

    // Menu para o segundo atributo (dinâmico)
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 7; i++) {
        if (i != opcao1) { // não mostra a opção já escolhida
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Populacional\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
                case 7: printf("7 - Superpoder\n"); break;
            }
        }
    }
    scanf("%d", &opcao2);

    // Função auxiliar (macro) para pegar valores
    #define ATRIBUTO(opcao, c1, c2) \
        (opcao==1 ? (c1==1?Populacao1:Populacao2) : \
        opcao==2 ? (c1==1?Area1:Area2) : \
        opcao==3 ? (c1==1?Pib1:Pib2) : \
        opcao==4 ? (c1==1?PontosTuristicos1:PontosTuristicos2) : \
        opcao==5 ? (c1==1?Densidade1:Densidade2) : \
        opcao==6 ? (c1==1?Pibcapita1:Pibcapita2) : \
        (c1==1?Superpoder1:Superpoder2))

    // Pegando valores dos atributos escolhidos
    valor1_c1 = ATRIBUTO(opcao1,1,0);
    valor1_c2 = ATRIBUTO(opcao1,2,0);
    valor2_c1 = ATRIBUTO(opcao2,1,0);
    valor2_c2 = ATRIBUTO(opcao2,2,0);

    // Regras de comparação: densidade é invertida
    soma1 = ((opcao1==5 ? (valor1_c1<valor1_c2) : (valor1_c1>valor1_c2)) ? 1:0) +
            ((opcao2==5 ? (valor2_c1<valor2_c2) : (valor2_c1>valor2_c2)) ? 1:0);
    soma2 = ((opcao1==5 ? (valor1_c2<valor1_c1) : (valor1_c2>valor1_c1)) ? 1:0) +
            ((opcao2==5 ? (valor2_c2<valor2_c1) : (valor2_c2>valor2_c1)) ? 1:0);

    // Resultado final
    printf("\n===== RESULTADO =====\n");
    printf("Atributo 1 (opção %d): Carta1=%.2f | Carta2=%.2f\n", opcao1, valor1_c1, valor1_c2);
    printf("Atributo 2 (opção %d): Carta1=%.2f | Carta2=%.2f\n", opcao2, valor2_c1, valor2_c2);
    printf("Placar -> Carta1: %.0f | Carta2: %.0f\n", soma1, soma2);

    (soma1 > soma2) ? printf("Carta 1 (%s) venceu!\n", codigo1) :
    (soma2 > soma1) ? printf("Carta 2 (%s) venceu!\n", codigo2) :
    printf("Empate!\n");

    return 0;
}
