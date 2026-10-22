//Write a program which accept one number from user and print that number of even numbers on screen

#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iCount = 2;

    if(iNo < 0){
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++){
        printf("%d ",iCount);
        iCount += 2;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number:");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}