#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

main ()
{
	float largura, comprimento, area;
	setlocale(LC_ALL, "portuguese");
	printf("�REA DO TERRENO E SUA POPULARIDADE");
	printf("\nDigite a LARGURA do terreno em M�: ");
	scanf("%f", &largura);
	printf("\nDigite o COMPRIMENTO do terro em M�: ");
	scanf("%f", &comprimento);
	area = largura * comprimento;
	printf("\nA �rea do terreno � %.2fM�.", area);
	if (area <= 100){
		printf("\nTERRENO POPULAR");
	}
	else if(area >= 100 && area <= 500){
		printf("\nTERRENO MASTER");
	}
	else{
		printf("\nTERRENO VIP");
	}
		
	
	
}
