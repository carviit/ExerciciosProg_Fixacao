/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 1 - Exerc�cio 6
*/

// Troca de valor entre vari�veis

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    // Ativa��o da biblioteca para utilizar a linguagem portuguesa no programa.

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

        int A, B, n;

    // Entrada de dados (Valor do produto)

        printf("Digite um valor inteiro para A: ");
        scanf("%d", &A);

        printf("\nDigite outro valor inteiro para B: ");
        scanf("%d", &B);

    //Exibi��o dos valores inseridos

        printf("\nOs valores iniciais digitados s�o (A = %d) e (B = %d)", A, B);

    // Atribui��o de novos valores para as vari�veis

            n = B;
            B = A;
            A = n;

    //Exibi��o das atribui��es efetuadas

        printf("\n\nOs valores finais s�o (A = %d) e (B = %d)\n", n, B);

  return 0;
}
