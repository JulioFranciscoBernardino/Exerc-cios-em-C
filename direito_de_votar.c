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
        printf("\nA pessoa n�o tem o direito de votar");
    }
    else if (idade < 18) // Alterado para idade menor que 18
    {
        printf("\nA pessoa tem o direito de votar, mas n�o � obrigat�rio");
    }
    if (idade >= 18)
    {
        printf("\nA pessoa tem a obriga��o de votar");
    }
    // A condi��o 'else' vazia foi removida, pois n�o � mais necess�ria.
}



