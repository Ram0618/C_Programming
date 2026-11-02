#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);
    if(bRet)
    {
        printf("Greater.");
    }
    else
    {
        printf("Smaller.");
    }

    return EXIT_SUCCESS;
}
