/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 2 - Exerc�cio 5
*/

// Programa que a classifica um tri�ngulo

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]) {

    //Ativa��o da biblioteca para utilizar a L�ngua Portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

        float l1,l2,l3;

    // Entrada de dados

        printf("Digite a medida do lado 1 do tri�ngulo: ");
        scanf("%f", &l1);

        printf("Digite a medida do lado 2 do tri�ngulo: ");
        scanf("%f", &l2);

        printf("Digite a medida do lado 3 do tri�ngulo: ");
        scanf("%f", &l3);


    // Compara��es e exibi��o do resultado

        if(l1==l2 && l2==l3){

            printf("\nO tri�ngulo com medidas \"%.1f\" \"%.1f\" \"%.1f\" � um tri�ngulo equil�tero pois todos os lados s�o iguais\n", l1, l2, l3);

        }   else if(l1==l2 || l2==l3 || l3==l1){

            printf("\nO tri�ngulo com medidas \"%.1f\" \"%.1f\" \"%.1f\" � um tri�ngulo is�celes pois possui dois lados iguais e um diferente\n", l1, l2, l3);

        } else{

          printf("\nO tri�ngulo com medidas \"%.1f\" \"%.1f\" \"%.1f\" � um tri�ngulo escaleno pois possui os tr�s lados diferentes\n", l1, l2, l3);

        }


  return 0;
}
