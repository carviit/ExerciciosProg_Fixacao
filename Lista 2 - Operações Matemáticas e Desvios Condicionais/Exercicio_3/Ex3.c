/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista 2 - Exercício 3
*/

// Programa que calcula raízes de uma equação de segundo grau

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    //Ativação da biblioteca para utilizar a Língua Portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declaração de variáveis

        int a, b, c, x1,x2, delta;

    // Entrada de dados

        printf("Digite o valor inteiro de \"a\" da sua equação: ");
        scanf("%d",  &a);

        printf("\nDigite o valor inteiro de \"b\" da sua equação: ");
        scanf("%d", &b);

        printf("\nDigite o valor inteiro de \"c\" da sua equação: ");
        scanf("%d", &c);

    // Cálculos

        delta = (pow(b, 2)) - (4 * a * c);

        x1 = (-b + (sqrt(delta))) / (2 * a);

        x2 = (-b - (sqrt(delta))) / (2 * a) ;

    //Exibição dos cálculos

    if (delta>0){
        printf("\nA equação informada possui 2 raízes reais e distintas x1=%d e x2=%d\n", x1, x2);

    } else if (delta==0){
        printf("\nA equação informada possui 2 raízes reais e iguais x1=%d e x2=%d\n", x1,x2);

    } else {
        printf("\nA equação informada não possui raízes reais\n");
    }

  return 0;
}
