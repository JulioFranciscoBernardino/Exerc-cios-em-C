#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int contagem = 1, num, impar = 0, par = 0;
    while (contagem <= 6){
    	printf("Digite um numero inteiro positivo: ");
    	scanf("%d", &num);
    	contagem++;
    	if (num % 2 == 0){
    		par = par + 1; 
		} else {
			impar = impar + 1;
		}
	}
	printf("H� %d n�meros pares e %d n�meros imapares", par, impar);
}
