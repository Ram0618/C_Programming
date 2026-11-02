#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("The Factorial of the number is: %d",iRet);

    return EXIT_SUCCESS;

}