#include <stdio.h>

int main() {
    // Variáveis da primeira cidade
    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[30];
    unsigned long int populacao1;
    float area1;
    float densidade_pop1;
    float pib1;
    float pib_per_capita1;
    int pontos_turisticos1;
    float super_poder1;

    // Variáveis da segunda cidade
    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[30];
    unsigned long int populacao2;
    float area2;
    float densidade_pop2;
    float pib2;
    float pib_per_capita2;
    int pontos_turisticos2;
    float super_poder2;

    //Cadastrando as cartas do jogo

    // Cadastro da carta 1
    printf("\n++++ Olá, bem-vindo ao Super Trunfo! ++++\n\nCadastre a primeira carta.\n\n");

    printf("Digite uma letra entre A e H para representar o estado da cidade: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: 01): ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite o tamanho da área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o valor do PIB da cidade (em bilhoes): R$ ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);
    
    //Calculos de densidade populacional, PIP per capita e Super Poder - Cidade 1
    
    //Para a densidade populacional, é calculado (População / área)
    densidade_pop1 = populacao1 / area1;
    //Para mostrar o PIP per capita, é feito calculo (PIP / população x 1bilhão)
    pib_per_capita1 = (pib1 * 1000000000.0f)/populacao1;
    //Para mostrar o Super Poder
    super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 +(1.0f / densidade_pop1);


    // Apresentação dos dados da carta 1
    printf("\n\n==================== Carta 1 ====================\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1); 
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_pop1);
    printf("PIP per capita: R$ %.2f \n", pib_per_capita1);
    printf("Super Poder: %.2f\n",super_poder1);
    printf("=================================================");

    // Cadastro da carta 2
    printf("\n\nCadastre a segunda carta.\n\n");

    printf("Digite uma letra entre A e H para representar o estado da cidade: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: 01): ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome_cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite o tamanho da área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da cidade (em bilhões): R$ ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    //Calculos de densidade populacional, PIP per capita e Super Poder - Cidade 2

    //Para a densidade populacional, é calculado (População / área)
    densidade_pop2 = populacao2 / area2;
    //Para mostrar o PIP per capita, é feito calculo (PIP / população x 1bilhão)
    pib_per_capita2 = (pib2 * 1000000000.f)/populacao2;
    //Para calcular o Super Poder
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 +(1.0f / densidade_pop2);


    // Apresentação dos dados da carta 2
    printf("\n\n==================== Carta 2 ====================\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_pop2);
    printf("PIP per capita: R$ %.2f \n", pib_per_capita2);
    printf("Super Poder: %.2f\n",super_poder2);
    

    printf("\n\n===================== Resultado =====================\n\n");

    printf("Resultado da comparação (1 para Carta 1, 0 para Carta 2 ou Empate):\n\n");
    printf("População: %d\n",populacao1>populacao2);
    printf("Área: %d\n",area1>area2);
    printf("PIP: %d\n",pib1>pib2);
    printf("Pontos Turisticos:  %d\n",pontos_turisticos1>pontos_turisticos2);
    printf("Densidade Populacional:  %d\n",densidade_pop1<densidade_pop2);
    printf("PIP per capita:  %d\n",pib_per_capita1>pib_per_capita2);
    printf("Super Poder: %d\n",super_poder1>super_poder2);


    return 0;
}
