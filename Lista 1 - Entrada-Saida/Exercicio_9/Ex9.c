/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista 1 - Exercício 9
*/

// Cálculo rendimento com juros simples

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    // Ativação da biblioteca para utilizar a linguagem portuguesa no programa.

    setlocale (LC_ALL, "Portuguese");

    // Declaração de variáveis

        float j, c, i, m;
        int t;

    // Entrada de dados

        printf("Digite o valor do capital a ser investido: R$ ");
        scanf("%f", &c);

        printf("\nDigite o tempo em meses em que o dinheiro renderá (Ex 5 para 5 meses): ");
        scanf("%d", &t);

        printf("\nDigite a taxa de juros mensal em porcento que será aplicada ao mês (Ex: 3 para 3%%): ");
        scanf("%f", &i);

    // Cálculos

        j = (c * (i / 100) * t);
        m = c + j;

    //Exibição do cálculo efetuado

        printf("\nInformamos que o dinheiro investido foi de R$ %.2f", c);

        if (t==1){

            printf("\n\nIsso rendeu R$ %.2f no tempo total de %d mês\n", j, t);
        } else {

            printf("\n\nIsso rendeu R$ %.2f no tempo total de %d meses\n", j, t);
        }

        printf("\nPortanto o montante final é R$ %.2f + R$ %.2f = R$ %.2f\n", c, j, m);

  return 0;
}
