#include <stdio.h>

int main()
{
    int num, primo;
    char resp;

    do
    {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);

        primo = 1; // assume que e primo

        if (num < 2)
        {
            primo = 0;
        }
        else
        {
            for (int i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    primo = 0;
                    break;
                }
            }
        }

        if (primo)
            printf("%d e primo.\n", num);
        else
            printf("%d nao e primo.\n", num);

        printf("Deseja testar outro numero? (s/n): ");
        scanf(" %c", &resp);

    } while (resp == 's' || resp == 'S');

    return 0;
}