/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informação
* Exercicio...: Lista 2 - Exercício 5
*/

// Programa que a classifica um triângulo

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]) {

    //Ativação da biblioteca para utilizar a Língua Portuguesa no programa

    setlocale (LC_ALL, "Portuguese");

    // Declaração de variáveis

        float l1,l2,l3;

    // Entrada de dados

        printf("Digite a medida do lado 1 do triângulo: ");
        scanf("%f", &l1);

        printf("Digite a medida do lado 2 do triângulo: ");
        scanf("%f", &l2);

        printf("Digite a medida do lado 3 do triângulo: ");
        scanf("%f", &l3);


    // Comparações e exibição do resultado

        if(l1==l2 && l2==l3){

            printf("\nO triângulo com medidas \"%.1f\" \"%.1f\" \"%.1f\" é um triângulo equilátero pois todos os lados são iguais\n", l1, l2, l3);

        }   else if(l1==l2 || l2==l3 || l3==l1){

            printf("\nO triângulo com medidas \"%.1f\" \"%.1f\" \"%.1f\" é um triângulo isóceles pois possui dois lados iguais e um diferente\n", l1, l2, l3);

        } else{

          printf("\nO triângulo com medidas \"%.1f\" \"%.1f\" \"%.1f\" é um triângulo escaleno pois possui os três lados diferentes\n", l1, l2, l3);

        }


  return 0;
}
