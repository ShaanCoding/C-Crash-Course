#include <stdio.h>

int main()
{
    int x = 50;
    int y;  //Declaration
    y = 10; //Initalization

    printf("Hello World!\n");

    //This replaces %s with Hello
    printf("%s World\n", "Hello");

    printf("X: %d, Y: %d\n", x, y);

    printf("Enter an input: \n");
    int userInput;
    scanf("%d", &userInput);

    printf("You chose the value %d\n", userInput);

    char name[20]; //char array of 20 characters. '\0' takes one spot
    //This means we can only store 19 characters

    printf("Enter name: \n");
    scanf("%19s", name);

    printf("Your name is %s", name);

    return 0;
}
