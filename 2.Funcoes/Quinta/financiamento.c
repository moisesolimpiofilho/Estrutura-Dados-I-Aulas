#include <stdio.h>
#include <locale.h>

float calcularParcelaSemJuros(float valor, int qtde)
{
    return valor / qtde;
}

float calcularParcelaComJuros(float taxa, float valor, int qtde)
{
    float percentualJuros = qtde * taxa;
    float totalComJuros = (valor * (percentualJuros / 100)) + valor;
    float valorParcela = totalComJuros / qtde;

    return valorParcela;
}

float calcularParcelaSalario(float salario)
{
    return salario * 0.30;
}

void imprimirRelatorio(float vTotal, int qtde, float vParcela)
{
    printf("\nSeu relatório ficou pronto 😀");
    printf("\nValor total do veículo %.2f", vTotal);
    printf("\nValor da parcela %.2f", vParcela);
    printf("\nQtde parcelas %i", qtde);
}

void verificarAprovacao(float vParcelaSalario, float vParcelaVeiculo)
{
    if (vParcelaSalario > vParcelaVeiculo)
    {
        printf("\nParabéns, está aprovado 😀");
    }
    else 
    {
        printf("\nInfelizmente não foi possível aprovar seu financiamento 🙁");
    }
    printf("\nParcela veículo R$ %.2f", vParcelaVeiculo);
    printf("\nParcela salário R$ %.2f", vParcelaSalario);
}

int main()
{
    setlocale(LC_ALL, NULL);

    printf("\n-- Olá vamos calcular seu financiamento --");

    float valor = 0.0;
    int qtdeParcelas = 0;
    float salario = 0.0;

    printf("\nQual o valor do veículo? ");
    scanf("%f", &valor);

    printf("Em quantas parcelas deseja pagar? ");
    scanf("%i", &qtdeParcelas);

    printf("Qual seu salário? ");
    scanf("%f", &salario);

    int opcao = 0;
    printf("\nDigite 1 para cálculo sem juros e 2 com juros: ");
    scanf("%i", &opcao);

    float valorParcela = 0.0;

    if (opcao == 1)
    {
        valorParcela = calcularParcelaSemJuros(valor, qtdeParcelas);
    } 
    else if (opcao == 2)
    {
        float taxaJuros = 0.0;
        printf("\nQual a taxa de juros? ");
        scanf("%f", &taxaJuros);
        valorParcela = calcularParcelaComJuros(taxaJuros, valor, qtdeParcelas);
    }
    
    float parcelaSalario = calcularParcelaSalario(salario);
    imprimirRelatorio(valor, qtdeParcelas, valorParcela);
    verificarAprovacao(parcelaSalario, valorParcela);

    return 0;
}