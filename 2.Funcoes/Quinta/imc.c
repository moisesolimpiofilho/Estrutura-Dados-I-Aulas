#include <stdio.h>
#include <locale.h>

void classificaIMC(float valorImc) {
    if (valorImc < 18.5)
    {
        printf("Seu imc calculado é %.2f, classificado como baixo peso", valorImc);
    }
    else if (valorImc >= 18.5 && valorImc <= 24.9) 
    {
        printf("Seu imc calculado é %.2f, classificado como peso normal", valorImc);
    }
    else if (valorImc >= 25.0 && valorImc <= 29.9)
    {
        printf("Seu imc calculado é %.2f, classificado como sobrepeso", valorImc);
    }
    else if (valorImc >= 30 && valorImc <= 34.9)
    {
        printf("Seu imc calculado é %.2f, classificado como obesidade grau I", valorImc);
    }
    else if (valorImc >= 35.0 && valorImc <= 39.9)
    {
        printf("Seu imc calculado é %.2f, classificado como obesidade grau II", valorImc);
    }
    else if (valorImc > 39.9)
    {
        printf("Seu imc calculado é %.2f, classificado como obseidade grau III", valorImc);
    }
}

int main()
{
    setlocale(LC_ALL, NULL);

    printf("\n-- Olá seja bem vindo, vamos calcular o IMC --");

    int peso = 0;
    float altura = 0.0;

    printf("\nQual seu peso? ");
    scanf("%i", &peso);

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    classificaIMC(imc);

    return 0;
}