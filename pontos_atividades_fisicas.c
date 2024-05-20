#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "portuguese");
	int pontos;
	float horas, troca;
	printf("PONTOS DE ATIVIDADE FISÍCA");
	printf("\nDigite a quantidade de horas que o sujeito fez no mês: ");
	scanf("%f", &horas);
	if (horas <= 10){
		pontos = horas * 2;
	} else if (horas >= 10 && horas <= 20){
		pontos = horas * 5;
	} else {
		pontos = horas * 10;
	}
	troca = pontos * 0.5;
	printf("\nA quantidade de pontos adquiridos foi de %d e valor que pode ser trocado em R$%.2f", pontos, troca);
}

