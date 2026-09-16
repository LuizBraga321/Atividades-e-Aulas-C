#include <stdio.h>

int main()
{
    int num;
    char resp;

    do
    {
        printf("Digite um numero para ver a tabuada: ");
        scanf("%d", &num);

        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", num, i, num * i);
        }

        printf("Deseja calcular a tabuada de outro numero? (s/n): ");
        scanf(" %c", &resp);

    } while (resp == 's' || resp == 'S');

    return 0;
}