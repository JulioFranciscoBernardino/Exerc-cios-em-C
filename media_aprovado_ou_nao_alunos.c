#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main ()
{
	char nome_aluno[100];
	float prova_1, prova_2, media;
	setlocale(LC_ALL, "portuguese");
	printf("APROVA��O OU REPROVA��O");
	printf("\nDigite o nome do aluno(a): ");
	gets(nome_aluno);
	printf("\nDigite a nota da 1� prova: ");
	scanf("%f", &prova_1);
	printf("\nDigite a nota da 2� prova: ");
	scanf("%f", &prova_2);
	media = (prova_1 + prova_2) / 2;
	if (media >= 7.0){
		printf("\n\nO aluno %s est� PROVADO!!", nome_aluno);
	}
	else if (media >= 5.0 && media <= 6.9){
		printf("\n\nO aluno %s est� de RECUPERA��O", nome_aluno);
	}
	else{
		printf("\n\nO aluno %s est� REPROVADO!!");
	}
	
}
