#include<stdio.h>
#include<stdlib.h>

double CircleArea(float iNo)
{
    double dArea = 0.0f;
    
    dArea = 3.14 * (float)iNo * (float)iNo;

    return (double)dArea;


}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter the radius of circle: \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("The Area of circle is : %f", dRet);

    return EXIT_SUCCESS;
}