#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float d, x1, x2;
    printf("Zadaj koeficienty kvadratickej rovnice: ");
    scanf("%d %d %d", &a, &b, &c);

    d = (float)b * b - 4 * a * c;

    printf("d = %d\n", (int)d);

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        printf("Korene su: %f a %f\n", x1, x2);
    }
    else if (d == 0)
    {
        x1 = (-b) / (2 * a);
        printf("Koren je: %f\n", x1);
    }

    return 0;
}