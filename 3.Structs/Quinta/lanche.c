#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Lanche {
    char nome[30];
    char tipoPao[30];
    char molhos[200];
    float preco;
    char tomate[5];
    char carne[5];
    char queijo[5];
    char alface[5];
    char cebola[5];    
    char bacon[5];
};

int main()
{
    printf("Bem vindo a lanchonete CPV\n");

    struct Lanche americano = {
        "Americano", "Brioshi", "Barbecue, catchup, maionese",
        35.99, "Sim", "Sim", "Sim", "Sim",
        "Não", "Sim"
    };

    struct Lanche xBurguer;
    xBurguer.preco = 12.99;
    strcpy(xBurguer.nome, "X-burguer");
    strcpy(xBurguer.alface, "Sim");
    strcpy(xBurguer.bacon, "Não");
    strcpy(xBurguer.carne, "Sim");
    strcpy(xBurguer.cebola, "Não");
    strcpy(xBurguer.molhos, "Não");
    strcpy(xBurguer.queijo, "Sim");
    strcpy(xBurguer.tipoPao, "Francês");
    strcpy(xBurguer.tomate, "Sim");

    printf("O lanche %s custa R$ %.2f", xBurguer.nome, xBurguer.preco);

    return 0;
}