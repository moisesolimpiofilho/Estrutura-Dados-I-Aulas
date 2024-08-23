#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, NULL);

    int qtdeVeiculos = 0;
    int qtdeTotalKms = 0;
    float valorTotalAbastecimentos = 0.0;    

    printf("Quantos veículos deseja lançar no sistema ?");
    scanf("%i", &qtdeVeiculos);

    for (int i=0; i < qtdeVeiculos; i++) {
        
        int qtdeKms = 0;
        printf("Quantos kilometros o %i veículo percorreu? ", i + 1);
        scanf("%i", &qtdeKms);
        qtdeTotalKms += qtdeKms;
        
        float valorTotalAbastecimento = 0.0;
        printf("Qual valor total de abastecimento do %i veículo? ", i + 1);
        scanf("%f", &valorTotalAbastecimento);
        valorTotalAbastecimentos += valorTotalAbastecimento;
    }

    printf("\n=== Relatório de abastecimentos ===");
    printf("\nTotal de kilometros percorridos %i", qtdeTotalKms);
    printf("\nValor total de abastecimento R$ %.2f", valorTotalAbastecimentos);

    return 0;
}
