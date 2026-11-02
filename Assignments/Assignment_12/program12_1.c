#include<stdio.h>
#include<stdlib.h>

void DigitDisplay(int iNo)
{
    
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
    int iDigit = iNo % 10;
    iNo = iNo / 10;

    printf("%d\n",iDigit);
}
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    DigitDisplay(iValue);

    return EXIT_SUCCESS;
}