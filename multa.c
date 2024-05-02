#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float multa, velocidade;
    
    printf("Limite de velocidade");
    printf("\nDigite a velocidade do veiculo em km/h: ");
    scanf("%f", &velocidade);
    
    if(velocidade > 80)
	{
		multa = (velocidade - 80) * 5; 
		printf("O veiculo ultrapassou o limite de velocidade e foi multado em R$%.2f", multa);
	}
	else{
		printf("O veiculo não ultrapassou o limite de velocidade, por isso, não sera multado");
	}
}
