#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	int num1, num2;
	setlocale(LC_ALL, "portuguese");
	printf("COMPARA��O ENTRE DOIS N�MEROS");
	printf("\nDigite o 1� n�mero INTEIRO POSITIVO: ");
	scanf("%d", &num1);
	printf("\nDigite o 2� n�mero INTEIRO POSITIVO: ");
	scanf("%d", &num2);
	if (num1 > num2){
		printf("\nO primeiro � maior que o segundo n�mero");
	}
	else if (num2 > num1){
		printf("\nO segundo � maior que o primeiro n�mero");
	}
	else{
		printf("\nOs n�meros s�o iguais");
	}

	
}
