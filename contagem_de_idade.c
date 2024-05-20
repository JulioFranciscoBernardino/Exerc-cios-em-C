#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int contagem = 2, idade, soma = 0, media, maior18, menor5, maior_idade;
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    maior_idade = idade;
    while (contagem <= 10){
    	printf("Digite a idade da pessoa: ");
    	scanf("%d", &idade);
    	soma = soma + idade;
    	contagem++;
    	if (idade >= 18){
    		maior18 = maior18 + 1;
		} else if (idade <= 5){
			menor5 = menor5 + 1;
		} else {
		} 
    	
    	if (idade > maior_idade){
    		maior_idade = idade;
		} else {
		}
	}	
	media = soma / 10;
	printf("A media de idade do grupo é %d\n", media);
	printf("Grupo de possas que são maior que 18 anos é %d\n", maior18);
	printf("Grupo de possas que são menor que 5 anos é %d\n", menor5);
	printf("A pessoa com maior idade do grupo é %d", maior_idade);
}
