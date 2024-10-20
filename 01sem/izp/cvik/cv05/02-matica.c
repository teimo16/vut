#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *suborID;
    int matica[4][12];
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

        printf("Diagonala:\n");
        for (int i = 0; i < 4; i++)
        {
            printf("\t%d", matica[i][i]);
        }
        printf("\n");

        printf("Transponovana matica:\n");
        for (int riadok = 0; riadok < 12; riadok++)
        {
            for (int stlpec = 0; stlpec < 4; stlpec++)
            {
                printf("\t%d", matica[stlpec][riadok]);
            }
            printf("\n");
        }

        printf("Prve cislo matice je: '%d'\n", matica[0][0]);
        fclose(suborID);
    }
    else
    {
        printf("Subor sa nepodarilo otvorit\n");
    }

    return 0;
}