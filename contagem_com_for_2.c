#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "portuguese");
	int num, cont;
	printf("Digite um número inteiro posistivo: ");
	scanf("%d", &num);
	for (cont = 0; cont <= num; cont++){
		printf("%d\n", cont);
	}
	printf("FIM!!");
}
