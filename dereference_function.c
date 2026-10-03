#include <stdio.h>

void displayValue(int *ptr)
{
    printf("Value through dereference: %d\n", *ptr);
}

int main()
{
    int number = 350;

    displayValue(&number);

    return 0;
}
