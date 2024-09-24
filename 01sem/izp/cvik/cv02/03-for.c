#include <stdio.h>

int main()
{
    // for (int i = 0; i <= 100; i++)
    // {
    //     if ((i % 3 == 0) || (i % 8 == 0))
    //     {
    //         printf("i = %d\n", i);
    //     }
    // }

    int c[100], velkost = 100, i = 100, min;

    for (int i = 0; i < 100; i++)
    {
        c[i] = 0;
    }

    for (int i = 0; i < 100; i++)
    {
        printf("Zadaj cislo: ");
        scanf("%d", &c[i]);
        if (c[i] < 0)
        {
            velkost = i;
            break;
        }
        if (c[i] % 3 == 0 || c[i] % 8 == 0)
        {
            printf("cislo %d je delitelne 3 alebo 8\n", c[i]);
        }
    }

    for (i = velkost - 1; i >= 0; i--)
    {
        printf("%d\n", c[i]);
    }
    min = c[0];

    for (int i = 0; i < velkost; i++)
    {
        if (min > c[i] && c[i] > 0)
        {
            min = c[i];
        }
    }

    printf("Najmensia hodnota je: %d\n", min);

    return 0;
}