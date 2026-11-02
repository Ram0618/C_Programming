#include<stdio.h>
#include<stdlib.h>


int DollartoINR(int iNo)
{
    int iConv = 0;

    if(iNo < 0)
    {
        printf("Ivalid Input\n");
        exit(0);
    }

    iConv = iNo * 70;

    return iConv;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of USD:\n");
    scanf("%d",&iValue);

    iRet = DollartoINR(iValue);
    printf("Value in INR is: %d",iRet);

    return EXIT_SUCCESS;
}