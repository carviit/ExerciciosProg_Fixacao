#include <stdio.h>
#include <locale.h>

void fibonacci(int n){

    if(n == 1){

        printf("0\n");
    }

    if (n == 2){

         printf("1\n");

    }

    int i, f1 = 0, f2 = 1, serie = 0;

    for(i = 3 ; i<=n; i++){

        serie = f1 + f2;

        f1 = f2;
        f2 = serie;

        printf("%d ", serie);

    }
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite a quantidade de números da sequência de Fibonacci que será exibido: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
