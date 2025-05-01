#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    float densidade1, pibPerCapita1;

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    float densidade2, pibPerCapita2;
    
    // Cadastro das Cartas:
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos para a carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    
    // Menu de seleção de atributo para comparação
    int atributo;
    printf("\nSelecione o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &atributo);

    // Comparação de Cartas:
    printf("\n--- Resultado da Comparação ---\n");
    
    switch(atributo) {
        case 1: // População
            printf("Critério: População\n");
            printf("%s: %d habitantes\n", nomeCidade1, populacao1);
            printf("%s: %d habitantes\n", nomeCidade2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
            
        case 2: // Área
            printf("Critério: Área\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);
            
            if (area1 > area2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
            
        case 3: // PIB
            printf("Critério: PIB\n");
            printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhões\n", nomeCidade2, pib2);
            
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
            
        case 4: // Pontos Turísticos
            printf("Critério: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
            
        case 5: // Densidade Populacional
            printf("Critério: Densidade Populacional\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);
            
            if (densidade1 > densidade2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (densidade2 > densidade1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
            
        case 6: // PIB per capita
            printf("Critério: PIB per capita\n");
            printf("%s: R$ %.2f\n", nomeCidade1, pibPerCapita1);
            printf("%s: R$ %.2f\n", nomeCidade2, pibPerCapita2);
            
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
            
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}