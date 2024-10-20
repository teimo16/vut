#include <stdio.h>

int main()
{
    FILE *suborID;
    // citanie zo suboru
    suborID = fopen("01-subor.c", "r");

    if (suborID != NULL)
    {
        char slovo[100];
        fscanf(suborID, "%99s", slovo);
        printf("Prve slovo suboru je: '%s'\n", slovo);
        fclose(suborID);
    }
    else
    {
        printf("Subor sa nepodarilo otvorit\n");
    }

    // zapis do suboru
    suborID = fopen("log.txt", "w");

    if (suborID != NULL)
    {
        fprintf(suborID, "aooj\n");
        fclose(suborID);
    }
    else
    {
        printf("Subor sa nepodarilo otvorit\n");
    }

    return 0;
}