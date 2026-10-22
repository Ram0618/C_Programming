//Check Leap year

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear < 0)
   {
        printf("Invalid Year");
        return;
    }

    if((iYear % 400 == 0 ) || (iYear % 4 == 0) && (iYear % 100 != 0))
    {
        printf("%d is a leap year", iYear);
    }
    else
    {
        printf("%d is not a leap Year", iYear);
    }

}

int main()
{
    int iYear = 0;

    printf("Enter the year:");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}