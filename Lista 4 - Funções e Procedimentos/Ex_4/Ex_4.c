#include <stdio.h>
#include <locale.h>

char nota(int numero){

    char nota;

    if(numero >= 0 && numero <= 49){

        nota = 'D';

    } else if(numero >= 50 && numero <= 69){

        nota = 'C';

    } else if (numero >= 70 && numero <= 89){

        nota = 'B';

    } else if (numero >=90 && numero <= 100){

        nota = 'A';
    }

    return nota;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int media, t, i = 1;

        printf("Digite a nota do aluno [%d]: ", i);
        scanf("%d", &media);

        printf("\nO conceito do ALUNO [%d] = %c ", i, nota(media));

        printf("\n\nDigite 1 para inserir uma nova nota ou 2 para encerrar: ");
        scanf("%d", &t);

        while(t==1){

            i++;

            printf("\nDigite a nota do aluno [%d]: ", i);
            scanf("%d", &media);

            printf("\nO conceito do ALUNO [%d] = %c\n", i, nota(media));

            printf("\nDigite 1 para inserir uma nova nota ou 2 para encerrar: ");
            scanf("%d", &t);
        }

    return 0;
}
