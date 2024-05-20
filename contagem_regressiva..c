#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "portuguese");
	int contador = 100;
	while (contador >= 0){
		printf("%d\n", contador);
		contador = contador - 5;
	}
	printf("FIM!!\n");
}
