#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
   
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
    int iDigit = iNo % 10;
    iNo = iNo / 10;

    if(iDigit == 0)
    {
        return TRUE;
    }
}

return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;


    printf("Enter the number: ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    if(bRet)
    {
        printf("It Contains Zero.");
    }
    else
    {
        printf("It does not contain zero");
    }

    return EXIT_SUCCESS;
}