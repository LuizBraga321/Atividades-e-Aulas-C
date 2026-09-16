#include <stdio.h>

int main()
{
    int num;
    int somaPos = 0, somaNeg = 0, qtdPos = 0, qtdNeg = 0;

    printf("Digite um numero (0 para encerrar): ");
    scanf("%d", &num);

    while (num != 0)
    {
        if (num > 0)
        {
            somaPos += num;
            qtdPos++;
        }
        else
        {
            somaNeg += num;
            qtdNeg++;
        }

        printf("Digite outro numero (0 para encerrar): ");
        scanf("%d", &num);
    }

    printf("\nSoma dos positivos: %d\n", somaPos);
    printf("Soma dos negativos: %d\n", somaNeg);
    printf("Quantidade de positivos: %d\n", qtdPos);
    printf("Quantidade de negativos: %d\n", qtdNeg);
    return 0;
}