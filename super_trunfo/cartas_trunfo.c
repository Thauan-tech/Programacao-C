#include <stdio.h>

// Estrutura para armazenar os dados da carta
struct CartaCidade {
    char Estado;                // Letra de A a H
    char Codigo[4];            // Ex: A01, B03
    char nomeCidade[50];
    int Populacao;
    float areaCidade;
    float PIB;
    int pontosTuristicos;
};

int main() {
    struct CartaCidade carta1, carta2;

    // ==== CARTA 1 ====
    printf("=== Preenchendo Carta 1 ===\n");

    printf("Digite o Estado (letra de A a H): \n");
    scanf(" %c", &carta1.Estado);  // espaço antes do %c para ignorar '\n'

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf("%s", carta1.Codigo);

    getchar(); // limpar buffer antes do fgets
    printf("Digite o nome da cidade: \n");
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);

    printf("Digite a população Stotal da cidade: \n");
    scanf("%d", &carta1.Populacao);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &carta1.areaCidade);

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &carta1.PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &carta1.pontosTuristicos);

    getchar(); // limpar buffer novamente

    // ==== CARTA 2 ====
    printf("\n=== Preenchendo Carta 2 ===\n");

    printf("Digite o Estado (letra de A a H): \n");
    scanf(" %c", &carta2.Estado);

    printf("Digite o Código da Carta (ex: B03): \n");
    scanf("%s", carta2.Codigo);

    getchar();
    printf("Digite o nome da cidade: \n");
    fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin);

    printf("Digite a população total da cidade: \n");
    scanf("%d", &carta2.Populacao);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &carta2.areaCidade);

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &carta2.PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &carta2.pontosTuristicos);

    // ==== SAÍDA ORGANIZADA ====
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.Estado);
    printf("Código: %s\n", carta1.Codigo);
    printf("Nome da Cidade: %s", carta1.nomeCidade);
    printf("População: %d\n", carta1.Populacao);
    printf("Área: %.2f km²\n", carta1.areaCidade);
    printf("PIB: %.2f bilhões de reais\n", carta1.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.Estado);
    printf("Código: %s\n", carta2.Codigo);
    printf("Nome da Cidade: %s", carta2.nomeCidade);
    printf("População: %d\n", carta2.Populacao);
    printf("Área: %.2f km²\n", carta2.areaCidade);
    printf("PIB: %.2f bilhões de reais\n", carta2.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}


