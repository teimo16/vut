#include <stdio.h>

int isInSet(int prvok, int mnozina[], int velkost)
{
    for (int i = 0; i < velkost; i++)
    {
        if (prvok == mnozina[i])
        {
            return 1;
        }
    }
    return 0;
}

int isSet(int mnozina[], int velkost)
{
    for (int i = 0; i < velkost; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (mnozina[i] == mnozina[j])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int pole1[] = {1, 2, 3, 4, 5};
    int pole2[] = {0, 1, 8, 1, 4};
    int rovnake = 0;

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         for (int k = 0; )
    //         if (pole1[i] == pole2[j])
    //         {
    //             rovnake++;
    //             break;
    //         }
    //     }
    // }

    // printf("Pocet rovnakych cisel: %d\n", rovnake);

    printf("isInSet(4, pole1, 5): %d\n", isInSet(4, pole1, 5));
    printf("isSet(pole1, 5): %d\n", isSet(pole1, 5));

    return 0;
}