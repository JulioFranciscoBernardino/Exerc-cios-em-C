#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	float peso, altura, idade, kcal;
	char nome[20];
	setlocale(LC_ALL, "Portuguese");
	printf("CALCULO DE KCAL");
	printf("\nInforme o nome da pessoa: ");
	gets(nome);
	printf("\nInforme o peso do Sr.(a) %s : ", nome);
	scanf("%f", &peso);
	printf("\nInforme a altura do Sr.(a) %s : ", nome);
	scanf("%f", &altura);
	printf("\nInforme a idade do Sr(a) %s : ", nome);
	scanf("%f", &idade);
	kcal = 66.4730 + (13.7516 * peso) + (5.0033 * altura) - (6.7550 * idade);
	printf("\n\nAs calorias nescessesária do Sr(a) %s é de %.2f", nome, kcal);
	
}

