#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int contagem = 1;
    float peso = 0, altura = 0, soma = 0, media = 0, peso90 = 0, peso_altura = 0, altura_peso = 0;
    while (contagem <= 7){
    	printf("Digite a altura: ");
    	scanf("%f", &altura);
    	printf("Digite o peso: ");
    	scanf("%f", &peso);
    	contagem++;
    	soma = altura + soma;
    	if (peso >= 90){
    		peso90++;
    		
		}
		
		if (peso <= 50 && altura <= 1.60){
			peso_altura++;
		}
		
		if (altura >= 1.90 && peso >= 100){
			altura_peso;
		}
	}
	media = soma / 7;
	printf("Média da altura do grupo: %.2f\n", media);
	printf("Pessoas que pesam mais de 90kg: %.0f\n", peso90);
	printf("Pessoas que pesam menos de 50Kg e tem menos de 1,60m: %.0f\n", peso_altura);
	printf("Pessoaas que medem mais de 1,90m e pesam mais de 100kg: %.0f\n", altura_peso);
}
