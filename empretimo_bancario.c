#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	float val_casa, val_sal, anos, meses, prestacao;
	setlocale(LC_ALL, "portuguese");
	printf("EMPRÉSTIMO BANCÁRIO");
	printf("\nDigite o valor da residencia que deseja comprar em R$");
	scanf("%f", &val_casa);
	printf("\nDigite o seu salário em R$");
	scanf("%f", &val_sal);
	printf("\nDigite com quantos anos quer pagar as prestações: ");
	scanf("%d", &anos);
	meses = anos * 12;//para descobrir a pretação mensal (pretacao) é nescessário tranformar os anos(anos) de quanto quer pagar as prestações em meses(meses) 
	//fazendo vezes a quantidade de anos que o usuario digitou pela quantidade de meses que tem em um ano, ou seja, 12, já que um ano são 12 meses, 
	//feito teremo a quantidade de meses (5 anos * 12 meses = 36 meses)
	prestacao = val_casa / meses;//agora pra descobrir o valor das pretações basta dividir o valor da casa pela quantidade de meses que fizemos da conta anterio.
	if (val_sal < prestacao * 0.30){
		printf("\n\nAPROVADO");
	}
	else {
		printf("\n\nNEGADO");
		printf("\n\nPrestação Máxima: R$ %.2f",0.30 * val_sal);
	}
	
	
	

	
	
	
}
