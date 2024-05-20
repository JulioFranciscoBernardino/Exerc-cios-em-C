#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "portuguese");
	int cont, num, ate;
	printf("Digite qual tabuada deseja multiplicar: ");
	scanf("%d", &num);
	printf("Digite até quando deseja multiplicar: ");
	scanf("%d", &ate);
	for (cont = 1; cont <= ate; cont++){
		printf("%d x %d = %d\n", num, cont, num * cont);
	}
	
	return 0;
}
