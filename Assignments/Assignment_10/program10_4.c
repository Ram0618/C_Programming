#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0f;
    
    dCelsius = (fTemp - 32.0) * (5.0/9.0);

    return (double)dCelsius;


}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter the temperature: \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    printf("The Temperature in Celcius is : %f", dRet);

    return EXIT_SUCCESS;
}