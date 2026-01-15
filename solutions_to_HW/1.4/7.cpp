

#include <stdio.h>

int main()
{
    printf("Enter string\n");
    char ch=getchar();
    int c1,c2,c3,c4,others;
    c1=c2=c3=c4=others=0;
    while(ch!=EOF)
    {
        switch (ch)
        {
            case '1': c1++;
            break;
            case '2': c2++;
            break;
            case '3': c3++;
            break;
            case '4': c4++;
            break;
            default: others++;
        }
        ch=getchar();
    }
    printf("Count 1: %d\n", c1);
    printf("Count 2: %d\n", c2);
    
    printf("Number three appears %s times\n", c3==0?"zero":c3==1?"one":c3==2?"two":"more than 2");
    printf("Count 4: %d\n", c4);
    printf("Count Others: %d\n", others);
    return 0;
}

