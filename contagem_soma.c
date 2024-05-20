#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "portuguese");
	int contagem = 6, soma = 0;
	while (contagem <= 100){
		printf("%d\n", contagem);
		contagem = contagem + 2;
		soma = soma + contagem;
	}
	printf("A soma dos numero é %d\n", soma);
}
