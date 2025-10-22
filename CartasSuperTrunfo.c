#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    getchar();

    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); 
    if (nomeCidade1[strlen(nomeCidade1)-1] == '\n') nomeCidade1[strlen(nomeCidade1)-1] = '\0';

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²) (use ponto como separador decimal): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais) (use ponto como separador decimal): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%3s", codigo2);

    getchar();

    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    if (nomeCidade2[strlen(nomeCidade2)-1] == '\n') nomeCidade2[strlen(nomeCidade2)-1] = '\0';

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²) (use ponto como separador decimal): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais) (use ponto como separador decimal): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n\n=== CARTAS CADASTRADAS ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
