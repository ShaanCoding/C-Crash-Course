#include <stdio.h>

int main()
{
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d", i);
    // }

    int size = 10;
    int ages[] = {12, 43, 545, 3, 4, 54, 6, 7, 87, 12};

    int calculatorSize = sizeof(ages) / sizeof(ages[0]);

    // for (int i = 9; i >= 0; i--)
    // {
    //     printf("%d ", i);
    // }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", (ages[i] + 1));
    }

    int i = 0;

    while (i < 10)
    {
        printf("%d", i);
        i++;
    }

    printf("Choose a number between 0 and 9: ");
    int input;
    do
    {
        scanf("%d", &input);
        printf("%d", i);
    } while (input < 0 || input > 9);

    return 0;
}