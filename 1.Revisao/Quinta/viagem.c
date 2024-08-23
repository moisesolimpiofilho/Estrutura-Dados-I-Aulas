#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, NULL);

    printf("--- Olá, vamos lançar no sistema os registros das viagens ---");

    int qtdeViagens = 0;
    printf("\nQuantos viagens deseja lançar no sistema? ");
    scanf("%i", &qtdeViagens);

    int qtdeTotalKilometros = 0;
    int qtdeTotalLitrosAbastecidos = 0;
    float valorTotal = 0.0;

    for (int i=0; i< qtdeViagens; i++) 
    {
        printf("\nInforme os dados do %i veículo", i+1);

        int qtdeKilometrosV = 0;
        printf("\nQtde kilometros: ");
        scanf("%i", &qtdeKilometrosV);

        qtdeTotalKilometros += qtdeKilometrosV;

        int qtdeLitrosV = 0;
        printf("\nQtde litros combustível: ");
        scanf("%i", &qtdeLitrosV);

        qtdeTotalLitrosAbastecidos += qtdeLitrosV;

        float valorLitroCombustivel = 0.0;
        printf("\nQual valor do litro do combustível abastecido: ");
        scanf("%f", &valorLitroCombustivel);

        valorTotal += qtdeLitrosV * valorLitroCombustivel;
    }

    printf("\nO Total de kilometros percorridos foi %i", qtdeTotalKilometros);
    printf("\nQ qtde de litros abastecidos foi %i", qtdeTotalLitrosAbastecidos);
    printf("\nO valor o total foi R$ %.2f", valorTotal);
    return 0;
}