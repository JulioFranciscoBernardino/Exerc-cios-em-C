#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char aluno[50];
    int nota1, nota2, nota3, nota4, media;

    printf("Desempenho escolar anual!\n");
    printf("\nDigite o nome do estudante: ");
    scanf("%s", &aluno);
    printf("\nDigite o valor da nota do 1° bimestre: ");
    scanf("%d", &nota1);
    printf("\nDigite o valor da nota do 2° bimestre: ");
    scanf("%d", &nota2);
    printf("\nDigite o valor da nota do 3° bimestre: ");
    scanf("%d", &nota3);
    printf("\nDigite o valor da nota do 4° bimestre: ");
    scanf("%d", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 7)
    {
        printf("\nO aluno %s teve um ótimo aproveitamento no ano letivo, parabéns para ele.\n", aluno);
    }
    else
    {
        printf("\nO aluno não teve um bom aproveitamento letivo, precisa melhorar.\n");
    }

    return 0;
}

