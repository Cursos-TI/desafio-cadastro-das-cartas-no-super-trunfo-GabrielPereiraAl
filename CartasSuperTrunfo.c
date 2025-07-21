#include <stdio.h>

int main() {
    // Variáveis da primeira cidade
    char estado1;
    char codigo_carta1[3];
    char nome_cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristico1;

    // Variáveis da segunda cidade
    char estado2;
    char codigo_carta2[3];
    char nome_cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristico2;

    // Cadastro da carta 1
    printf("\n++++ Olá, bem-vindo ao Super Trufo! ++++\n\nCadastre a primeira carta.\n\n");

    printf("Digite a inicial do nome do estado: ");
    scanf(" %c", &estado1);

    printf("Digite um código para a carta (exemplo: 01,12,33...): ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da área da cidade em Km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos a cidade possui: ");
    scanf("%d", &pontosTuristico1);

    // Apresentando os dados da carta 1
    printf("\n\n==================== Carta 1 ====================\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$%.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristico1);
    printf("=================================================");

    // Cadastro da carta 2
    printf("\n\nCadastre a carta 2.\n\n");

    printf("Digite a inicial do nome do estado: ");
    scanf(" %c", &estado2);

    printf("Digite um código para a carta (exemplo: 01,12,33...): ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da área da cidade em Km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos a cidade possui: ");
    scanf("%d", &pontosTuristico2);

    // Apresentando os dados da carta 2
    printf("\n\n==================== Carta 2 ====================\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$%.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristico2);
    printf("\n=================================================");
    return 0;
}
