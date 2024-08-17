#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, NULL);

    float valorLitroAgua = 0.60;
    int numeroPessoas = 0;
    int totalLitros = 0;

    printf("Olá, quantas pessoas moram na casa? ");
    scanf("%i", &numeroPessoas);

    for (int i=0; i < numeroPessoas; i++) {

        int idadePessoa = 0;
        printf("Qual idade da pessoa? ");
        scanf("%i", &idadePessoa);

        if (idadePessoa <= 10) 
        {
            totalLitros += 18;
        }
        else if (idadePessoa > 10 && idadePessoa <= 18) 
        {
            totalLitros += 30;
        }
        else if (idadePessoa > 18 && idadePessoa <= 25) 
        {
            totalLitros += 42;
        } 
        else if (idadePessoa > 25)
        {
            totalLitros += 24;
        }
    }

    printf("O total de litros de agua consumidos é: %i", totalLitros);
    printf("\nO total em reais é R$ %.2f", (totalLitros * valorLitroAgua));

    return 0;
}