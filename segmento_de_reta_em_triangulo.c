#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	float a, b, c;
	setlocale(LC_ALL, "portuguese");
	printf("SEGMENTO DE RETAS EM TRI�NGULO");
	printf("\nDigite o 1� valor do segmento: ");
	scanf("%f", &a);
	printf("\nDigite o 2� valor do segmento: ");
	scanf("%f", &b);
	printf("\nDigite o 3� valor do segmento: ");
	scanf("%f", &c);
	if (a < b + c && b < a + c && c < a + b){
		printf("\nOs tr�s segmentos formam um tri�ngulo");
	}
	else{
		printf("\nO tr�s segmento N�O formam um tri�ngulo");
	}
} 
