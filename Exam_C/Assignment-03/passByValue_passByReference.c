/*
#include <stdio.h>

void increment(int x)
{
    x = x + 1;
    printf("Inside function: x = %d\n", x);
}

int main()
{
    int x;
    scanf("%d", &x);
    increment(x);
    printf("Main function: x = %d\n", x);
    return 0;
}
*/
#include <stdio.h>

void increment(int *x)
{
    *x = *x + 1;
    printf("Inside function: x = %d\n", *x);
}

int main()
{
    int x;
    scanf("%d", &x);
    increment(&x);
    printf("Main function: x = %d\n", x);
    return 0;
}
