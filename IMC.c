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
	printf("\nDigite o nome do paci�nte: ");
	gets(paciente);
	printf("\nDigite o peso do paci�nte %s: ", paciente);
	scanf("%f", &peso);
	printf("\nDigite a altura do paci�nte %s: ", paciente);
	scanf("%f", &altura);
	imc = peso / pow(altura, 2);
	if (imc < 18.5){
		printf("\n\nO paci�nte %s est� Abaixo do Peso Ideal!!", paciente);
	}else if (imc >= 18.5 && imc <= 25){
		printf("\n\nO paci�nte %s est� no Peso Ideal!!", paciente);
	}else if (imc >= 25 && imc <= 30){
		printf("\n\nO paci�nte %s est� Sobrepeso!!", paciente);
	}else if (imc >= 30 && imc <= 40){
		printf("\n\nO paci�nte %s est� na Obesidade!!", paciente);
	}else{
		printf("\n\nO paci�nte %s est� na Obesidade M�rbida!!", paciente);
	}
}

