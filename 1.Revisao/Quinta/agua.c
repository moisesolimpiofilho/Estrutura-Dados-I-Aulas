#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, NULL);

    printf("=== Olá seja bem vindo, vamos calcular o consumo de água na sua residência ===");
    
    int qtdePessoas = 0;
    int totalLitros = 0;

    printf("\nQuantas pessoas moram na residência? ");
    scanf("%i", &qtdePessoas);

    printf("Qtde %i", qtdePessoas);

    for (int i=0; i < qtdePessoas; i++) {

        int idade = 0;
        printf("\nQual a idade da %i pessoa? ", i+1);
        scanf("%i", &idade);

        if (idade <= 10)
        {
            totalLitros += 18;
        }
        else if (idade > 10 && idade <= 18)
        {
            totalLitros += 30;
        }
        else if (idade > 18 && idade <= 25)
        {
            totalLitros += 42;
        }
        else if (idade > 25)
        {
            totalLitros += 24;
        }
    }

    printf("\nO total de litros consumido é %i", totalLitros);
    printf("\nO total em R$ %.2f", (totalLitros * 0.60));
    return 0;
}