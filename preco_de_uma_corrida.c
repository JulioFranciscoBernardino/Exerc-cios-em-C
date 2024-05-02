#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "pt-br");
	
	float preco_da_corrida;
	int distancia_corrida;
	printf("Preço da corrida");
	printf("\nDigite a distancia que foi percorrido na corrida: ");
	scanf("%d" ,&distancia_corrida);
	
	if (distancia_corrida <= 200){
		preco_da_corrida = distancia_corrida  * 0.50;
	}
	else if (distancia_corrida > 200){
		preco_da_corrida = distancia_corrida  * 0.45;
	}
	else{
	}
	
	printf("\n\nO preço da corrida a ser pago é: %.2f", preco_da_corrida);
}
	
