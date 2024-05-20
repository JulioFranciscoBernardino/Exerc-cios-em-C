#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
main ()
{
	char paciente[150];
	float altura, peso, imc;
	setlocale(LC_ALL, "portuguese");
	printf("CALCULO DE IMC");
	printf("\nDigite o nome do paciênte: ");
	gets(paciente);
	printf("\nDigite o peso do paciênte %s: ", paciente);
	scanf("%f", &peso);
	printf("\nDigite a altura do paciênte %s: ", paciente);
	scanf("%f", &altura);
	imc = peso / pow(altura, 2);
	if (imc < 18.5){
		printf("\n\nO paciênte %s está Abaixo do Peso Ideal!!", paciente);
	}else if (imc >= 18.5 && imc <= 25){
		printf("\n\nO paciênte %s está no Peso Ideal!!", paciente);
	}else if (imc >= 25 && imc <= 30){
		printf("\n\nO paciênte %s está Sobrepeso!!", paciente);
	}else if (imc >= 30 && imc <= 40){
		printf("\n\nO paciênte %s está na Obesidade!!", paciente);
	}else{
		printf("\n\nO paciênte %s está na Obesidade Mórbida!!", paciente);
	}
}

