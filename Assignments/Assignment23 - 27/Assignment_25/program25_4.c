#include<stdlib.h>
#include<stdio.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch >= 'a' && ch <= 'z') )
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

    bRet = ChkSmall(cValue);
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