#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "portuguese");
	int contador = 6;
	while (contador <= 11){
		printf("\n%d", contador);
		contador++;
	} 
	printf("\nFIM!!!");
}
