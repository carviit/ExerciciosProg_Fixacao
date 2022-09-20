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

    printf("Digite um número para cacular seu somatório: ");
    scanf("%d", &numero);

    printf("\nO somatório do número %d = %d\n", numero, somanumero(numero));

    return 0;
}
