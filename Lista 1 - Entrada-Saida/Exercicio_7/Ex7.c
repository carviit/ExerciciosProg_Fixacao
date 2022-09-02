/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 1 - Exerc�cio 7
*/

// Convers�o de temperatura centr�grados para Fahrenheit

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    // Ativa��o da biblioteca para utilizar a linguagem portuguesa no programa.

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

        float tempc, tempf;

    // Entrada de dados (Valor do produto)

        printf("Digite o valor da temperatura em C� (centr�grados) a ser convertido para �F (Fahrenheit): ");
        scanf("%f", &tempc);

    // C�lculos (Convers�o de C� para �F)

        tempf = ((9 * tempc) + 160) / 5;

    //Exibi��o das atribui��es efetuadas

        printf("\nA temperatura %.1fC� � igual a %.1f�F\n", tempc,tempf);

  return 0;
}
