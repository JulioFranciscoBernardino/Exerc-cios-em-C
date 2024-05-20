#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "portuguese");
	int ano, bissexto;
	printf("ANO BISSEXTO");
	printf("\nDigite o ano que estamos: ");
	scanf("%d", &ano);
	if (ano % 4 == 0){
		printf("\nO ano é BISSEXTO");
	}
	else{
		printf("\nO ano não é BISSEXTO");
	}
}

