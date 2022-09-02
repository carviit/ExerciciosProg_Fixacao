/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 1 - Exerc�cio 10
*/

// Programa que calcula quantos minutos se passaram desde o in�cio do dia at� uma hora informada.

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]) {

    //Ativa��o da biblioteca para utilizar a L�ngua Portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

    int horas, minutos, minutostotal;

    // Entrada de dados (Hora no formato

        printf("Digite quantas horas no formato 24h s�o nesse exato momento (Ex: 20:45 � igual a 20): ");
        scanf("%d", &horas);

        printf("\nDigite quantos minutos s�o nesse exato momento (Ex: 20:33 � igual � 33): ");
        scanf("%d", &minutos);

    // C�lculo

        minutostotal = (horas * 60) + minutos;

    //Exibi��o dos c�lculos

        printf("\nJ� se passaram %d minutos de um total de 1440m no dia.\n", minutostotal);

  return 0;
}
