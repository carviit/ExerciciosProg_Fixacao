/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista 1 - Exercício 10
*/

// Programa que calcula quantos minutos se passaram desde o início do dia até uma hora informada.

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]) {

    //Ativação da biblioteca para utilizar a Língua Portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declaração de variáveis

    int horas, minutos, minutostotal;

    // Entrada de dados (Hora no formato

        printf("Digite quantas horas no formato 24h são nesse exato momento (Ex: 20:45 é igual a 20): ");
        scanf("%d", &horas);

        printf("\nDigite quantos minutos são nesse exato momento (Ex: 20:33 é igual à 33): ");
        scanf("%d", &minutos);

    // Cálculo

        minutostotal = (horas * 60) + minutos;

    //Exibição dos cálculos

        printf("\nJá se passaram %d minutos de um total de 1440m no dia.\n", minutostotal);

  return 0;
}
