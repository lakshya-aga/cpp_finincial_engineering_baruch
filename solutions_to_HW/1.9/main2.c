#include <stdio.h>
#include <stdlib.h>

void PRINT(char ch[], int i);
void WriteToFile(char *str_file, char *str, int n_count);
int main()
{
    char ch;
    char str[10000];
    int i = 0;
    printf("Please input a string as file name, example:\nfile.txt\n");
    char *str_file;
	// Get file name.
	gets(str_file);


    while((ch = getchar())!=1)
    {
        
        if(ch=='\n')
        {
            WriteToFile(str_file, str, i);
            i=0;
        }
        str[i]=ch;
        i++;
    }
    PRINT(str, i);
    printf("CONTROl A pressed");
}
// void PRINT(char ch[], int i)
// {
//     for(int j=0; j<i; j++)
//     {
//         putchar(ch[j]);putchar('\n');
//     }
// }

void WriteToFile(char *str_file, char *str, int n)
{
	FILE* fp; // file handle
    fopen_s(&fp, str_file, "a+");
    for (int i = 0; i < n; i++)
		fputc(str[i], fp);
	

	fputc('\n', fp);


    fclose(fp);
}