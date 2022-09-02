/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 1 - Exerc�cio 3
*/

// Programa para calcular os 10% de gorjeta de um restaurante

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    // Ativa��o da biblioteca para utilizar a linguagem portuguesa no programa.

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

    float valorgasto, gorjeta, valortotal;

    // Entrada de dados (Valor das despesas no restaurante)

    printf("Qual foi o valor gasto no restaurante? R$ ");
    scanf("%f", &valorgasto);

    // C�lculo da gorjeta (10% de gorjeta)

    gorjeta = (10 * valorgasto) / 100;

    valortotal = valorgasto + gorjeta;

    //Exibi��o dos c�lculos efetuados

    printf("\nO valor da gorjeta (10%%) � de R$%.2f\n", gorjeta);
    printf("\nO valor total a ser pago com acr�scimo da gorjeta � igual � R$%.2f\n", valortotal);


  return 0;
}
