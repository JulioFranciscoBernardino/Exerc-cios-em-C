#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Portuguese");
	int ano, ano_atual, idade;
	printf("ALISTAMENTO MILITAR");
	printf("\nDigite o ano que estamos: ");
	scanf("%d", &ano_atual);
	printf("\nDigite o ano em que nasceu: ");
	scanf("%d", &ano);
	idade = ano_atual - ano;
	if (ano_atual - ano >= 18){
		printf("\nO sujeito está apito para se alistar já que possui %d anos", idade);
	}
	else{
		printf("\nO sujeito NÃO está apito para se alistar já que possui %d anos", idade);
	}
}
