#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int contagem = 1;
    int soma = 0; 
    int num;

    while (contagem <= 7) {
        printf("Digite um valor inteiro positivo: ");
        scanf("%d", &num);
        soma = soma + num;
        contagem++;
    }

    printf("A soma dos números é %d\n", soma);

    return 0;
}

