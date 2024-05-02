#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() 
{
    setlocale(LC_ALL, "Potuguese");
	char nome[50];
    char sexo;
    float valor_compras, preco_com_desconto;

    // Solicita os dados do cliente
    printf("Digite o nome do cliente: ");
    scanf("%s", nome);
    printf("\nDigite o sexo do cliente (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);
    printf("\nDigite o valor das compras: ");
    scanf("%f", &valor_compras);

    // Calcula o preço com desconto
    if (sexo == 'M' || sexo == 'm') {
        preco_com_desconto = valor_compras * (1 - 0.05);
    } else if (sexo == 'F' || sexo == 'f') {
        preco_com_desconto = valor_compras * (1 - 0.13);
    } else {
        printf("Sexo não reconhecido.\n");
        return 1;
    }

    // Exibe o resultado
    printf("Cliente: %s\n", nome);
    printf("Valor original das compras: %.2f\n", valor_compras);
    printf("Preço com desconto: %.2f\n", preco_com_desconto);

    return 0;
}

