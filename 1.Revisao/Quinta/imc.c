#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, NULL);

    char nome[20];
    int peso = 0;
    float altura = 0.0;

    printf("Olá, vamos calcular seu IMC");

    printf("\nQual seu nome? ");
    scanf("%s", nome);
    
    printf("\nQual seu peso? ");
    scanf("%i", &peso);

    printf("\nQual sua altura? ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);
    
    if (imc < 18.5)
    {
        printf("%s, você foi classificado como baixo peso com IMC %.2f", nome, imc);
    } 
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("%s, você foi classificado como peso ideal com IMC %.2f", nome, imc);
    }
    else if (imc >= 25.0 && imc <= 29.9)
    {
        printf("%s, você foi classificado como sobre peso com IMC %.2f", nome, imc);
    }
    else if (imc >= 30 && imc <= 34.9)
    {
        printf("%s, você foi classificado como obesidade grau I com IMC %.2f", nome, imc);
    }
    else if (imc >= 35.0 && imc <= 39.9) 
    {
        printf("%s, você foi classificado como obesidade grau II com IMC %.2f", nome, imc);
    }
    else if (imc > 39.9)
    {
        printf("%s, você foi classificado como obesidade grau III com IMC %.2f", nome, imc);
    }

    return 0;
}