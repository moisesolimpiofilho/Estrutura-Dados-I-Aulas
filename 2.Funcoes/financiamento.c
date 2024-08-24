#include <stdio.h>
#include <locale.h>

float calculaPercentualSalario(float salarioPessoa)
{
    return salarioPessoa * 0.30;
}

float calculaValorParcela(float valorVeiculo, int qtdeMeses)
{
    return valorVeiculo / qtdeMeses;
}


int main()
{
    setlocale(LC_ALL, NULL);

    printf("Olá, seja bem vindo a nossa loja 😀");

    float valorVeiculo = 0.0;
    printf("\nQual o valor do veículo? ");
    scanf("%f", &valorVeiculo);

    int qtdeMeses = 0;
    printf("Em quantos meses deseja pagar o veículo? ");
    scanf("%i", &qtdeMeses);

    float salario = 0.0;
    printf("Qual o salário? ");
    scanf("%f", &salario);

    float salario30 = calculaPercentualSalario(salario);
    float valorParcela = calculaValorParcela(valorVeiculo, qtdeMeses);

    if (salario30 > valorParcela)
    {
        printf("\nParabéns 😀, você comprou o veículo");
    } else 
    {
        printf("\nInfelizmente 🙁 não foi possível aprovar a compra");
    }

    printf("\n30%% do salário é R$ %.2f", salario30);
    printf("\nO valor da parcela é R$ %.2f", valorParcela);

    return 0;
}