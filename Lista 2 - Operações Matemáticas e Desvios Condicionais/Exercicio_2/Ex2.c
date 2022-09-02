/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 2 - Exerc�cio 2
*/

// Programa que calcula quatro express�es a partir de valores

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    //Ativa��o da biblioteca para utilizar a L�ngua Portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

    int b, c, d;
    float a, e, f, exp1, exp2, exp3, exp4;

    // Atribuindo valores as var�aveis

    a = 1.5, b = 4, c = 2, d = 3, e = 1.2, f = 4.3;

    // C�lculo das express�es

    exp1 = (a * (c + d)) / (b * (e + f));

    exp2 = (pow(a,(b+c)) / (e + f)) + d;

    exp3 = (a +((pow((c+d), 2) / (pow(b, 2))) * d)) * ((float)1 / c);

    exp4 = (-b + sqrt((pow(b, 2)) - 4 * a * c)) / (2 * a);

    //Exibi��o dos c�lculos

    printf("O resultado da primeira express�o \"a)\" � igual a \"%.2f\"\n", exp1);
    printf("\nO resultado da segunda express�o \"b)\" � igual a \"%.2f\"\n", exp2);
    printf("\nO resultado da terceira express�o \"c)\" � igual a \"%.2f\"\n", exp3);
    printf("\nO resultado da quarta express�o \"d)\" � igual a \"%.2f\"\n", exp4);

  return 0;
}
