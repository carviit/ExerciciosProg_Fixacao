/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 1 - Exerc�cio 1
*/

// Programa para exibir o antecessor e o sucessor de um n�mero inteiro

#include <stdio.h>
#include <locale.h>


int main(int argc, char const *argv[]){

    //Ativa��o da biblioteca para utilizar a l�ngua portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

    int n1, ant, suc;

    // Entrada de dados (N�mero inteiro)

    printf("Digite um n�mero inteiro para ser calculado o seu antecessor e seu sucessor: ");
    scanf("%d", &n1);

    // C�lculo do antecessor e do sucessor

    ant = n1 - 1;
    suc = n1 + 1;

    //Exibi��o dos c�lculos

    printf("\nO antecessor do n�mero \"%d\" � igual a \"%d\"\n", n1, ant);

    printf("\nO sucessor do n�mero \"%d\" � igual a \"%d\"\n", n1, suc);

  return 0;
}
