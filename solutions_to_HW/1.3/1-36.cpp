#include <stdio.h>

int main(){
    int start = 100;
    printf("%d\n", start>>2);
    if(start<0)
    printf("Arithmetic Shift");
    else
    printf("Logical Shift");
}