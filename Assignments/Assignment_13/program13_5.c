#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iSumEven = 0;
    int iDigit = 0;
    int iSumOdd = 0;
    int iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        int iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }

        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
    }

    iAns = iSumEven - iSumOdd;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d", iRet);
    
    return EXIT_SUCCESS;
}