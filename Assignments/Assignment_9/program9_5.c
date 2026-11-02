#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFactEven = 1;
    int iFactOdd = 1;
    int iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
        iFactOdd = iFactOdd * iCnt;
        }
        else
        {
            iFactEven = iFactEven * iCnt;
        }

    }
    iAns = iFactEven - iFactOdd;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial Difference is : %d",iRet);

    return EXIT_SUCCESS;

}