#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "portuguese");
	int contador = 0;
	while (contador <= 18){
		printf("%d\n", contador);
		contador = contador + 3;
	}
	printf("\nFIM!!");
}
