#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void){
	setlocale(LC_ALL, "portuguese");
	float salario, Ho, Mu, total_ho, total_mu;
	char sexo, sim_nao;
	printf("Deseja iniciar o programa?(S/N): ");
	scanf(" %c", &sim_nao);
	while (sim_nao == 'S' || sim_nao == 's'){
		printf("Digite o sal�rio do funcion�rio: ");
		scanf("%f", &salario);
		printf("Digite o sexo do funcion�rio(M/F): ");
		scanf(" %c", &sexo);
		if (sexo == 'M' || sexo == 'm'){
			Ho = Ho + salario;
		} else if (sexo == 'F' || sexo == 'f'){
			Mu = Mu + salario;
		}
		printf("Deseja continuar(S/N): ");
		scanf(" %c", &sim_nao);
	}
	
	printf("Total de sal�rio pago a homens � %.2f\n", Ho);
	printf("Total de sal�rio pago a mulheres � %.2f\n", Mu);	
	
		
	
	
	
	
	
	return 0;
}
