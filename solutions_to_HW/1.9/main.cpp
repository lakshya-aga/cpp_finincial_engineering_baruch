#include <stdio.h>
void PRINT(char ch[], int i);
int main()
{
    char ch;
    char str[10000];
    int i = 0;
    while((ch = getchar())!=1)
    {
        
        if(ch=='\n')
        {
            PRINT(str, i);
            i=0;
        }
        str[i]=ch;
        i++;
    }
    PRINT(str, i);
    printf("CONTROl A pressed");
}
void PRINT(char ch[], int i)
{
    for(int j=0; j<i; j++)
    {
        putchar(ch[j]);putchar('\n');
    }
}