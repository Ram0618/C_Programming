#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dSqrm = 0.0f;

    dSqrm = iValue * 0.0929;

    return (double)dSqrm;


}

int main()
{
    int iValue = 0;
    double dRet = 0.0f;

    printf("Enter the area in Square Feet \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("The Area in Square Meter is : %f", dRet);

    return EXIT_SUCCESS;
}