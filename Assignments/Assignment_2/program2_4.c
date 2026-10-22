//Accept two numbers from user and display first number in second numebr of times

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    printf("Enter the Frequency: ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return EXIT_SUCCESS;
}

