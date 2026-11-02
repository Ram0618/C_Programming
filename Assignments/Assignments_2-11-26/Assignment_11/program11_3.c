#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    if(iEnd < iStart || iEnd < 0  ||iStart < 0)
    {
        printf("Invalid Input");
        exit(EXIT_FAILURE);
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0,  iValue2 = 0;
    int iRet = 0;

    printf("Enter the first number:");
    scanf("%d",&iValue1);

    printf("Enter the second number:");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1 , iValue2);
    printf("The addition of numbers in the range is : %d", iRet);
    return EXIT_SUCCESS;
}