#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }

    return FALSE;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number: ");
    scanf("%d",&iValue1);

    printf("Enter the Number: ");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1,iValue2);
    if(bRet)
    {
        printf("The number are equal");
    }
    else
    {
        printf("Not Equal");
    }

    return EXIT_SUCCESS;
}
