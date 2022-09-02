/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista 1 - Exercício 7
*/

// Conversão de temperatura centrígrados para Fahrenheit

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    // Ativação da biblioteca para utilizar a linguagem portuguesa no programa.

    setlocale (LC_ALL, "Portuguese");

    // Declaração de variáveis

        float tempc, tempf;

    // Entrada de dados (Valor do produto)

        printf("Digite o valor da temperatura em C° (centrígrados) a ser convertido para °F (Fahrenheit): ");
        scanf("%f", &tempc);

    // Cálculos (Conversão de Cº para ºF)

        tempf = ((9 * tempc) + 160) / 5;

    //Exibição das atribuições efetuadas

        printf("\nA temperatura %.1fC° é igual a %.1f°F\n", tempc,tempf);

  return 0;
}
