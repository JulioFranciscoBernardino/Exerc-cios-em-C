#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "portuguese");
	int cont; 
	for (cont = 0; cont <= 40; cont = cont + 5){
		printf("%d\n", cont);
	}
}
