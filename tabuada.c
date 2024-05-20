#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL, "portuguese");
	int contagem = 1, ate, num;
	printf("Digite até quando deseja multiplicar: ");
	scanf("%d", &ate);
	printf("Digite de qual tabuada deseja multiplicar: ");
	scanf("%d", &num);
	while (contagem <= ate){
		printf("%d x %d = %d\n", num, contagem, contagem * num);
		contagem++;
	}
	return 0;
}
