#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int secreto = rand() % 100 + 1;
    int palpite, tentativas = 0, acertou = 0;

    while (tentativas < 10)
    {
        printf("Digite seu palpite (1-100): ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < secreto)
        {
            printf("O numero secreto e maior.\n");
        }
        else if (palpite > secreto)
        {
            printf("O numero secreto e menor.\n");
        }
        else
        {
            printf("Parabens! Voce acertou!\n");
            acertou = 1;
            break;
        }
    }

    printf("\nTentativas realizadas: %d\n", tentativas);
    if (!acertou)
    {
        printf("Voce nao acertou. O numero secreto era: %d\n", secreto);
    }

    return 0;
}