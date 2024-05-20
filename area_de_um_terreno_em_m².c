#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

main ()
{
	float largura, comprimento, area;
	setlocale(LC_ALL, "portuguese");
	printf("ÁREA DO TERRENO E SUA POPULARIDADE");
	printf("\nDigite a LARGURA do terreno em M²: ");
	scanf("%f", &largura);
	printf("\nDigite o COMPRIMENTO do terro em M²: ");
	scanf("%f", &comprimento);
	area = largura * comprimento;
	printf("\nA área do terreno é %.2fM².", area);
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
