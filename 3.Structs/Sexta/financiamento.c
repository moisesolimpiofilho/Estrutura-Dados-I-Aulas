#include <stdio.h>
#include <locale.h>

struct Endereco {
    char cidade[20];
    char uf[2];
};

struct Imovel {
    float valor;
    struct Endereco endereco;
};  

struct Financiamento {
    float valorParcela;
    int qtdeParcelas;        
    struct Imovel imovel;
};

struct Cliente {
    char nome[20];
    float salario;
    float salario30;
    struct Financiamento financiamento;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Olá seja bem vindo a nossa imobiliária :)\n");

    struct Endereco end = {"Capivari", "SP"};

    struct Imovel imv = {200000, end};

    struct Cliente cli;

    printf("Qual seu nome?\n");
    scanf("%s", cli.nome);

    printf("Qual seu salário?\n");
    scanf("%f", &cli.salario);

    cli.salario30 = cli.salario * 0.30;

    struct Financiamento fin;
    fin.imovel = imv;

    printf("Quantas parcelas deseja pagar ? ");
    scanf("%i", &fin.qtdeParcelas);

    fin.valorParcela = fin.imovel.valor / fin.qtdeParcelas;

    if (fin.valorParcela < cli.salario30) {
        printf("Parabéns você comprou o imóvel\n");
    } else {
        printf("Não foi possível comprar o ímovel\n");
    }

    printf("Valor da parcela R$ %.2f\n", fin.valorParcela);
    printf("Percentual salário R$ %.2f\n", cli.salario30);

    return 0;
}
