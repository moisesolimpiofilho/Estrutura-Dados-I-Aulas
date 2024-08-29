#include <stdio.h>
#include <locale.h>

int totalLitros = 0;
int totalMinutos = 0;

void calculaTotalLitrosTempo(int idade)
{
    if (idade <= 10)
    {
        totalLitros += 18;
        totalMinutos += 3;
    }
    else if (idade > 10 && idade <= 18)
    {
        totalLitros += 30;
        totalMinutos += 5;
    }
    else if (idade > 18 && idade <= 25)
    {
        totalLitros += 42;
        totalMinutos += 7;
    }
    else if (idade > 25)
    {
        totalLitros += 24;
        totalMinutos += 4;
    }
}

void imprimirRelatorio()
{
    printf("\n--Segue seu relatório de consumo de água--");
    printf("\nO total em litros é %i", totalLitros);
    printf("\nO tempo total gasto foi %i", totalMinutos);
    printf("\nO valor final gasto é %.2f", (totalLitros * 0.60));
    printf("\nObrigado por usar nosso sistema 😀");
}


int main()
{
    setlocale(LC_ALL, NULL);

    printf("-- Olá vamos calcular o consumo de água na sua residência --");

    int qtdePessoas = 0;
    printf("\nQuantas pessoas moram na sua residência? ");
    scanf("%i", &qtdePessoas);

    for (int i=0; i < qtdePessoas; i++) {
        int idade = 0;
        printf("Qual a idade da %i pessoa: ", i+1);
        scanf("%i", &idade);
        calculaTotalLitrosTempo(idade);        
    }
    imprimirRelatorio();

    return 0;
}