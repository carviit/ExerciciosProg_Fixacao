/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 2 - Exerc�cio 4
*/

// Programa que indica qual grupo est� um n�mero inteiro

#include <stdio.h>
#include <locale.h>


int main(int argc, char const *argv[]) {

    //Ativa��o da biblioteca para utilizar a L�ngua Portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

        int n;

    // Entrada de dados

        printf("Digite um n�mero inteiro: ");
        scanf("%d", &n);

    // Compara��o e Exibi��o

        if(n>=0 && n<10){

            printf("\nO n�mero digitado est� entre o grupo de n�meros de 0 a 10\n");

            }else if(n>=10 && n<100){

                printf("\nO n�mero digitado est� entre o grupo de n�meros de 10 a 100\n");

            }else if(n>=100 && n<1000){

                printf("\nO n�mero digitado est� entre o grupo de n�meros de 100 a 1000\n");

            }else if(n>=1000 && n<=10000){

                printf("\nO n�mero digitado est� entre o grupo de n�meros de 1000 a 10000\n");
            }

        else {

            printf("\nO n�mero digitado n�o est� entre nenhum grupo de 0 a 10000\n");
        }

  return 0;
}
