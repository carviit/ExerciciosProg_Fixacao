#include <stdio.h>
#include <locale.h>

void estacao(int dia, int mes){

    setlocale(LC_ALL, "Portuguese");

    if((dia >= 21 && mes >= 12) || (dia <= 20 && mes <= 3)){

        printf("\n%d//%d é VERÃO\n", dia, mes);
    }

    else if((dia >=21 && mes <= 3) || (dia <= 20 && mes <= 6)){

        printf("\n%d//%d é OUTONO\n", dia, mes);
    }

    else if((dia >=21 && mes <= 6) || (dia <= 22 && mes <= 9)){

        printf("\n%d//%d é INVERNO\n", dia, mes);
    }

    else{

        printf("\n%d/%d é PRIMAVERA\n ", dia, mes);
    }

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int dia, mes;

    printf("Digite o dia atual: ");
    scanf("%d", &dia);

    printf("Digite o mês atual: ");
    scanf("%d", &mes);

    estacao (dia, mes);

    return 0;
}


