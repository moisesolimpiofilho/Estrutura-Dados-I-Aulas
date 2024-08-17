#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, NULL);
    char nome[10];
    int peso = 0;
    float altura = 0.0;

    printf("Qual seu nome? ");
    scanf("%s", nome);

    printf("Qual seu peso? ");
    scanf("%i", &peso);

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    if (imc < 18.5)
    {
        printf("Seu IMC eh: %.2f, classificado como Baixo Peso", imc);
    } 
    else if (imc >= 18.5 && imc <= 24.9) 
    {
        printf("Seu IMC eh: %.2f, classificado como Normal", imc);
    }
    else if (imc >= 25 && imc <= 29.9) 
    {
        printf("Seu IMC eh: %.2f, classificado como Sobrepeso", imc);
    }
    else if (imc >= 30 && imc <= 34.9)
    {
        printf("Seu IMC eh: %.2f, classificado como Obesidadade grau I", imc);
    }
    else if (imc >= 35 && 39.9)
    {
        printf("Seu IMC eh: %.2f, classificado como Obesidadade grau II", imc);
    }
    else if (imc > 39.9)
    {
        printf("Seu IMC eh: %.2f, classificado como Obesidadade grau III", imc);
    }

    return 0;
}