#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float salario;
	char nome [60]; 
	char mes [60];
	
	printf("Leitura de nome e salário dos funcionários");
	printf("\nDigte o nome completo do fucionário: ");
    scanf("%s", &nome);
	printf("Digite o salário do funcionário: ");
	scanf("%f", &salario);
	printf("Digite o mês referente ao salário: ");
	scanf("%s", &mes);
	
	printf("\n\nO funcionário %s tem um salário de %.2f do mês de %s!", nome, salario, mes);
}
