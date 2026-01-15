#include <stdio.h>

int main(){
    printf("Enter number to multiply\n");
    int start;
    scanf("%d", &start);
    printf("Enter n\n");
    int n;
    scanf("%d", &n);

    printf("Final Answer: %d\n", (start<<n));
}