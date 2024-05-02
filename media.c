#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    float numero1, numero2, media;

    printf("Calcule a media de dois numeros");
    printf("\nDigite o valor do 1° numero:");
    scanf("%f", &numero1);
    printf("\nDigite o valor do 2° numero:");
    scanf("%f", &numero2);

    media = (numero1 + numero2)/2;

    printf("\nO valor da media da soma é de:%f", media);




}
