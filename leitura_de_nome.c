#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome [61]; //[61] � a quantidade de charactere que � permitida a variavel receber (nome) tipo char (charactere)
	
	printf("Leitura de nome");
	printf("\nDigite o seu nome: ");
	scanf("%s", &nome);// %s equivale a mesma coisa que %i ou %d para uma variavel tipo interira, nesse caso, %s � para variavel de charactere
	printf("\n\nJoia %s, � um prazer de te conhecer!", nome);
}
