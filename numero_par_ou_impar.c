#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	int n;
	setlocale(LC_ALL, "portuguese");
	printf("N�mero IMPAR ou PAR");
	printf("\nDigite um numero qualquer INTEIRO POSITIVO: ");
	scanf("%i", &n);
	if (n % 2 == 0){
		printf("\nO n�mero digitado � PAR");
	}
	else{
		printf("\nO n�mero digitado � IMPAR");
	}
	
}
