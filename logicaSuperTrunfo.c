#include <stdio.h>
#include <string.h>

// Definição de uma estrutura para armazenar as informações da cidade
typedef struct {
    char nome[100];
    int populacao;
    float area;
    float pib;
} Cidade;

int main() {
    // Definindo duas cidades
    Cidade cidade1, cidade2;

    // Cadastro da primeira cidade
    printf("Digite o nome da cidade 1: ");
    scanf("%s", cidade1.nome);
    printf("Digite a população da cidade 1: ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB da cidade 1 (em bilhões): ");
    scanf("%f", &cidade1.pib);

    // Cadastro da segunda cidade
    printf("Digite o nome da cidade 2: ");
    scanf("%s", cidade2.nome);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB da cidade 2 (em bilhões): ");
    scanf("%f", &cidade2.pib);

    // Comparação das cidades
    printf("\nComparação entre %s e %s:\n", cidade1.nome, cidade2.nome);

    // Comparando a população
    if (cidade1.populacao > cidade2.populacao) {
        printf("%s tem maior população.\n", cidade1.nome);
    } else if (cidade2.populacao > cidade1.populacao) {
        printf("%s tem maior população.\n", cidade2.nome);
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    // Comparando a área
    if (cidade1.area > cidade2.area) {
        printf("%s tem maior área.\n", cidade1.nome);
    } else if (cidade2.area > cidade1.area) {
        printf("%s tem maior área.\n", cidade2.nome);
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }

    // Comparando o PIB
    if (cidade1.pib > cidade2.pib) {
        printf("%s tem maior PIB.\n", cidade1.nome);
    } else if (cidade2.pib > cidade1.pib) {
        printf("%s tem maior PIB.\n", cidade2.nome);
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }

    // Exibindo a cidade vencedora com base no atributo mais forte
    // Aqui, podemos fazer uma pontuação para decidir a cidade vencedora com base em todos os atributos.

    int pontosCidade1 = 0, pontosCidade2 = 0;

    if (cidade1.populacao > cidade2.populacao) pontosCidade1++;
    else if (cidade2.populacao > cidade1.populacao) pontosCidade2++;

    if (cidade1.area > cidade2.area) pontosCidade1++;
    else if (cidade2.area > cidade1.area) pontosCidade2++;

    if (cidade1.pib > cidade2.pib) pontosCidade1++;
    else if (cidade2.pib > cidade1.pib) pontosCidade2++;

    // Determina a cidade vencedora com base nos pontos
    if (pontosCidade1 > pontosCidade2) {
        printf("\nA cidade vencedora é: %s\n", cidade1.nome);
    } else if (pontosCidade2 > pontosCidade1) {
        printf("\nA cidade vencedora é: %s\n", cidade2.nome);
    } else {
        printf("\nAs cidades empataram!\n");
    }

    return 0;
}

