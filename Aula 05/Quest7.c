#include <stdio.h>

int main()
{
    int num;
    long long fatorial = 1;

    printf("Digite um numero inteiro entre 0 e 10: ");
    scanf("%d", &num);

    while (num < 0 || num > 10)
    {
        printf("Valor invalido! Digite um numero entre 0 e 10: ");
        scanf("%d", &num);
    }

    for (int i = 1; i <= num; i++)
    {
        fatorial *= i;
    }

    printf("%d! = %lld\n", num, fatorial);
    return 0;
}