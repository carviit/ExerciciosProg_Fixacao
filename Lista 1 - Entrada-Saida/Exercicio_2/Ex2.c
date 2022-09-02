/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 1 - Exerc�cio 2
*/

// Programa para ler dois n�meros inteiros e exibir a soma, a diferen�a, o produto e o quociente.

#include <stdio.h>
#include <locale.h>


int main(int argc, char const *argv[]) {

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

    int num1, num2, soma, subt, mult, divi;


    // Entrada de dados (dois n�meros inteiros)
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    // C�lculo das opera��es entre os n�meros digitados

    soma = num1 + num2;
    subt = num1 - num2;
    mult = num1 * num2;
    divi = num1 / num2;

    //Exibi��o dos c�lculos

    printf("\n%d + %d = %d\n", num1, num2, soma);
    printf("\n%d - %d = %d\n", num1, num2, subt);
    printf("\n%d * %d = %d\n", num1, num2, mult);
    printf("\n%d / %d = %d\n", num1, num2, divi);

  return 0;
}
