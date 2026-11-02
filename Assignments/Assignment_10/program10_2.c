#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0f;
    
    dArea = (float)fWidth * (float)fHeight;

    return (double)dArea;


}

int main()
{
    float fValue1 = 0.0f, fValue2 =0.0f;
    double dRet = 0.0f;

    printf("Enter the Area in square feet: \n");
    scanf("%f",&fValue1);

    dRet = RectArea(fValue1, fValue2);
    printf("The Area of Rectangle is : %f", dRet);

    return EXIT_SUCCESS;
}