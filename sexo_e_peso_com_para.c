
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "portuguese");
	char sexo;
	float peso = 0, pesomaior = 0, mulher = 0, homen = 0, media, pesom;
	int cont, ate;
	printf("Deseja repetir quantas vezes: ");
	scanf("%d", &ate);
	for (cont = 1; cont <= ate; cont++){
		printf("Digite M para o sexo MASCULINO ou F para o FEMININO: ");
		scanf(" %c", &sexo);
		printf("Digite o peso do sujeito: ");
		scanf("%f", &peso);
		if (sexo == 'F' || sexo == 'f'){
			mulher = mulher + 1;	
			pesom += peso;
		} else if (sexo == 'M' || sexo == 'm'){
			if (peso >= 100){
				homen += 1;
				if (peso >= pesomaior){
					pesomaior = peso;
				}
			
			}

		}
	}
	printf("Mulheres cadastradas: %.0f\n", mulher);
	printf("Homens que pesam mais de 100kg: %.0f\n", homen);
	printf("Média de peso das mulheres: %.2f\n", pesom / mulher);
	printf("Maio peso dos homens: %.2f\n", pesomaior);
	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    char sexo;
    float peso, pesomaior = 0, mulher = 0, homen = 0, pesom = 0;
    int cont, ate;

    printf("Deseja repetir quantas vezes: ");
    scanf("%d", &ate);

    for (cont = 1; cont <= ate; cont++) {
        printf("Digite M para o sexo MASCULINO ou F para o FEMININO: ");
        scanf(" %c", &sexo);
        printf("Digite o peso do sujeito: ");
        scanf("%f", &peso);

        if (sexo == 'F' || sexo == 'f') {
            mulher += 1;
            pesom += peso;
        } else if (sexo == 'M' || sexo == 'm') {
            if (peso >= 100) {
                homen += 1;
                if (peso >= pesomaior) {
                    pesomaior = peso;
                }
            }
        }
    }

    printf("Mulheres cadastradas: %.0f\n", mulher);
    printf("Homens que pesam mais de 100kg: %.0f\n", homen);

    if (mulher > 0) {
        printf("Média de peso das mulheres: %.2f\n", pesom / mulher);
    } else {
        printf("Nenhuma mulher cadastrada.\n");
    }

    printf("Maior peso dos homens: %.2f\n", pesomaior);

    return 0;
}
*/


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

