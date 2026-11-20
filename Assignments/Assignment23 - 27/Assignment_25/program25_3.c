#include<stdlib.h>
#include<stdio.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch >= '0' && ch <= '9') )
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

    bRet = ChkDigit(cValue);
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