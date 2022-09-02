/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista 1 - Exercício 8
*/

// Conversão de temperatura Fahrenheit para centrígrados

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    // Ativação da biblioteca para utilizar a linguagem portuguesa no programa.

    setlocale (LC_ALL, "Portuguese");

    // Declaração de variáveis

        float tempc, tempf;

    // Entrada de dados (Valor do produto)

        printf("Digite o valor da temperatura em °F (Grau Fahrenheit) a ser convertido para C° (Grau Celsius): ");
        scanf("%f", &tempf);

    // Cálculo (Conversão de ºF para Cº)

        tempc = ((5 * tempf) - 160) / 9;

    //Exibição da conversão efetuada (°F -> Cº)

        printf("\nA temperatura %.1f°F é igual a %.1fC°\n", tempf,tempc);

  return 0;
}
