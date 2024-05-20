#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // Adicione esta linha para usar a função strcmp
//função strcmp tem a função de compara o conteudo da string e dizer se o que foi amarzenado está correto
//por exemplo: sexo == 'm' é a mesma coisa que strcmp(sexo, "masculino") == 0. O diferente é que no strcmp usamos um CONJUNTO de CARACTERE
//Ou seja, um nome por exemplo
int main()
{
    char sexo[50];
    float salario, sal_rea;
    int anos;
    setlocale(LC_ALL, "portuguese");
    printf("REAJUSTE DE SALÁRIO\n");
    printf("Digite o sexo do funcionário: ");
    scanf("%s", sexo);
    printf("Digite o salário do funcionário em R$: ");
    scanf("%f", &salario);
    printf("Digite quantos anos o funcionário tem de contribuição na empresa: ");
    scanf("%d", &anos);

    if (strcmp(sexo, "feminino") == 0 || strcmp(sexo, "FEMININO") == 0 || strcmp(sexo, "Feminino") == 0)
    {
        if (anos < 15)
        {
            sal_rea = salario + (salario * 0.05);
        }
        else if (anos >= 15 && anos <= 20)
        {
            sal_rea = salario + (salario * 0.12);
        }
        else
        {
            sal_rea = salario + (salario * 0.23);
        }
    }
    else if (strcmp(sexo, "masculino") == 0 || strcmp(sexo, "MASCULINO") == 0 || strcmp(sexo, "Masculino") == 0)
    {
        if (anos < 20)
        {
            sal_rea = salario + (salario * 0.03);
        }
        else if (anos >= 20 && anos <= 30)
        {
            sal_rea = salario + (salario * 0.13);
        }
        else
        {
            sal_rea = salario + (salario * 0.25);
        }
    }

    printf("O salário reajustado é: R$%.2f\n", sal_rea);
    return 0;
}
//Uma string é um agrupamento de caracteres, como letras, números e símbolos.
//Em C, as strings são formadas e manipuladas com o emprego de várias estruturas, tais como arrays, funções e ponteiros.
//Arrays são estruturas de dados que consistem em itens de dados do mesmo tipo. Uma das principais características dos arrays é possuir tamanho fixo, ou seja, 
//são declarados com a capacidade de armazenar uma certa quantidade de dados e essa quantidade permanece inalterada durante a execução do programa. 
//Portanto um array é similar a uma variável comum, porém com a capacidade de armazenar mais de um dado em sua estrutura interna simultaneamente.

