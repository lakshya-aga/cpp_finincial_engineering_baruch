#include <stdio.h>
void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a=10;
    int b=20;
    swap(&a, &b);
    printf("a=%d; b=%d", a, b);
}