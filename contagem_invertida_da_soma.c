#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "portuguese");
	int contagem = 500, soma = 0;
	while (contagem >= 0){
		printf("%d\n", contagem);
		soma = soma + contagem;
		contagem = contagem - 50;
	}
	printf("A soma dos numero é %d\n", soma);
}
