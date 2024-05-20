#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "portuguese");
	char nome[100];
	float sal, salnovo;
	int anos;
	printf("AUMENTO DE SALÁRIO");
	printf("\nDigite o nome do funcionário completo: ");
	gets(nome);
	printf("\nDigite o salário do funcionário %s na empresa em R$", nome);
	scanf("%f", &sal);
	printf("\nDigite quantos anos o funcionário %s está na empresa: ", nome);
	scanf("%d", &anos);
	
	if (anos < 3) {
		salnovo = sal + (sal * 0.03);
	}
	else if(anos >= 3 && anos <= 10) {
		salnovo = sal + (sal * 0.125);
	}
	else {
		salnovo = sal + (sal * 0.20);
	}
		
	printf("\n\nO salário do funcionário %s será de %.2f", nome, salnovo);
	
}
