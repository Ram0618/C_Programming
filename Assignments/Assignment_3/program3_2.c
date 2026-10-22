//Write a program which accept number from user and print even factors of that 

#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
    int iCnt  = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0){
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number:");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}