#include <stdio.h>

int main()
{
    char meno[20];
    char priezvisko[20];

    printf("Zadaj meno: ");
    scanf("%s", meno);
    printf("Zadaj priezvisko: ");
    scanf("%s", priezvisko);

    int i = 0, chyba = 0;
    while (meno[i] != '\0')
    {
        if (!((meno[i] >= 'A' && meno[i] <= 'Z') || (meno[i] >= 'a' && meno[i] <= 'z')))
        {
            chyba = 1;
            break;
        }
        i++;
    }
    if (chyba == 1)
    {
        printf("Neplatne meno\n");
    }
    else
    {
        printf("Meno je platne\n");
    }

    i = 0, chyba = 0;
    while (priezvisko[i] != '\0')
    {
        if (!((priezvisko[i] >= 'A' && priezvisko[i] <= 'Z') || (priezvisko[i] >= 'a' && priezvisko[i] <= 'z')))
        {
            chyba = 1;
            break;
        }
        i++;
    }
    if (chyba == 1)
    {
        printf("Neplatne priezvisko\n");
    }
    else
    {
        printf("Priezvisko je platne\n");
    }

    return 0;
}