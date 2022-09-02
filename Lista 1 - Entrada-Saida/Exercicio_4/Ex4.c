/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista 1 - Exercício 4
*/

// Cálculo de salário mínimo como base para tributos

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    // Ativação da biblioteca para utilizar a linguagem portuguesa no programa.

    setlocale (LC_ALL, "Portuguese");

    // Declaração de variáveis

    float salmin, salbase,quantsal;

    // Entrada de dados (Valor do salário mínimo atual e salário que vai ser usado como base para cálculo)

    printf("Qual o valor do salário mínimo atualmente: R$ ");
    scanf("%f", &salmin);

    printf("\nQual o valor do salário que será calculado: R$ ");
    scanf("%f", &salbase);

    // Cálculo da gorjeta (Quantidade de salário mínimo)

    quantsal = salbase / salmin;

    //Exibição dos cálculos efetuados

    printf("\nO salário informado (R$ %.2f), corresponde a %.2f salários mínimos\n", salbase, quantsal);


  return 0;
}
