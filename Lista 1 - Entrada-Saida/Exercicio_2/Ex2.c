/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista 1 - Exercício 2
*/

// Programa para ler dois números inteiros e exibir a soma, a diferença, o produto e o quociente.

#include <stdio.h>
#include <locale.h>


int main(int argc, char const *argv[]) {

    setlocale (LC_ALL, "Portuguese");

    // Declaração de variáveis

    int num1, num2, soma, subt, mult, divi;


    // Entrada de dados (dois números inteiros)
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Cálculo das operações entre os números digitados

    soma = num1 + num2;
    subt = num1 - num2;
    mult = num1 * num2;
    divi = num1 / num2;

    //Exibição dos cálculos

    printf("\n%d + %d = %d\n", num1, num2, soma);
    printf("\n%d - %d = %d\n", num1, num2, subt);
    printf("\n%d * %d = %d\n", num1, num2, mult);
    printf("\n%d / %d = %d\n", num1, num2, divi);

  return 0;
}
