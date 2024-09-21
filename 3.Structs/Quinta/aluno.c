#include <stdio.h>
#include <locale.h>

struct Aluno {
    char nome[20];
    char matricula[20];
    float nota1;
    float nota2;
    float media;
};

float calcularMedia(struct Aluno a)
{
    float media = (a.nota1 + a.nota2) / 2;
    return media;
}

int main()
{
    setlocale(LC_ALL, NULL);

    struct Aluno alunos[3] = {
        {"Aluno 01", "asd90", 5.6, 3.4, 0},
        {"Aluno 02", "opp01", 7.6, 6.4, 0},
        {"Aluno 03", "tre34", 2.6, 1.4, 0}
    };
    
    for (int i=0; i < 3; i++)
    {
        float m = calcularMedia(alunos[i]);
        printf("A media do aluno é %.2f\n", m);
    }
 
    return 0;
}