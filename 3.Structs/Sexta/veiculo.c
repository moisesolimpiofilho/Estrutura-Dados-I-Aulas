#include <stdio.h>
#include <locale.h>

typedef enum {false, true} bool;

struct Adicional {
    char nome[20];
};

struct Veiculo {
    char placa[10];
    float preco;
    char marca[10];
    char modelo[10];
    int ano;
    bool novo;   
    struct Adicional adicionais[5]; 
};

void imprimir(struct Veiculo v)
{
    printf("\nSegue os dados do veículo");
    printf("\nModelo: %s", v.modelo);
    printf("\nMarca: %s", v.marca);
    printf("\nAno: %i", v.ano);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("\nBem vindo a nossa loja de veículos");

    struct Veiculo carro;
    struct Adicional adicionais[5];

    printf("\nDigite o modelo do veículo: ");
    scanf("%s", carro.modelo);

    printf("\nQual a placa do veículo: ");
    scanf("%s", carro.placa);

    printf("\nQual a marca do veículo: ");
    scanf("%s", carro.marca);

    printf("\nQual o valor do veículo: ");
    scanf("%f", &carro.preco);

    printf("\nQual o ano do veículo: ");
    scanf("%i", &carro.ano);

    printf("\nO veículo é 0KM? (1->Sim, 2-> Não)");
    
    int veiculoNovo = 0;
    scanf("%i", &veiculoNovo);

    if (veiculoNovo == 1) carro.novo = true;
    else carro.novo = false;

    printf("\nDigite os adicionais do veículo");

    for (int i=0; i < 5; i++) {
        printf("\nNome do %i adicional: ", i+1);
        scanf("%s", adicionais[i].nome);
    }

    imprimir(carro);

    return 0;
}