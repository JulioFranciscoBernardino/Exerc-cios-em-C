#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	float val_casa, val_sal, anos, meses, prestacao;
	setlocale(LC_ALL, "portuguese");
	printf("EMPR�STIMO BANC�RIO");
	printf("\nDigite o valor da residencia que deseja comprar em R$");
	scanf("%f", &val_casa);
	printf("\nDigite o seu sal�rio em R$");
	scanf("%f", &val_sal);
	printf("\nDigite com quantos anos quer pagar as presta��es: ");
	scanf("%d", &anos);
	meses = anos * 12;//para descobrir a preta��o mensal (pretacao) � nescess�rio tranformar os anos(anos) de quanto quer pagar as presta��es em meses(meses) 
	//fazendo vezes a quantidade de anos que o usuario digitou pela quantidade de meses que tem em um ano, ou seja, 12, j� que um ano s�o 12 meses, 
	//feito teremo a quantidade de meses (5 anos * 12 meses = 36 meses)
	prestacao = val_casa / meses;//agora pra descobrir o valor das preta��es basta dividir o valor da casa pela quantidade de meses que fizemos da conta anterio.
	if (val_sal < prestacao * 0.30){
		printf("\n\nAPROVADO");
	}
	else {
		printf("\n\nNEGADO");
		printf("\n\nPresta��o M�xima: R$ %.2f",0.30 * val_sal);
	}
	
	
	

	
	
	
}
