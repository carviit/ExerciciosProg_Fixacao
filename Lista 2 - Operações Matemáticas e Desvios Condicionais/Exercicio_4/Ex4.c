/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista 2 - Exercício 4
*/

// Programa que indica qual grupo está um número inteiro

#include <stdio.h>
#include <locale.h>


int main(int argc, char const *argv[]) {

    //Ativação da biblioteca para utilizar a Língua Portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declaração de variáveis

        int n;

    // Entrada de dados

        printf("Digite um número inteiro: ");
        scanf("%d", &n);

    // Comparação e Exibição

        if(n>=0 && n<10){

            printf("\nO número digitado está entre o grupo de números de 0 a 10\n");

            }else if(n>=10 && n<100){

                printf("\nO número digitado está entre o grupo de números de 10 a 100\n");

            }else if(n>=100 && n<1000){

                printf("\nO número digitado está entre o grupo de números de 100 a 1000\n");

            }else if(n>=1000 && n<=10000){

                printf("\nO número digitado está entre o grupo de números de 1000 a 10000\n");
            }

        else {

            printf("\nO número digitado não está entre nenhum grupo de 0 a 10000\n");
        }

  return 0;
}
