/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista 2 - Exercício 2
*/

// Programa que calcula quatro expressões a partir de valores

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    //Ativação da biblioteca para utilizar a Língua Portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declaração de variáveis

    int b, c, d;
    float a, e, f, exp1, exp2, exp3, exp4;

    // Atribuindo valores as varíaveis

    a = 1.5, b = 4, c = 2, d = 3, e = 1.2, f = 4.3;

    // Cálculo das expressões

    exp1 = (a * (c + d)) / (b * (e + f));

    exp2 = (pow(a,(b+c)) / (e + f)) + d;

    exp3 = (a +((pow((c+d), 2) / (pow(b, 2))) * d)) * ((float)1 / c);

    exp4 = (-b + sqrt((pow(b, 2)) - 4 * a * c)) / (2 * a);

    //Exibição dos cálculos

    printf("O resultado da primeira expressão \"a)\" é igual a \"%.2f\"\n", exp1);
    printf("\nO resultado da segunda expressão \"b)\" é igual a \"%.2f\"\n", exp2);
    printf("\nO resultado da terceira expressão \"c)\" é igual a \"%.2f\"\n", exp3);
    printf("\nO resultado da quarta expressão \"d)\" é igual a \"%.2f\"\n", exp4);

  return 0;
}
