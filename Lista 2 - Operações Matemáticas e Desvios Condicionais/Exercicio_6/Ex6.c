/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 2 - Exerc�cio 6
*/

// Volume de uma lata de �leo

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    //Ativa��o da biblioteca para utilizar a L�ngua Portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

        float raio, altura, pi = 3.14159, volume;

    // Entrada de dados

        printf("Digite o raio da base da lata em cent�metros: ");
        scanf("%f", &raio);

        printf("\nDigite a altura da lata em cent�metros: ");
        scanf("%f", &altura);

    // C�lculos

        volume = pi * (pow(raio, 2)) * altura;

    // Exibi��o do resultado

        printf("\nO volume da lata de ol�o � igual a %.2fcm�\n", volume);

  return 0;
}
