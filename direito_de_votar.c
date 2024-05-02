#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int nasc, idade;
    
    printf("Direito de votar!!");
    printf("\nDigite o ano em que nasceu: ");
    scanf("%d", &nasc);
    
    idade = 2024 - nasc;
    
    if (idade <= 14)
    {
        printf("\nA pessoa não tem o direito de votar");
    }
    else if (idade < 18) // Alterado para idade menor que 18
    {
        printf("\nA pessoa tem o direito de votar, mas não é obrigatório");
    }
    if (idade >= 18)
    {
        printf("\nA pessoa tem a obrigação de votar");
    }
    // A condição 'else' vazia foi removida, pois não é mais necessária.
}



