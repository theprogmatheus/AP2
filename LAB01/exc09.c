#include <stdio.h>

typedef struct
{
    char company[50];
    char activity[50];
    double value;
    double previousValue;
    double variation;
} Acao;

int main()
{
    Acao acao;

    // Leitura de dados
    printf("Insira o nome da empresa: \n");
    scanf("\n");
    fgets(acao.company, sizeof(acao.company), stdin);

    printf("Insira o valor da ação: ");
    scanf("%lf", &acao.value);

    printf("Insira o valor anterior da ação: ");
    scanf("%lf", &acao.previousValue);

    printf("Insira a variação da ação: ");
    scanf("%lf", &acao.variation);

    // Impressão

    printf("Nome da empresa: %s\n", acao.company);
    printf("Valor: %.2f\n", acao.value);
    printf("Valor anterior: %.2f\n", acao.previousValue);
    printf("Variação: %.2f\n", acao.variation);
}