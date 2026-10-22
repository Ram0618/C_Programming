//Calculate Electricity Bill

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0;

    if(iUnits < 0)
    {
        printf("Invalid units");
        return;
    }

    if(iUnits <= 100)
    {
        fBill = 5 * iUnits;
       

    }

    else if(iUnits <= 200)
    {
        fBill = ( 100 * 5) + (7 * (iUnits - 100));
       
    }

    else if(iUnits > 200)
    {
        fBill = (100 * 5) +( 100 * 7 ) + ((iUnits - 200) * 10);
        
    }

    printf("%f",fBill);

}

int main()
{
    int iUnits = 0;

    printf("Enter consumed Units:");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}