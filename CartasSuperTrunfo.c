#include <stdio.h>

int main() {
    // Variáveis da primeira cidade
    char estado1;
    char codigo_carta1[3];
    char nome_cidade1[30];
    int populacao1;
    float area1;
    float densidade_pop1;
    float pib1;
    float pib_per_capital1;
    int pontos_turisticos1;

    // Variáveis da segunda cidade
    char estado2;
    char codigo_carta2[3];
    char nome_cidade2[30];
    int populacao2;
    float area2;
    float densidade_pop2;
    float pib2;
    float pib_per_capital2;
    int pontos_turisticos2;

    // Cadastro da carta 1
    printf("\n++++ Olá, bem-vindo ao Super Trunfo! ++++\n\nCadastre a primeira carta.\n\n");

    printf("Digite uma letra entre A e H para representar o estado da cidade: ");
    scanf(" %c", &estado1);

    printf("Digite um código para a carta, entre 01 e 04: ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o valor do PIB da cidade: R$ ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);
    
    //Calculos de densidade populacional e PIP per capital - Cidade 1
    
    //Para a densidade populacional, é calculado (População / área)
    densidade_pop1 = (float) (populacao1 / area1 );
    //Para mostrar o PIP per capital, é feito calculo (PIP / população x 1bilhão)
    pib_per_capital1 = (float) (pib1 / populacao1 * 1000000000);


    // Apresentação dos dados da carta 1
    printf("\n\n==================== Carta 1 ====================\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); 
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_pop1);
    printf("PIP per capital: R$ %.2f \n", pib_per_capital1);
    printf("=================================================");

    // Cadastro da carta 2
    printf("\n\nCadastre a segunda carta.\n\n");

    printf("Digite uma letra entre A e H para representar o estado da cidade: ");
    scanf(" %c", &estado2);

    printf("Digite um código para a carta, entre 01 e 04: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da cidade: R$ ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    //Calculos de densidade populacional e PIP per capital - Cidade 2

    //Para a densidade populacional, é calculado (População / área)
    densidade_pop2 = (float) (populacao2 / area2 );
    //Para mostrar o PIP per capital, é feito calculo (PIP / população x 1bilhão)
    pib_per_capital2 = (float) (pib2 / populacao2 * 1000000000);


    // Apresentação dos dados da carta 2
    printf("\n\n==================== Carta 2 ====================\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_pop2);
    printf("PIP per capital: R$ %.2f \n", pib_per_capital2);
    printf("=================================================\n");

    return 0;
}
