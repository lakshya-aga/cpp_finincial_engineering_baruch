

#include <stdio.h>

int main()
{

    int start = 0;
    int end = 300;
    int step = 20;
    printf("Fahrenheit \t Celsius\n");
    while(start<=end)
    {
        printf("%d \t\t %10.1f\n", start, 5/9.0*(start-32));
        start+=step;
    }

    return 0;
}