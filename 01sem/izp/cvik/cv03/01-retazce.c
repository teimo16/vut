#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char r[101];

    printf("Zadaj retazec: ");
    scanf("%s", r);
    printf("Zadany retazec:\n\t%s\n", r);

    int dlzkaPola = 0;
    int pocetCisiel = 0;
    int pocetPismen = 0;

    while (r[dlzkaPola] != '\0')
    {
        // pocitanie pismen a cisiel
        if (r[dlzkaPola] >= 48 && r[dlzkaPola] <= 57)
        {
            pocetCisiel++;
        }
        else if ((r[dlzkaPola] >= 65 && r[dlzkaPola] <= 90) || (r[dlzkaPola] >= 97 && r[dlzkaPola] <= 122))
        {
            pocetPismen++;
        }

        // zmena velkosti pismen
        if (r[dlzkaPola] >= 65 && r[dlzkaPola] <= 90)
        {
            r[dlzkaPola] += 32;
        }
        else if (r[dlzkaPola] >= 97 && r[dlzkaPola] <= 122)
        {
            r[dlzkaPola] -= 32;
        }
        dlzkaPola++;
    }

    printf("Dlzka retazca: %d\n", dlzkaPola);
    printf("Pocet pismen v retazci: %d\n", pocetPismen);
    printf("Pocet cisiel v retazci: %d\n", pocetCisiel);
    printf("Retazec po premeneni velkych pismen na male: \n\t%s\n", r);

    dlzkaPola = 0;
    char zamena = argv[1][0];
    // prekonvertovanie argumentu
    if (zamena >= 65 && zamena <= 90)
    {
        zamena += 32;
    }
    else if (zamena >= 97 && zamena <= 122)
    {
        zamena -= 32;
    }

    // vymena znaku podla argumentu
    while (r[dlzkaPola] != '\0')
    {
        if (r[dlzkaPola] == zamena)
        {
            r[dlzkaPola] = '-';
        }

        dlzkaPola++;
    }
    printf("Retazec po vymeneni znaku z argumentu: \n\t%s\n", r);

    int kluc = atoi(argv[2]);

    dlzkaPola = 0;
    while (r[dlzkaPola] != '\0')
    {
        if (r[dlzkaPola] >= 65 && r[dlzkaPola] <= 90)
        {
            r[dlzkaPola] += kluc;

            while (r[dlzkaPola] > 90)
            {
                r[dlzkaPola] -= 26;
            }
        }
        else if (r[dlzkaPola] >= 97 && r[dlzkaPola] <= 122)
        {
            r[dlzkaPola] += kluc;

            while (r[dlzkaPola] > 122)
            {
                r[dlzkaPola] -= 26;
            }
        }

        dlzkaPola++;
    }

    printf("Retazec po aplikovani sifry: \n\t%s\n", r);

    // // porovnanie retazcov
    // char retazec1[101], retazec2[101];

    // printf("Zadajte prvy retazec pre porovnanie: ");
    // scanf("%s", retazec1);
    // printf("Zadajte druhy retazec pre porovnanie: ");
    // scanf("%s", retazec2);

    // dlzkaPola = 0;

    // while (dlzkaPola < 100)
    // {
    //     if (retazec1[dlzkaPola] != retazec2[dlzkaPola])
    //     {
    //         printf("Retazce sa nezhoduju\n");
    //         return 0;
    //     }

    //     dlzkaPola++;
    // }
    // printf("Retazce sa zhoduju\n");

    return 0;
}