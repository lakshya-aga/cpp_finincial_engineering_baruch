#include <stdio.h>

int main(){
    float b, h;
    printf("Enter Base\n");
    scanf("%f", &b);
    printf("Enter Height\n");
    scanf("%f", &h);
    float ans = b*h/2;
    printf("%f", ans);
    return 0;
}