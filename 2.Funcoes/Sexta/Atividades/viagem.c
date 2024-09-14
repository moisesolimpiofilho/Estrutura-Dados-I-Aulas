#include <stdio.h>
#include <locale.h>

char nome[20];

void relatorioParcelado(float valorTotal, float valorParcela, int qtdeParcelas)
{
    printf("\nRelatório de compra de viagem\n");
    printf("\nValor a ser pago R$ %.2f\n", valorTotal);
    printf("\nParcelado em %i vezes\n", qtdeParcelas);
    printf("\nValor por parcela R$ %.2f\n", valorParcela);
}

void calcularPagamentoVista(float valorPacote)
{
    float desconto = valorPacote * 0.125;
    float total = valorPacote - desconto;

    printf("\nRelatório de compra de viagem\n");
    printf("\nValor a ser pago R$ %.2f\n", total);
    printf("\nSeu desconto foi de R$ %.2f\n", desconto);
}

void calcularPagamentoParcelado(float valorPacote, int qtdeVezes)
{
    float valorParcela = 0;
    float jurosParcelamento = 0;

    if (qtdeVezes == 12)
    {
        valorParcela = valorPacote / qtdeVezes;
    }
    else if (qtdeVezes == 24)
    {
        jurosParcelamento = 24 * 0.03;
        valorParcela =  valorPacote + (valorPacote * jurosParcelamento);
    }
    else if (qtdeVezes == 36)
    {
        jurosParcelamento = 36 * 0.05;
        valorParcela =  valorPacote + (valorPacote * jurosParcelamento);
    }

    relatorioParcelado(valorPacote, valorParcela, qtdeVezes);
}

void calculaPacoteViagens(int formaPagamento, float valorPacote)
{
    switch (formaPagamento)
    {
    case 0:
        calcularPagamentoVista(valorPacote);
        break;
    case 1:
        calcularPagamentoParcelado(valorPacote, 12);
        break;
    case 2:
        calcularPagamentoParcelado(valorPacote, 24);
        break;
    case 3:
        calcularPagamentoParcelado(valorPacote, 36);
        break;
    default:
        break;
    }
}

int main()
{
    setlocale(LC_ALL, NULL);

    float valor = 0;
    int pensaoCompleta = 0;
    int adicionaisTuristicos = 0;
    int formaPagamento = 0;

    printf("\nOlá, seja bem vindo à CVC viagens 😀\n");

    printf("\nPara começar qual seu nome? ");
    scanf("%s", nome);
    
    printf("\nQual valor que possui para viajar? \n");
    scanf("%f", &valor);

    if (valor > 25000)
    {
        printf("\nEscolha se deseja pensão completa\n");
        printf("\n[0]-Não [1]-Sim\n");
        scanf("%i", &pensaoCompleta);

        printf("\nEscolha se deseja adicionais turísticos\n");
        printf("\n[0]-Não [1]-Sim\n");
        scanf("%i", &adicionaisTuristicos);
    }
    
    printf("\nSelecione a forma de pagamento\n");
    printf("\n[0]-Á vista\n[1]-Em até 12 vezes\n[2]-Em até 24 vezes\n[3]-Em até 36 vezes\n");
    scanf("%i", &formaPagamento);
    
    calculaPacoteViagens(formaPagamento, valor);

    return 0;
}