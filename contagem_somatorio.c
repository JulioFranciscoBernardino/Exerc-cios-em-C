#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, somatorio = 0;
	while(1){
		printf("Digite 1111 caso deseja encerrar o programa: ");
		scanf("%d", &num);
		if (num == 1111){
			printf("Programa encerrado!!\n");
			break;
		}
		somatorio = somatorio + num;
	}
	 printf("O somátorio dos números é %d\n", somatorio);
	 return 0;
}
