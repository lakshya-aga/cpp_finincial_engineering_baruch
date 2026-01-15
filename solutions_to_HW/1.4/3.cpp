

#include <stdio.h>

int main(){
    printf("Enter string\n");
    int word_count = 0, char_count = 0, new_lines = 0;
    char ch = getchar(), prev = 0;
    while(ch!=-1)
    {
        
        switch(ch){
        case ' ':       char_count++;
                        break;
        case '\n':
                        new_lines++;
                        char_count++;
                        break;
        
        default:
                        if(prev==' ' || prev==0 || prev=='\n')
                        word_count++;
                        char_count++;
            
        
    }
    prev = ch;
    ch = getchar();
    }
    printf("\nWord Count: %d, Letter Count: %d, Line Count: %d", word_count, char_count, new_lines);
    return 0;
}

