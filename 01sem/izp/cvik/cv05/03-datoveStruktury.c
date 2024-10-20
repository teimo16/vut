#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

struct bod_t
{
    int x;
    int y;
    int z;
};

struct bod_t bodZMatice(int poziciaR, int poziciaS, int matica[4][12])
{
    // body v matici ulozene po zlozkach x, y, z
    // zlozka x je na pozicii poziciaR, 3*poziciaS
    struct bod_t bod;
    bod.x = matica[poziciaR][poziciaS * 3];
    bod.y = matica[poziciaR][poziciaS * 3 + 1];
    bod.z = matica[poziciaR][poziciaS * 3 + 2];

    return bod;
}

int bodDajZ(struct bod_t bod)
{
    return bod.z;
}

void bodVypis(struct bod_t bod)
{
    printf("[%d, %d, %d]\n", bod.x, bod.y, bod.z);
}

bool bodPorovnajBody(struct bod_t bod1, struct bod_t bod2)
{
    if (bod1.x == bod2.x && bod1.y == bod2.y && bod1.z == bod2.z)
    {
        return true;
    }
    else
    {
        return false;
    }
}

float bodVzdialenostOdNuly(struct bod_t bod)
{
    float vektor;
    vektor = sqrt(bod.x * bod.x + bod.y * bod.y + bod.z * bod.z);

    return vektor;
}

int main()
{
    FILE *suborID;
    int matica[4][12];

    struct bod_t pozicia;
    // citanie zo suboru
    suborID = fopen("matica.txt", "r");

    if (suborID != NULL)
    {
        int tmp;
        char slovo[10];

        for (int riadok = 0; riadok < 4; riadok++)
        {
            for (int stlpec = 0; stlpec < 12; stlpec++)
            {
                fscanf(suborID, "%9s", slovo);
                tmp = atoi(slovo);
                matica[riadok][stlpec] = tmp;
            }
        }

        for (int riadok = 0; riadok < 4; riadok++)
        {
            for (int stlpec = 0; stlpec < 12; stlpec++)
            {
                printf("\t%d", matica[riadok][stlpec]);
            }
            printf("\n");
        }
    }
    printf("\n");

    pozicia = bodZMatice(1, 1, matica);
    printf("suradnica x: %d\n", pozicia.x);

    printf("Suradnica z: %d\n", bodDajZ(bodZMatice(0, 0, matica)));

    bodVypis(bodZMatice(0, 0, matica));

    printf("Body [0,0] a [0,1] sa %s\n", bodPorovnajBody(bodZMatice(0, 0, matica), bodZMatice(0, 1, matica)) ? "rovnaju" : "nerovnaju");

    printf("Body [0,2] a [2,1] sa %s\n", bodPorovnajBody(bodZMatice(0, 2, matica), bodZMatice(2, 1, matica)) ? "rovnaju" : "nerovnaju");

    printf("Vzdialenost bodu [2,0] od nuly je %f\n", bodVzdialenostOdNuly(bodZMatice(2, 0, matica)));

    return 0;
}