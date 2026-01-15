#include <stdio.h>
struct Article{
    int article_number;
    int quantity;
    char description[20];
};
void Print(Article *a)
{
    printf("%d\n", a->article_number);
    printf("%d\n", a->quantity);
    printf("%s\n", a->description);
}
int main()
{
    Article a = {1,10, "Shampoo Bottle"};
    Print(&a);
}