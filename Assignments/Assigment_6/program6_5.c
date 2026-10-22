//Calculate Employee Bonus

#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(fSalary < 0 && iYears < 0)
    {
        printf("Invalid Input");
        return;

    }

    if(iYears < 5)
    {
        fBonus = (5.0f/100.0f) * fSalary;
    }
    else if(iYears <= 10 && iYears >=5 )
    {
        fBonus = (10.0f/100.0f) * fSalary;
    }
    else if(iYears > 10)
    {
        fBonus = (15.0f/100.0f) * fSalary;
    }

    printf("Bonus is %f",fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enetr Salary and years of service:");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}
