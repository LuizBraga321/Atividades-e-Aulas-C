#include <stdio.h>

int main()
{
    int num, maior, menor;

    printf("Digite o numero 1: ");
    scanf("%d", &num);
    maior = menor = num;

    for (int i = 2; i <= 10; i++)
    {
        printf("Digite o numero %d: ", i);
        scanf("%d", &num);

        if (num > maior)
            maior = num;
        if (num < menor)
            menor = num;
    }

    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Diferenca: %d\n", maior - menor);
    return 0;
}