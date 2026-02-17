// Program to print the alphabets from a to z

#include <stdio.h>

int main()
{
    char ch;
    printf("Alphabets from a to z:\n");
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c ", ch);
    }
    printf("\n");
    
    for(ch='A'; ch<='Z'; ch++)
    {
        printf("%c ", ch);
    }
    return 0;
}