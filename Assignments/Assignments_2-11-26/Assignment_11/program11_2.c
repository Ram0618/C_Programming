#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iEnd < iStart)
    {
        printf("Invalid Input");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0,  iValue2 = 0;

    printf("Enter the first number:");
    scanf("%d",&iValue1);

    printf("Enter the second number:");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1 , iValue2);

    return EXIT_SUCCESS;
}