#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "portuguese");
	int desejo, contador = 1;
	printf("Digite até quanto deseja contar: ");
	scanf("%d", &desejo);
	while (contador <= desejo){
		printf("%d\n", contador);
		contador++;
	}
	printf("FIM!!\n");
	return 0;
	
}
