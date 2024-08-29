#include <stdio.h>
#include <locale.h>

int totalLitros = 0;

void calculaTotalLitros(int idade)
{
    if (idade <= 10)
    {
        totalLitros += 18;
    }
    else if (idade >= 11 && idade <= 18)
    {
        totalLitros += 30;
    }
    else if (idade >= 19 && idade <= 25)
    {
        totalLitros += 42;
    } 
    else if (idade > 25)
    {
        totalLitros += 24;
    }
}

void mostrarRelatorio()
{
    printf("\n-- Segue o relatório de consumo de água --");
    printf("\nTotal de litros de água %i", totalLitros);
    printf("\nTotal gasto em reais R$ %.2f", (totalLitros * 0.60));

    printf("\nObrigado por usar nosso sistema 😀");
}


int main()
{
    setlocale(LC_ALL, NULL);

    int qtdePessoas = 0;
    printf("Olá quantas pessoas mora na sua casa? ");
    scanf("%i", &qtdePessoas);

    for (int i=0; i < qtdePessoas; i++) {

        int idade = 0;
        printf("Qual a idade da %i pessoa? ", i+1);
        scanf("%i", &idade);
        calculaTotalLitros(idade);
    }

    mostrarRelatorio();

    return 0;
}