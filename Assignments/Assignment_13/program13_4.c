#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iMult = 1;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        int iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit != 0)
        {
        iMult = iMult * iDigit;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("%d", iRet);
    
    return EXIT_SUCCESS;
}