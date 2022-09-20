#include <stdio.h>
#include <locale.h>

int somaintervalo(int n1, int n2){

    int soma = 0, i;

    for(i=n1;i<=n2;i++){

       soma += i;

    }

    return soma;

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n1, n2, maior, menor;

    printf("Digite o valor de n1: ");
    scanf("%d", &n1);

    printf("\nDigite o valor de n2: ");
    scanf("%d", &n2);

    if(n1>n2){

        maior = n1;
        menor = n2;

    } else {

        menor = n1;
        maior = n2;
    }

    printf("\nA soma dos números entre %d e %d = %d\n", menor, maior, somaintervalo(menor, maior));

    return 0;
}
