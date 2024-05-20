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
		printf("Digite o salário do funcionário: ");
		scanf("%f", &salario);
		printf("Digite o sexo do funcionário(M/F): ");
		scanf(" %c", &sexo);
		if (sexo == 'M' || sexo == 'm'){
			Ho = Ho + salario;
		} else if (sexo == 'F' || sexo == 'f'){
			Mu = Mu + salario;
		}
		printf("Deseja continuar(S/N): ");
		scanf(" %c", &sim_nao);
	}
	
	printf("Total de salário pago a homens é %.2f\n", Ho);
	printf("Total de salário pago a mulheres é %.2f\n", Mu);	
	
		
	
	
	
	
	
	return 0;
}
