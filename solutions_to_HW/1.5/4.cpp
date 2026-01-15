#include <stdio.h>
void printnumber(int i)
{
    if(i<0)
    {
        putchar('-'); putchar(' ');
        i=-i;
    }
    if(i==0)
    return;
    printnumber(i/10);
    putchar(i%10+'0'); putchar(' ');
}
int main()
{
    int i;
    scanf("%d", &i);
    printnumber(i);
}