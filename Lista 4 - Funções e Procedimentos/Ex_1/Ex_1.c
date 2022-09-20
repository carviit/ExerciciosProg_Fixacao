#include <stdio.h>
#include <locale.h>

int idade (int anos, int meses, int dias){

    int idade = 0;

    idade = (anos * 365) + (meses * 30) + dias;

    return idade;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int anos, meses, dias;

    printf("Digite sua idade (anos): ");
    scanf("%d", &anos);

    printf("\nDigite sua idade (meses): ");
    scanf("%d", &meses);

    printf("\nDigite sua idade (dias): ");
    scanf("%d", &dias);

    printf("\nSua idade em dias é igual a %d dias\n", idade(anos, meses, dias));

    return 0;
}
