#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	int ini, fim, inc;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o valor da contagem inicial: ");
	scanf("%d", &ini);
	printf("Digite o valor da contagem final: ");
	scanf("%d", &fim);
	printf("Digite o valor da contagem incrementando quantos valores devem ser pulados: ");
	scanf("%d", &inc);
	while (ini <= fim){
		printf("%d\n", ini);
		ini = ini + inc;
	}
	printf("FIM!!\n");
}
