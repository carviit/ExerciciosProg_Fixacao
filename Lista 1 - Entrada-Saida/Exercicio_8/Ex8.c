/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 1 - Exerc�cio 8
*/

// Convers�o de temperatura Fahrenheit para centr�grados

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    // Ativa��o da biblioteca para utilizar a linguagem portuguesa no programa.

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

        float tempc, tempf;

    // Entrada de dados (Valor do produto)

        printf("Digite o valor da temperatura em �F (Grau Fahrenheit) a ser convertido para C� (Grau Celsius): ");
        scanf("%f", &tempf);

    // C�lculo (Convers�o de �F para C�)

        tempc = ((5 * tempf) - 160) / 9;

    //Exibi��o da convers�o efetuada (�F -> C�)

        printf("\nA temperatura %.1f�F � igual a %.1fC�\n", tempf,tempc);

  return 0;
}
