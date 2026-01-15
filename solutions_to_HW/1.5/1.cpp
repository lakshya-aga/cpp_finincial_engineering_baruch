#include <stdio.h>

int minus(int a, int b)
{
    return a-b;
}
int main()
{
    int a = 10;
    int b = 5;
    printf("Result is: %d", minus(a,b));
    return 0;
}