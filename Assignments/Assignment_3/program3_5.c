#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0;

BOOL ChkVowel( char CValue)
{
    if(CValue == 'a' || CValue == 'b' || CValue == 'c' || CValue == 'i' || CValue == 'o' || CValue == 'u' || CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL check = FALSE;

    printf("Enter the Character: ");
    scanf("%c",&cValue);

    check = ChkVowel(cValue);

    if(check == TRUE)
    {
        printf("The character is vowel.");
    }
    else
    {
        printf("The Character is not vowel.");
    }

    return EXIT_SUCCESS;
}