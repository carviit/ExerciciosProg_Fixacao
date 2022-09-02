/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista 1 - Exercício 6
*/

// Troca de valor entre variáveis

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    // Ativação da biblioteca para utilizar a linguagem portuguesa no programa.

    setlocale (LC_ALL, "Portuguese");

    // Declaração de variáveis

        int A, B, n;

    // Entrada de dados (Valor do produto)

        printf("Digite um valor inteiro para A: ");
        scanf("%d", &A);

        printf("\nDigite outro valor inteiro para B: ");
        scanf("%d", &B);

    //Exibição dos valores inseridos

        printf("\nOs valores iniciais digitados são (A = %d) e (B = %d)", A, B);

    // Atribuição de novos valores para as variáveis

            n = B;
            B = A;
            A = n;

    //Exibição das atribuições efetuadas

        printf("\n\nOs valores finais são (A = %d) e (B = %d)\n", n, B);

  return 0;
}
