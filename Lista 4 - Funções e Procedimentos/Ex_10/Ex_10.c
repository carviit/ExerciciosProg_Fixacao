#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int dado(int k){

    srand(time(NULL));

    int nsorteado;

    nsorteado = (rand() % 6)+ 1;

    return nsorteado;

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int k;

    do{

    printf("Digite \"1\" para sortear seu número: ");
    scanf("%d", &k);

    if(k!=1){

        printf("\n**ERRO, VALOR INVÁLIDO**\n\n");
    }

    } while (k!=1);

    printf("\nO valor sorteado entre 1 e 6 = [%d]\n", dado(k));


    return 0;
}
