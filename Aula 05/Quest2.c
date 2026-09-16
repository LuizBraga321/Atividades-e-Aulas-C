#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    char resp;
    int aprovados = 0, recuperacao = 0, reprovados = 0;

    do
    {
        printf("Digite as 3 notas do aluno:\n");
        scanf("%f", &n1);
        scanf("%f", &n2);
        scanf("%f", &n3);

        media = (n1 + n2 + n3) / 3;

        if (media >= 7)
        {
            printf("Situacao: Aprovado (media %.2f)\n", media);
            aprovados++;
        }
        else if (media >= 5)
        {
            printf("Situacao: Recuperacao (media %.2f)\n", media);
            recuperacao++;
        }
        else
        {
            printf("Situacao: Reprovado (media %.2f)\n", media);
            reprovados++;
        }

        printf("Deseja lancar outro aluno? (s/n): ");
        scanf(" %c", &resp);

    } while (resp == 's' || resp == 'S');

    printf("\nAprovados: %d\n", aprovados);
    printf("Recuperacao: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);
    return 0;
}