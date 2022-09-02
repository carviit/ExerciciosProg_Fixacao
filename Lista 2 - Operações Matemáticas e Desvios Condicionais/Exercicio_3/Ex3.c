/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 2 - Exerc�cio 3
*/

// Programa que calcula ra�zes de uma equa��o de segundo grau

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    //Ativa��o da biblioteca para utilizar a L�ngua Portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

        int a, b, c, x1,x2, delta;

    // Entrada de dados

        printf("Digite o valor inteiro de \"a\" da sua equa��o: ");
        scanf("%d",  &a);

        printf("\nDigite o valor inteiro de \"b\" da sua equa��o: ");
        scanf("%d", &b);

        printf("\nDigite o valor inteiro de \"c\" da sua equa��o: ");
        scanf("%d", &c);

    // C�lculos

        delta = (pow(b, 2)) - (4 * a * c);

        x1 = (-b + (sqrt(delta))) / (2 * a);

        x2 = (-b - (sqrt(delta))) / (2 * a) ;

    //Exibi��o dos c�lculos

    if (delta>0){
        printf("\nA equa��o informada possui 2 ra�zes reais e distintas x1=%d e x2=%d\n", x1, x2);

    } else if (delta==0){
        printf("\nA equa��o informada possui 2 ra�zes reais e iguais x1=%d e x2=%d\n", x1,x2);

    } else {
        printf("\nA equa��o informada n�o possui ra�zes reais\n");
    }

  return 0;
}
