#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        int iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit >= 3 && iDigit <= 7)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("The count is: %d", iRet);
    
    return EXIT_SUCCESS;
}