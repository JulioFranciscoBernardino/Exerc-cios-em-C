#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int contagem = 1;
    float preco, maior, menor;
    printf("Digite o valor do produto em R$: ");
    scanf("%f", &preco);
    maior = menor = preco;
    while (contagem < 8) {
        printf("Digite o valor do produto em R$: ");
        scanf("%f", &preco);
        if (preco > maior) {
            maior = preco;
        }
        if (preco < menor) {
            menor = preco;
        }
        contagem++;
    }
    printf("O maior preço foi R$ %.2f e o menor R$ %.2f\n", maior, menor);
    return 0;
}

