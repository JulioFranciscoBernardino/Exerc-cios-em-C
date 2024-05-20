#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "portuguese");
	int contador = 30;
	while (contador >= 1){
		if (contador % 4 == 0){
			printf("[%d]\n", contador);
		} else {
			printf("%d\n", contador);
		}
		contador--;
	}
	printf("FIM!!");
}
