#include <stdio.h>
#include <locale.h>

int contaimpar(int n1, int n2){

    int nimpar = 0, i;

    for(i=n1;i<=n2;i++){

        if (i % 2 != 0){

            nimpar++;
        }
    }

    return nimpar;

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

    printf("\nA quantidade de números ímpares entre %d e %d = %d\n", menor, maior, contaimpar(menor, maior));

    return 0;
}
