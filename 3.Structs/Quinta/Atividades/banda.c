#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define QTDE_BANDAS 3

typedef enum
{
    false,
    true
} bool;

struct Banda
{
    char nome[30];
    char tipoMusica[30];
    int numeroIntegrantes;
    int posicaoRanking;
    bool favorita;
};

struct Banda listaBandas[QTDE_BANDAS];
char tipoMusica[30];
char nomeBanda[30];

void preencherBandas()
{
    for (int i = 0; i < QTDE_BANDAS; i++)
    {
        if (i == 0)
        {
            printf("\nQual nome da banda? ");
        }
        else
        {
            printf("\nLegal, vamos para próxima banda, qual o nome ? ");
        }

        scanf("%s", listaBandas[i].nome);

        printf("Legal para banda %s, qual o tipo de música que ela toca? ", listaBandas[i].nome);
        scanf("%s", listaBandas[i].tipoMusica);

        printf("Agora continue o cadastro colocando a quantidade de integrantes da banda %s: ", listaBandas[i].nome);
        scanf("%i", &listaBandas[i].numeroIntegrantes);

        printf("Pensando em um ranking de 1 até %i, qual posição ela ocupa? ", QTDE_BANDAS);
        scanf("%i", &listaBandas[i].posicaoRanking);

        int bandaFavorita = 0;
        printf("Para finalizar a banda %s é sua favorita? (1-Sim, 2-Não) ", listaBandas[i].nome);
        scanf("%i", &bandaFavorita);

        if (bandaFavorita == 1)
            listaBandas[i].favorita = true;
        else
            listaBandas[i].favorita = false;
    }
}

void imprimirBanda(struct Banda banda)
{
    printf("\n==========Segue as informações da banda========== \n");
    printf("Nome %s\n", banda.nome);
    printf("Tipo música %s\n", banda.tipoMusica);
    printf("Qtde integrantes %i \n", banda.numeroIntegrantes);
    printf("Posição ranking %i \n", banda.posicaoRanking);
    printf("A banda %s é favorita? %s \n", banda.nome, banda.favorita ? "sim" : "não");
}

void buscarBandaPeloRanking()
{
    int posicaoRankingBanda = 0;
    printf("Qual a posição no ranking, escolha entre 1 até %i: ", QTDE_BANDAS);
    scanf("%i", &posicaoRankingBanda);

    for (int i = 0; i < QTDE_BANDAS; i++)
    {
        struct Banda banda = listaBandas[i];

        if (banda.posicaoRanking == posicaoRankingBanda)
        {
            imprimirBanda(banda);
            break;
        }
    }
}

void buscarBandaPeloTipoDeMusica()
{
    printf("Qual o tipo da música? ");
    scanf("%s", tipoMusica);

    for (int i = 0; i < QTDE_BANDAS; i++)
    {
        struct Banda banda = listaBandas[i];

        if (strcmp(banda.tipoMusica, tipoMusica) == 0)
        {
            imprimirBanda(banda);
        }
    }
}

void buscarBandaPeloNome()
{
    printf("Qual o nome da banda? ");
    scanf("%s", nomeBanda);

    for (int i = 0; i < QTDE_BANDAS; i++)
    {
        struct Banda banda = listaBandas[i];

        if (strcmp(banda.nome, nomeBanda) == 0)
        {
            if (banda.favorita)
            {
                printf("\nA banda %s é favorita 😀", banda.nome);
            }
            else
            {
                printf("\nA banda %s não é favorita 🙁", banda.nome);
            }
            break;
        }
    }
}

int main()
{
    setlocale(LC_ALL, NULL);
    system("cls");

    int continuar = 1;

    do
    {
        int opcao = 0;

        printf("Olá, vamos cadastrar suas 3 bandas favoritas 😁 \n");

        printf("Escolha uma das opções do menu abaixo\n");
        printf("1-Cadastrar\n2-Procurar banda pelo Ranking\n3-Procurar banda pelo tipo música\n4-Verificar se a banda é favorita\n");
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 1:
            preencherBandas();
            break;
        case 2:
            buscarBandaPeloRanking();
            break;
        case 3:
            buscarBandaPeloTipoDeMusica();
            break;
        case 4:
            buscarBandaPeloNome();
            break;
        default:
            break;
        }

        printf("\nDeseja continuar? (1-Sim, 2-Não): ");
        scanf("%i", &continuar);
        system("cls");

    } while (continuar == 1);

    return 0;
}