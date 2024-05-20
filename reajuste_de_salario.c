#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // Adicione esta linha para usar a fun��o strcmp
//fun��o strcmp tem a fun��o de compara o conteudo da string e dizer se o que foi amarzenado est� correto
//por exemplo: sexo == 'm' � a mesma coisa que strcmp(sexo, "masculino") == 0. O diferente � que no strcmp usamos um CONJUNTO de CARACTERE
//Ou seja, um nome por exemplo
int main()
{
    char sexo[50];
    float salario, sal_rea;
    int anos;
    setlocale(LC_ALL, "portuguese");
    printf("REAJUSTE DE SAL�RIO\n");
    printf("Digite o sexo do funcion�rio: ");
    scanf("%s", sexo);
    printf("Digite o sal�rio do funcion�rio em R$: ");
    scanf("%f", &salario);
    printf("Digite quantos anos o funcion�rio tem de contribui��o na empresa: ");
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

    printf("O sal�rio reajustado �: R$%.2f\n", sal_rea);
    return 0;
}
//Uma string � um agrupamento de caracteres, como letras, n�meros e s�mbolos.
//Em C, as strings s�o formadas e manipuladas com o emprego de v�rias estruturas, tais como arrays, fun��es e ponteiros.
//Arrays s�o estruturas de dados que consistem em itens de dados do mesmo tipo. Uma das principais caracter�sticas dos arrays � possuir tamanho fixo, ou seja, 
//s�o declarados com a capacidade de armazenar uma certa quantidade de dados e essa quantidade permanece inalterada durante a execu��o do programa. 
//Portanto um array � similar a uma vari�vel comum, por�m com a capacidade de armazenar mais de um dado em sua estrutura interna simultaneamente.

