#include<stdlib.h>
#include<stdio.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') )
    {
        return TRUE;
    }

    return FALSE;
}
int main()
{
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter the Character: ");
    scanf("%c", &cValue);

    bRet = ChkAlpha(cValue);
    if(bRet)
    {
        printf("True");

    }
    else
    {
        printf("False");
    }
    return EXIT_SUCCESS;
}