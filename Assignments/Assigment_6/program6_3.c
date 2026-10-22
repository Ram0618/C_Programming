// Calculate Shopping Discount

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount  = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid Amount");
        return;
    }

    if(fAmount < 1000)
    {
        fFinalAmount = fAmount;
    }

    else if(fAmount >= 1000 && fAmount < 5000)
    {
        fDiscount  = (10.0f/100.0f)* fAmount;
        fFinalAmount = fAmount - fDiscount;
    }

    else if(fAmount >= 5000)
    {
        fDiscount  = (20.0f/100.0f)* fAmount;
        fFinalAmount = fAmount - fDiscount;
    }

    printf("Payable Amount : %f", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter the purchase Amount: ");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}