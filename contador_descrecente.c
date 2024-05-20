#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "portuguese");
	int contador = 10;	
	while (contador >= 3){
		printf("%d\n", contador);
		contador--;
	}
	printf("FIM!!\n");
}
