#include <stdio.h>
#include <locale.h>

struct Livro {
    char titulo[50];
    char autor[25];
    int numeroPaginas;
};

void imprimirLivro(struct Livro l)
{
    printf("\nImprimindo Livro 😁\n");
    printf("\nLivro %s\n", l.titulo);
    printf("\nAutor %s\n", l.autor);
    printf("\nNúmero páginas %i\n", l.numeroPaginas);
}

int main()
{
    setlocale(LC_ALL, NULL);

    struct Livro engenhariaSoftware = {
        "Engenharia de Software",
        "SommerVille",
        498
    };
    imprimirLivro(engenhariaSoftware);

    return 0;
}