#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float salario;
	char nome [60]; 
	char mes [60];
	
	printf("Leitura de nome e sal�rio dos funcion�rios");
	printf("\nDigte o nome completo do fucion�rio: ");
    scanf("%s", &nome);
	printf("Digite o sal�rio do funcion�rio: ");
	scanf("%f", &salario);
	printf("Digite o m�s referente ao sal�rio: ");
	scanf("%s", &mes);
	
	printf("\n\nO funcion�rio %s tem um sal�rio de %.2f do m�s de %s!", nome, salario, mes);
}
