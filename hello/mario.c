#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // para cada linha
    for (int i = 0; i < n; i++)
    {
        // para cada coluna
        for (int j = 0; j < n; j++)
        {
            // imprime um brick ou espaço em branco, dependendo da posição
            if (j < n - i - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

        // move para a próxima linha
        printf("\n");
    }
}

