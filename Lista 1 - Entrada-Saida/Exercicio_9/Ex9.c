/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 1 - Exerc�cio 9
*/

// C�lculo rendimento com juros simples

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    // Ativa��o da biblioteca para utilizar a linguagem portuguesa no programa.

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

        float j, c, i, m;
        int t;

    // Entrada de dados

        printf("Digite o valor do capital a ser investido: R$ ");
        scanf("%f", &c);

        printf("\nDigite o tempo em meses em que o dinheiro render� (Ex 5 para 5 meses): ");
        scanf("%d", &t);

        printf("\nDigite a taxa de juros mensal em porcento que ser� aplicada ao m�s (Ex: 3 para 3%%): ");
        scanf("%f", &i);

    // C�lculos

        j = (c * (i / 100) * t);
        m = c + j;

    //Exibi��o do c�lculo efetuado

        printf("\nInformamos que o dinheiro investido foi de R$ %.2f", c);

        if (t==1){

            printf("\n\nIsso rendeu R$ %.2f no tempo total de %d m�s\n", j, t);
        } else {

            printf("\n\nIsso rendeu R$ %.2f no tempo total de %d meses\n", j, t);
        }

        printf("\nPortanto o montante final � R$ %.2f + R$ %.2f = R$ %.2f\n", c, j, m);

  return 0;
}
