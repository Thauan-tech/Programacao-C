#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados da carta
struct CartaCidade {
    char Estado;                // Letra de A a H
    char Codigo[4];            // Ex: A01, B03
    char nomeCidade[50];
    int Populacao;
    float areaCidade;
    float PIB;
    int pontosTuristicos;
    float densidadeDemografica;
};

int main() {
    struct CartaCidade carta1 = {'A', "A01", "Cidade Alpha", 1000000, 500.0, 150.0, 10, 0};
    struct CartaCidade carta2 = {'B', "B02", "Cidade Beta", 800000, 800.0, 200.0, 15, 0};

    // Cálculo da densidade demográfica (habitantes por km²)
    carta1.densidadeDemografica = carta1.Populacao / carta1.areaCidade;
    carta2.densidadeDemografica = carta2.Populacao / carta2.areaCidade;

    int opcao;

    printf("===== MENU DE COMPARACAO - SUPER TRUNFO CIDADES =====\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha um atributo para comparar (1 a 5): ");
    scanf("%d", &opcao);

    printf("\nComparando: %s (Carta 1) vs %s (Carta 2)\n\n", carta1.nomeCidade, carta2.nomeCidade);

    switch (opcao) {
        case 1:
            printf("Populacao: %d x %d\n", carta1.Populacao, carta2.Populacao);
            if (carta1.Populacao > carta2.Populacao)
                printf("%s venceu!\n", carta1.nomeCidade);
            else if (carta1.Populacao < carta2.Populacao)
                printf("%s venceu!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Area: %.2f km² x %.2f km²\n", carta1.areaCidade, carta2.areaCidade);
            if (carta1.areaCidade > carta2.areaCidade)
                printf("%s venceu!\n", carta1.nomeCidade);
            else if (carta1.areaCidade < carta2.areaCidade)
                printf("%s venceu!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %.2f bilhões x %.2f bilhões\n", carta1.PIB, carta2.PIB);
            if (carta1.PIB > carta2.PIB)
                printf("%s venceu!\n", carta1.nomeCidade);
            else if (carta1.PIB < carta2.PIB)
                printf("%s venceu!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turisticos: %d x %d\n", carta1.pontosTuristicos, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("%s venceu!\n", carta1.nomeCidade);
            else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
                printf("%s venceu!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demografica: %.2f hab/km² x %.2f hab/km²\n", carta1.densidadeDemografica, carta2.densidadeDemografica);
            if (carta1.densidadeDemografica < carta2.densidadeDemografica)
                printf("%s venceu! (menor densidade vence)\n", carta1.nomeCidade);
            else if (carta1.densidadeDemografica > carta2.densidadeDemografica)
                printf("%s venceu! (menor densidade vence)\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida. Tente novamente.\n");
    }

    return 0;
}
