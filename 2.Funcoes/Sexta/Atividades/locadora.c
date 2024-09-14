#include <stdio.h>
#include <locale.h>

char nome[20];

float calcularValorPorDiaria(int dias)
{
    float valorTotalDiarias = 0;

    if (dias <= 3) valorTotalDiarias = 109.90;
    else if (dias > 3 && dias <= 7) valorTotalDiarias = 99.90;
    else if (dias > 7 && dias <= 15) valorTotalDiarias = 89.90;
    else if (dias > 15) valorTotalDiarias = 69.90;
    
    return valorTotalDiarias * dias;
}

float calcularValorPorKm(int kmsRodados)
{
    float valorTotalKm = 0;

    if (kmsRodados <= 500) valorTotalKm = 0.85;
    else if (kmsRodados > 500 && valorTotalKm <= 900) valorTotalKm = 0.75;
    else if (kmsRodados > 900 && valorTotalKm <= 2000) valorTotalKm = 0.69;
    else if (kmsRodados > 2000) valorTotalKm = 0.65;

    return kmsRodados * valorTotalKm;
}

void relatorio(float totalPorDiaria, float totalPorKm)
{
    printf("\n%s, segue o relatório com base na nossa IA 😀\n", nome);
    printf("\nTotal por diária R$ %.2f\n", totalPorDiaria);
    printf("\nTotal por kilometros R$ %.2f\n", totalPorKm);

    if (totalPorDiaria < totalPorKm)
    {
        printf("\nRecomendamos o plano por diária\n");
    }
    else
    {
        printf("\nRecomendamos o plano por KM\n");
    }
    printf("\nObrigado 😀\n");
}

int main()
{
    setlocale(LC_ALL, NULL);

    int qtdeDias = 0;
    int kmRodados = 0;
    
    printf("\nOlá, seja bem vindo à locadora de veículos 😀\n");

    printf("\nPara começar, qual seu nome? \n");
    scanf("%s", nome);

    printf("\nQuantos dias o carro ficará alugado? \n");
    scanf("%i", &qtdeDias);

    printf("\nQuantos kilometros o carro vai rodar? \n");
    scanf("%i", &kmRodados);

    float totalPorDiaria = calcularValorPorDiaria(qtdeDias);
    float totalPorKm = calcularValorPorKm(kmRodados);

    relatorio(totalPorDiaria, totalPorKm);

    return 0;
}