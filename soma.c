#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, soma;

    Printf("Soma de dois numeros:");
    printf("\nDigite o primeiro numero:");
    scanf("%d", &numero1);
    printf("\nDigite o segundo numero:");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    printf("\nSoma de dois é: %d", soma);

}