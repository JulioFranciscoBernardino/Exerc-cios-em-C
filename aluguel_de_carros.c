#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	int dias;
	float km, conta, conta_dia, conta_km;
	char carro;
	setlocale(LC_ALL, "portuguese");
	printf("ALUGUEL DO CARRO");
	printf("\nDigite P para um carro POPULAR e L para um carro de LUXO: ");
	scanf("%c", &carro);
	printf("\nDigite a quantidade de dias que o veículo foi alugado: ");
	scanf("%i", &dias);
	printf("\nDigite quantos Kilometros foram rodados: ");
	scanf("%f", &km);
	if (carro == 'P' || carro == 'p'){
		if (km <= 100){
			conta = (90 * dias) + (km * 0.20);
		} else {
			conta = (90 * dias) + (km * 0.10);
		}
	}
	else if (carro == 'L' || carro == 'l'){
		if (km <= 200){
			conta = (150 * dias) + (km * 0.30);
		} else {
			conta = (150 * dias) + (km * 0.25);
		}
	}
	else{
		printf("\n\nOs dados fornecidos são INVALIDOS");
	}
	printf("\n\nO valor a ser pagor pelo aluguel e Kilometragem do veículo é %.2f", conta);
}

