#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, NULL);

    float valorVeiculo = 0.0;
    int qtdeMeses = 0;
    float valorSalario = 0.0;

    printf("Qual o valor do veículo? ");
    scanf("%f", &valorVeiculo);

    printf("Em quantos meses deseja pagar? ");
    scanf("%d", &qtdeMeses);

    printf("Qual o salário do comprador? ");
    scanf("%f", &valorSalario);

    float valorParcela = valorVeiculo / qtdeMeses;
    float percentualSalario = valorSalario * 0.30;
    
    if (percentualSalario > valorParcela)
    {
        printf("\nParabéns, seu crédito foi aprovado");
    }
    else 
    {
        printf("\nInfelizmente não é possível realizar o financiamento");
    }

    printf("\n30%% do salário é R$ %.2f", percentualSalario);
    printf("\nParcela veículo é R$ %.2f", valorParcela);
    

    return 0;
}