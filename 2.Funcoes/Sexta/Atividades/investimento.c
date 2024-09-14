#include <stdio.h>
#include <locale.h>
#include <string.h>

char nome[20];
char classificacaoRisco[20];
float valorInvestimento = 0;
float valorFinal = 0;
float rentabilidade = 0;
float rentabilidadeTotal = 0;
float juros = 0;
int tempoEmMeses = 0;

void calculaAZInvestimentos()
{
    if (tempoEmMeses == 24) rentabilidade = 0.5;
    else if (tempoEmMeses == 60) rentabilidade = 0.8;
    else if (tempoEmMeses == 120) rentabilidade = 1.2;
}

void calculaCryptoInvest()
{
    if (tempoEmMeses == 24) rentabilidade = 1.1;
    else if (tempoEmMeses == 60) rentabilidade = 1.5;
    else if (tempoEmMeses == 120) rentabilidade = 1.9;
}

void calculaBitcoinXP()
{
    if (tempoEmMeses == 24) rentabilidade = 2.1;
    else if (tempoEmMeses == 60) rentabilidade = 2.8;
    else if (tempoEmMeses == 120) rentabilidade = 3.9;
}

void menuTempoInvestimento()
{
    int opcaoTempo = 0;

    printf("\nSelecione uma das opções de tempo para o investimento do valor R$ %.2f\n", valorInvestimento);
    printf("\n[1] 24 meses\n[2] 60 meses\n[3] 120 meses\n");
    scanf("%i", &opcaoTempo);

    if (opcaoTempo == 1)
        tempoEmMeses = 24;
    else if (opcaoTempo == 2)
        tempoEmMeses = 60;
    else if (opcaoTempo == 3)
        tempoEmMeses = 120;
}

void menuClassificacaoRisco()
{
    int opcaoRisco = 0;

    printf("\nSelecione uma das opções relacionadas ao risco do investimento\n");
    printf("\n[1] baixo risco\n[2] medio risco\n[3] alto risco\n");
    scanf("%i", &opcaoRisco);

    switch (opcaoRisco)
    {
    case 1:
        strcpy(classificacaoRisco, "baixo");
        break;
    case 2:
        strcpy(classificacaoRisco, "medio");
        break;
    case 3:
        strcpy(classificacaoRisco, "alto");
        break;

    default:
        break;
    }
}

void calcularValorFinal()
{
    rentabilidadeTotal = (rentabilidade * tempoEmMeses) / 100;
    juros = valorInvestimento * rentabilidadeTotal;
    valorFinal = valorInvestimento + juros;
}

void relatorio()
{
    printf("\nPrezado %s, segue o relatório do seu investimento 😀\n", nome);
    printf("\nValor investido R$ %.2f\n", valorInvestimento);
    printf("\nTempo total em meses %i\n", tempoEmMeses);
    printf("\nClassificação do risco %s\n", classificacaoRisco);
    printf("\nRentabilidade mensal de %.2f%%\n", rentabilidade);
    printf("\nRentabilidade total de %.2f%%\n", rentabilidadeTotal * 100);
    printf("\nJuros do investimento R$ %.2f\n", juros);
    printf("\nValor final R$ %.2f\n", valorFinal);
}

int main()
{
    setlocale(LC_ALL, NULL);

    printf("\nOlá, vamos iniciar sua simulação de investimentos 😀\n");
    printf("\nPara começar, qual seu nome? \n");
    scanf("%s", nome);

    printf("\n%s qual valor que deseja investir? \n", nome);
    scanf("%f", &valorInvestimento);

    menuTempoInvestimento();
    menuClassificacaoRisco();

    if (strcmp(classificacaoRisco, "baixo") == 0)
    {
        calculaAZInvestimentos();
    }
    else if (strcmp(classificacaoRisco, "medio") == 0)
    {
        calculaCryptoInvest();
    }
    else if (strcmp(classificacaoRisco, "alto") == 0)
    {
        calculaBitcoinXP();
    }

    calcularValorFinal();
    relatorio();
    
    return 0;
}