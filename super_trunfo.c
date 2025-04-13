#include <stdio.h>

#include <stdio.h>

// Definição da estrutura Carta
struct Carta {
    char estado;
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
};

// Função para comparar duas cartas
void compararCartas(struct Carta c1, struct Carta c2) {
    int vitorias_c1 = 0;
    int vitorias_c2 = 0;

    printf("\nComparação de Cartas:\n\n");

    // População
    if (c1.populacao > c2.populacao) {
        printf("População: %s venceu\n", c1.nome);
        vitorias_c1++;
    } else {
        printf("População: %s venceu\n", c2.nome);
        vitorias_c2++;
    }

    // Área
    if (c1.area > c2.area) {
        printf("Área: %s venceu\n", c1.nome);
        vitorias_c1++;
    } else {
        printf("Área: %s venceu\n", c2.nome);
        vitorias_c2++;
    }

    // PIB
    if (c1.pib > c2.pib) {
        printf("PIB: %s venceu\n", c1.nome);
        vitorias_c1++;
    } else {
        printf("PIB: %s venceu\n", c2.nome);
        vitorias_c2++;
    }

    // Pontos turísticos
    if (c1.pontos_turisticos > c2.pontos_turisticos) {
        printf("Pontos Turísticos: %s venceu\n", c1.nome);
        vitorias_c1++;
    } else {
        printf("Pontos Turísticos: %s venceu\n", c2.nome);
        vitorias_c2++;
    }

    // Densidade populacional (MENOR vence)
    if (c1.densidade_populacional < c2.densidade_populacional) {
        printf("Densidade Populacional: %s venceu\n", c1.nome);
        vitorias_c1++;
    } else {
        printf("Densidade Populacional: %s venceu\n", c2.nome);
        vitorias_c2++;
    }

    // PIB per capita
    if (c1.pib_per_capita > c2.pib_per_capita) {
        printf("PIB per Capita: %s venceu\n", c1.nome);
        vitorias_c1++;
    } else {
        printf("PIB per Capita: %s venceu\n", c2.nome);
        vitorias_c2++;
    }

    // Resultado final
    printf("\nResultado Final:\n");
    printf("%s venceu %d atributos.\n", c1.nome, vitorias_c1);
    printf("%s venceu %d atributos.\n", c2.nome, vitorias_c2);

    if (vitorias_c1 > vitorias_c2) {
        printf("🏆 %s é a campeã!\n", c1.nome);
    } else if (vitorias_c2 > vitorias_c1) {
        printf("🏆 %s é a campeã!\n", c2.nome);
    } else {
        printf("🤝 Empate entre as cartas!\n");
    }
}

int main() {
    // Declaração das cartas
    struct Carta carta1, carta2;

    // Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nome);

    printf("Informe a População: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cálculos da carta 1
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = (carta1.pib * 1000000000) / carta1.populacao;

    printf("\n");

    // Entrada dos dados da Carta 2
    printf("Cadastro da Carta 2\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nome);

    printf("Informe a População: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculos da carta 2
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = (carta2.pib * 1000000000) / carta2.populacao;

    printf("\n");

    // Comparação das cartas
    compararCartas(carta1, carta2);

    return 0;
}