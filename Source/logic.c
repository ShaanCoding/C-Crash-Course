#include <stdio.h>
// #include <stdbool.h>     // bloat

int main()
{

    if (1)
    {
        printf("This is true\n");
    }
    else
    {
        printf("This is false\n");
    }

    printf("-=== Welcome Please Enter Your Age ==-\n");
    int age;

    scanf("%d", &age);

    if (age < 18)
    {
        printf("This is a child!\n");
    }
    else
    {
        printf("This is an adult\n");
    }

    int menuChoice = 2;

    switch (menuChoice)
    {
    case 0:
        printf("Case 0\n");
        break;
    case 1:
        printf("Case 1\n");
        break;
    case 2:
        printf("Case 2\n");
        break;
    case 3:
        printf("Case 3\n");
        break;
    default:
        printf("Case Default\n");
        break;
    }

    return 0;
}
