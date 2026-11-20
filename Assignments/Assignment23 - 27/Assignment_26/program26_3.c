#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
        if(ch >= 'a' && ch <= 'z' )
        {
            for(char i = ch; i >= 'a'; i--)
            {
                printf("%c\t",i);
            }
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
             for(char i = ch; i <= 'Z'; i++)
            {
                printf("%c\t",i);
            }
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
    scanf("%c",&cValue);
    
    Display(cValue);
    
    return EXIT_SUCCESS;
}