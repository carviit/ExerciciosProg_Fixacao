/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista 2 - Exercício 6
*/

// Volume de uma lata de óleo

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    //Ativação da biblioteca para utilizar a Língua Portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declaração de variáveis

        float raio, altura, pi = 3.14159, volume;

    // Entrada de dados

        printf("Digite o raio da base da lata em centímetros: ");
        scanf("%f", &raio);

        printf("\nDigite a altura da lata em centímetros: ");
        scanf("%f", &altura);

    // Cálculos

        volume = pi * (pow(raio, 2)) * altura;

    // Exibição do resultado

        printf("\nO volume da lata de oléo é igual a %.2fcm³\n", volume);

  return 0;
}
