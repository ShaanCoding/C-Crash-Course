#include <stdio.h>

#include <stdbool.h>

int main()
{
    int a = 10;
    double b = 10.5; // Decimals - 64 bit number
    float c = 10.5;  //Similar but slightly different to double - 32 bit number

    printf("%lu\n", sizeof(b)); //8 Bytes = 64 bits
    printf("%lu\n", sizeof(c)); //4 Bytes = 32 bits

    char characterA = 'a';

    char characterArray[] = "Character Array"; // Aka a STRING

    bool f = false;

    // int zero = 0.999999999;
    // printf("zero is %d\n", zero);

    int slices = 17;
    int people = 2;

    // double slicesPerPerson = slices / people; // This will give 8 since dividing an int by an int returns an int

    double slicesPerPerson = (double)slices / (double)people;

    printf("The number of slices per person is %.2f\n", slicesPerPerson);

    return 0;
}