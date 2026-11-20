#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
        if(ch >= 'a' && ch <= 'z' )
        {
            ch = ch - 32;
            printf("%c",ch);
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
            printf("%c",ch);
        }
        else
        {
            printf("%c",ch);
        }
    
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the Character: ");
    scanf("%s",&cValue);
    
    Display(cValue);
    
    return EXIT_SUCCESS;
}