//Check whether a number is Positive or Negative

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue < 0)
    {
        printf("The number is negative");
    }
    else if(iValue > 0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("The number is zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    CheckNumber(iValue);
    
    return EXIT_SUCCESS;
}