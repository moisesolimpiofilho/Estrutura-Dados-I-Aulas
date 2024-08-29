#include <stdio.h>
#include <locale.h>

void classificaIMC(float imc)
{
    if (imc < 18.5) 
    {
        printf("Classificado como baixo peso, imc %.2f", imc);
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("Classificado como peso normal 😀, imc %.2f", imc);
    }
    else if (imc >= 25.0 && imc <= 29.9)
    {
        printf("Classificado como sobrepeso, imc %.2f", imc);
    }
    else if (imc >= 30.0 && imc <= 34.9)
    {
        printf("Classificado como Obesidade grau I, imc %.2f", imc);
    }
    else if (imc >= 35.0 && imc <= 39.9)
    {
        printf("Classificado como Obesidade grau II, imc %.2f", imc);
    }
    else if (imc > 39.9)
    {
        printf("Classificado como Obesidade grau III, imc %.2f", imc);
    }
}


int main()
{
    setlocale(LC_ALL, NULL);

    int peso = 0;
    float altura = 0.0;

    printf("Olá, qual seu peso? ");
    scanf("%i", &peso);

    printf("Agora, qual sua altura? ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    classificaIMC(imc);

    return 0;
}