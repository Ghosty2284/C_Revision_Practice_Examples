#include<stdio.h>

int main()
{
    char name;
    printf("Enter a character: ");
    scanf("%c", &name);

    if (name == 'a' || name == 'e' || name == 'i' || name == 'o' || name == 'u' ||
        name == 'A' || name == 'E' || name == 'I' || name == 'O' || name == 'U')
    {
        printf("The character is a vowel.\n");
    }
    else
    {
        printf("The character is not a vowel.\n");
    
    }
   
    return 0;
}