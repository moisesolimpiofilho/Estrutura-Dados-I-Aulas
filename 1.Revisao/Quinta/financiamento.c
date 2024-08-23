#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, NULL);

    printf("---Olá, vamos calcular o financiamento do seu ímovel---");

    char nome[20];
    int qtdeAnosPagamento = 0;
    float salario = 0.0;
    float valorImovel = 0.0;

    printf("\nQual seu nome? ");
    scanf("%s", nome);

    printf("Qual seu salário? ");
    scanf("%f", &salario);

    printf("Qual valor do imóvel? ");
    scanf("%f", &valorImovel);

    printf("Em quantos anos deseja realizar o pagamento? ");
    scanf("%i", &qtdeAnosPagamento);

    float percentualSalario = salario * 0.30;
    float valorParcela = valorImovel / (qtdeAnosPagamento * 12);

    if (percentualSalario > valorParcela)
    {
        printf("Parabéns, seu financiamento está aprovado 😀");
    } else
    {
        printf("Infelizmente não foi possível aprovar o crédito 🙁");
    }
    
    printf("\nO valor da parcela do imóvel é R$ %.2f", valorParcela);
    printf("\nO percentual da sua renda é R$ %.2f", percentualSalario);

    return 0;
}