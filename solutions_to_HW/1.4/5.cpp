#include <stdio.h>

int main()
{

    int start = 0;
    int end = 19;
    int step = 1;
    printf("Celsius \t Fahrenheit\n");
    
    for(; start<=end; start+=step)
    {
        printf("%d \t\t %10.1f\n", start, start*9/5.0+32);
    }

    return 0;
}