//Check ivisibility by 3 and 5

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 5 == 0) && (iValue % 3 == 0))
    {
        printf("Divisible by both");
    }

    else if((iValue % 3) == 0 && (iValue % 5) != 0)
    {
        printf("Divisible by 3 only");
    }

    else if((iValue % 5 ) == 0 && (iValue % 3) != 0)
    {
        printf("Divisible by 5 only");
    }

    else if((iValue % 5 ) != 0 && (iValue % 3) != 0)
    {
        printf("Not Divible by either");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter the number:");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}