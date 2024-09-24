#include <stdio.h>

int main()
{
    char z;
    z = 'e';

    printf("znak: %c\n", z);
    printf("cislo: %d\n", z);
    z += 10;
    printf("znak: %c\n", z);
    printf("cislo: %d\n\n", z);

    printf("Zadaj znak: ");
    scanf("%c", &z);

    if ((z >= 65 && z <= 90))
    {
        printf("Znak je velke pismeno %c, male pismeno je %c\n", z, z + 32);
    }
    else if (z >= 97 && z <= 122)
    {
        printf("Znak je male pismeno %c, velke pismeno je %c\n", z, z - 32);
    }
    else
    {
        printf("Znak nie je pismeno\n");
    }

    return 0;
}