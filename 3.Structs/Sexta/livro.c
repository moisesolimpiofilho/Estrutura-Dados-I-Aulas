#include <stdio.h>
#include <locale.h>

struct Livro {
    char titulo[50];
    char editora[20];
    int qtdeCapitulos;
    int qtdePaginas;
    char autor[50];
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct Livro biblia = {
        "A bíblia sagrada",
        "Os apóstolos",
        1189,
        950,
        "Deus"
    };

    struct Livro pequenoPrincipe = {
        "O pequeno príncipe",
        "Florzinha",
        12,
        250,
        "O príncipe"
    };

    printf("\nO livro %s tem %i capítulos", biblia.titulo, biblia.qtdeCapitulos);
    printf("\n A editora é %s", biblia.editora);

    return 0;
}