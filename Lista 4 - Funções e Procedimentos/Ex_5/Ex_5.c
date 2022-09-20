#include <stdio.h>
#include <locale.h>

void estacao(int dia, int mes){

    setlocale(LC_ALL, "Portuguese");

    if((dia >= 21 && mes >= 12) || (dia <= 20 && mes <= 3)){

        printf("\n%d//%d � VER�O\n", dia, mes);
    }

    else if((dia >=21 && mes <= 3) || (dia <= 20 && mes <= 6)){

        printf("\n%d//%d � OUTONO\n", dia, mes);
    }

    else if((dia >=21 && mes <= 6) || (dia <= 22 && mes <= 9)){

        printf("\n%d//%d � INVERNO\n", dia, mes);
    }

    else{

        printf("\n%d/%d � PRIMAVERA\n ", dia, mes);
    }

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int dia, mes;

    printf("Digite o dia atual: ");
    scanf("%d", &dia);

    printf("Digite o m�s atual: ");
    scanf("%d", &mes);

    estacao (dia, mes);

    return 0;
}


