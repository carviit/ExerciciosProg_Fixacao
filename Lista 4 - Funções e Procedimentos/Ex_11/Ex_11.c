#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int dado(int k){

    srand(time(NULL));

    int nsorteado, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, i;

    for(i=1;i<1000000;i++){

        nsorteado = (rand() % 6) + 1;

        switch(nsorteado){

            case 1:
                n1++;
            break;

            case 2:
                n2++;
            break;

            case 3:
                n3++;
            break;

            case 4:
                n4++;
            break;

            case 5:
                n5++;
            break;

            case 6:
                n6++;
            break;





        }

    }


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

