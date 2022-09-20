#include <stdio.h>
#include <locale.h>

int somanumero (int n){

    int resultado = 0, i;

    for(i=1;i<=n;i++){

        resultado += i;
    }

    return resultado;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite um n�mero para cacular seu somat�rio: ");
    scanf("%d", &numero);

    printf("\nO somat�rio do n�mero %d = %d\n", numero, somanumero(numero));

    return 0;
}
