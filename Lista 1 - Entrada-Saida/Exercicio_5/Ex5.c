/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 1 - Exerc�cio 5
*/

// C�lculo de sal�rio m�nimo como base para tributos

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    // Ativa��o da biblioteca para utilizar a linguagem portuguesa no programa.

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

        float vlprod, desconto;

    // Entrada de dados (Valor do produto)

        printf("Qual o valor do produto adquirido: R$ ");
        scanf("%f", &vlprod);

    // C�lculo do desconto sobre o valor do produto

        desconto = (vlprod * 9) / 100;

        vlprod = vlprod - desconto;

    //Exibi��o dos c�lculos efetuados

        printf("\nO seu produto teve um desconto de 9%% (R$ %.2f), portanto o valor final a ser pago � igual a R$ %.2f\n", desconto, vlprod);


  return 0;
}
