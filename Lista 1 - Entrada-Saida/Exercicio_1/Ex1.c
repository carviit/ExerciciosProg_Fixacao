/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista 1 - Exercício 1
*/

// Programa para exibir o antecessor e o sucessor de um número inteiro

#include <stdio.h>
#include <locale.h>


int main(int argc, char const *argv[]){

    //Ativação da biblioteca para utilizar a língua portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declaração de variáveis

    int n1, ant, suc;

    // Entrada de dados (Número inteiro)

    printf("Digite um número inteiro para ser calculado o seu antecessor e seu sucessor: ");
    scanf("%d", &n1);

    // Cálculo do antecessor e do sucessor

    ant = n1 - 1;
    suc = n1 + 1;

    //Exibição dos cálculos

    printf("\nO antecessor do número \"%d\" é igual a \"%d\"\n", n1, ant);

    printf("\nO sucessor do número \"%d\" é igual a \"%d\"\n", n1, suc);

  return 0;
}
