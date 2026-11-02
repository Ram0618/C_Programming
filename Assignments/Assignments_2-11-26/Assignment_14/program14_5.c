#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int iSumFact = 0;
    int iCnt = 0;
    int iSumNonFact = 0;
    int iAns = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }

        else
        {
            iSumFact = iSumFact + iCnt;
        }
    }
    iAns = iSumFact - iSumNonFact;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d", iRet);
    
    return EXIT_SUCCESS;
}