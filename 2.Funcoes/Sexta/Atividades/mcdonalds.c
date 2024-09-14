#include <stdio.h>
#include <locale.h>
#include <string.h>

char nome[30];
char cupomCliente[10];
int categoria = 0;
float total = 0;
float percentualDesconto = 0;
float desconto = 0;

void menuPrincipal()
{
    printf("\nEscolha a opção desejada\n");
    printf("\n[1]-Lanches\n[2]-Sobremesas\n");
    scanf("%i", &categoria);
}

void menuLanches()
{
    int opcaoLanche = 0;

    printf("\nEscolha seu lanche\n");
    printf("\n[1]-Cheedar (R$ 19.90)\n[2]-MC Lanche Feliz (R$ 22.90)\n[3]-MC Duplo (R$ 24.90)\n[4]-Big Mac (R$ 29.90)\n[5]-Mac Super (R$ 27.90)\n[6]-Batata (R$ 17.90)\n");
    scanf("%i", &opcaoLanche);

    switch (opcaoLanche)
    {
    case 1:
        printf("\nAdicionado Cheedar R$ 19.90\n");
        total += 19.90;
        break;
    case 2:
        printf("\nAdicionado MC Lanche Feliz R$ 22.90\n");
        total += 22.90;
        break;
    case 3:
        printf("\nAdicionado MC Duplo R$ 24.90\n");
        total += 24.90;
        break;
    case 4:
        printf("\nAdicionado Big Mac R$ 29.90\n");
        total += 29.90;
        break;
    case 5:
        printf("\nAdicionado Mac Super R$ 27.90\n");
        total += 27.90;
        break;
    case 6:
        printf("\nAdicionado Batata R$ 17.90\n");
        total += 17.90;
        break;
    default:
        break;
    }
}

void menuSobremesas()
{
    int opcaoSobremesa = 0;

    printf("\nEscolha a sobremesa\n");
    printf("\n[1]-Sorvete casquinha (R$ 3.90)\n[2]-Cascão (R$ 14.90)\n");
    scanf("%i", &opcaoSobremesa);

    switch (opcaoSobremesa)
    {
    case 1:
        printf("\nAdicionado casquinha R$ 3.90\n");
        total += 3.90;
        break;
    case 2:
        printf("\nAdicionado Cascão R$ 14.90\n");
        total += 14.90;
        break;
    
    default:
        break;
    }
}

void validarCupom()
{
    if (strcmp(cupomCliente, "ABC5F") == 0)
    {
        percentualDesconto = 0.05;
    }
    else if (strcmp(cupomCliente, "WER2A") == 0)
    {
        percentualDesconto = 0.08;
    }
    else if (strcmp(cupomCliente, "BNM9R") == 0)
    {
        percentualDesconto = 0.10;
    }
    else if (strcmp(cupomCliente, "QDG8X") == 0)
    {
        percentualDesconto = 0.18;
    }
    desconto = total * percentualDesconto;
}

void mostrarRelatorio()
{
    printf("\n%s, segue as informações da compra no Totem\n", nome);

    if (percentualDesconto > 0)
    {
        printf("\nValor total de R$ %.2f\n", total);
        
        total = total - desconto;

        printf("\nValor total a pagar R$ %.2f\n", total);

        printf("\nDesconto R$ %.2f\n", desconto);
    }
    else 
    {
        printf("\nValor total R$ %.2f\n", total);
    }
    
}

int main()
{
    setlocale(LC_ALL, NULL);

    printf("\nOlá, seja bem vindo ao MC Donald's\n");
    printf("\nPara começar, qual seu nome? \n");
    scanf("%s", nome);
    
    int continuar = 0; // 0->não, 1->sim
    do
    {
        menuPrincipal();

        if (categoria == 1)
        {
            menuLanches();
        }
        else if (categoria == 2)
        {
            menuSobremesas();
        }

        printf("\nDeseja adicionar mais itens?\n");
        printf("\n[0]-Não\n[1]-Sim\n");
        scanf("%i", &continuar);

    } while (continuar == 1);
    
    int possuiCupom = 0;
    printf("\nTem cupom ?\n");
    printf("\n[0]-Não\n[1]-Sim\n");
    scanf("%i", &possuiCupom);

    if (possuiCupom == 1)
    {
        printf("\nQual o código do cupom? \n");
        scanf("%s", cupomCliente);
        validarCupom();
    }
    
    mostrarRelatorio();

    return 0;
}