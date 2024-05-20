#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    char sexo;
    int idade, contagem = 1, homens = 0, mulheres, mulheres20, soma, somah, media, mediah;
    while (contagem <= 5){
    	printf("Digite o sexo(M/F): ");
    	scanf(" %c", &sexo);
    	printf("Digite a idade:");
    	scanf("%d", &idade);
    	contagem++;
    	if (sexo == 'M' || sexo == 'm'){
    		homens++;
    		somah = somah + idade;
		} else if (sexo == 'F' || sexo == 'f'){
			if (idade >= 20){
				mulheres20 = mulheres20 + 1;
			}
			mulheres++;
		} else {}
		soma = soma + idade;	
	}
	media = soma / 5;
	mediah = somah / homens;
	printf("Homens cadastrados: %d\n", homens);
	printf("Mulheres cadastradas: %d\n", mulheres);
	printf("Média de idade geral do grupo: %d\n", media);
	printf("Média de idade dos Homens: %d\n", mediah);
	printf("Mulheres com mais de 20 anos: %d\n", mulheres20);
}
