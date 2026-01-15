/* Calculate the length of a string */
#include <stdio.h> 
#define MAXLINE 30 

// String lenght declaration 
int Length(char str[]);  
int main() {  
    char string[MAXLINE+1];  
    int c;    
    int i=0;     

    printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);

    while ((c=getchar())!=EOF && i<MAXLINE)  {   
    string[i++]=(char)c; 
    } 
    string[i]='\0';  
    printf("String length is %d\n", Length(string));
    return 0; 
} /* Implement the Length() function here */  
int Length(char str[]) {  
    int i=0;  
    while (str[i]!='\0')  
        i++;  
    return i;  
}