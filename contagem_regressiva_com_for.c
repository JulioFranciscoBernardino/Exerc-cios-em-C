#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "portuguese");
	int cont;
	for (cont = 100; cont >= 0; cont = cont - 10){
		printf("%d\n", cont);
	}
}
