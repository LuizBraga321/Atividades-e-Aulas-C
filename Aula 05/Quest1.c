#include <stdio.h>

int main()
{
    int num, pares = 0, impares = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Digite o numero %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            printf("%d e par.\n", num);
            pares++;
        }
        else
        {
            printf("%d e impar.\n", num);
            impares++;
        }
    }

    printf("\nQuantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);
    return 0;
}