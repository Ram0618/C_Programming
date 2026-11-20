#include<stdlib.h>
#include<stdio.h>

//!, @, #, $, %, ^, &, *
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*' || ch == '!' ))
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

    bRet = ChkSpecial(cValue);
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