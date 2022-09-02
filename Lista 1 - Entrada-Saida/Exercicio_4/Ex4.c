/*
* CSI101-2022-01 - Programacao de Computadores I
* Nome........: Carlos Vitor Ferreira de Moura
* Matricula...: 2218120
* Curso.......: Sistemas de Informa��o
* Exercicio...: Lista 1 - Exerc�cio 4
*/

// C�lculo de sal�rio m�nimo como base para tributos

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    // Ativa��o da biblioteca para utilizar a linguagem portuguesa no programa.

    setlocale (LC_ALL, "Portuguese");

    // Declara��o de vari�veis

    float salmin, salbase,quantsal;

    // Entrada de dados (Valor do sal�rio m�nimo atual e sal�rio que vai ser usado como base para c�lculo)

    printf("Qual o valor do sal�rio m�nimo atualmente: R$ ");
    scanf("%f", &salmin);

    printf("\nQual o valor do sal�rio que ser� calculado: R$ ");
    scanf("%f", &salbase);

    // C�lculo da gorjeta (Quantidade de sal�rio m�nimo)

    quantsal = salbase / salmin;

    //Exibi��o dos c�lculos efetuados

    printf("\nO sal�rio informado (R$ %.2f), corresponde a %.2f sal�rios m�nimos\n", salbase, quantsal);


  return 0;
}
