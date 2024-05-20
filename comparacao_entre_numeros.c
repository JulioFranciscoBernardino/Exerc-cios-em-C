#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	int num1, num2;
	setlocale(LC_ALL, "portuguese");
	printf("COMPARAÇÃO ENTRE DOIS NÚMEROS");
	printf("\nDigite o 1° número INTEIRO POSITIVO: ");
	scanf("%d", &num1);
	printf("\nDigite o 2° número INTEIRO POSITIVO: ");
	scanf("%d", &num2);
	if (num1 > num2){
		printf("\nO primeiro é maior que o segundo número");
	}
	else if (num2 > num1){
		printf("\nO segundo é maior que o primeiro número");
	}
	else{
		printf("\nOs números são iguais");
	}

	
}
