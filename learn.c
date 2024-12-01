#include <stdio.h>

void userData(char name[], int age, char place[])
{
    printf("Name : %s\n", name);
    printf("Age : %d\n", age);
    printf("Place : %s\n", place);
}

int main()
{
    userData("Yathish", 24, "Mangalore");
    return 0;
}