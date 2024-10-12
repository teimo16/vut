#include <stdio.h>

int jePismeno(char znak)
{
    int pismeno = 0;
    if ((znak >= 'A' && znak <= 'Z') || (znak >= 'a' && znak <= 'z'))
    {
        pismeno = 1;
    }
    return pismeno;
}

int strIbaPismena(char str[])
{
    // vrati 1 ak retazec obsahuje iba pismena
    //       0 ak obsahuje aj nieco ine
    int ibaPismena = 1, i = 0;
    while (str[i] != '\0')
    {
        if (!jePismeno(str[i]))
        {
            ibaPismena = 0;
            break;
        }
        i++;
    }
    return ibaPismena;
}

void vypisChyby(int chyba, char premenna[])
{
    if (chyba == 1)
    {
        printf("Neplatne %s\n", premenna);
    }
    else
    {
        printf("Platne %s\n", premenna);
    }
}

int najdiZnak(char znak, char str[])
{
    int i = 0, indexZnaku = -1;
    while (str[i] != '\0')
    {
        if (str[i] == znak)
        {
            indexZnaku = i;
            return indexZnaku;
        }

        i++;
    }

    if (indexZnaku == -1)
    {
        return indexZnaku;
    }
}

int main()
{
    char meno[20];
    char priezvisko[20];
    // char znak;

    printf("Zadaj meno: ");
    scanf("%s", meno);
    printf("Zadaj priezvisko: ");
    scanf("%s", priezvisko);
    printf("Zadaj znak: ");
    // scanf("");
    // scanf("%c", znak);

    vypisChyby(!strIbaPismena(meno), "meno");

    vypisChyby(!strIbaPismena(priezvisko), "priezvisko");

    printf("Znak 'o' sa v poli %s nachadza na pozicii %d\n", meno, najdiZnak('o', meno));

    return 0;
}