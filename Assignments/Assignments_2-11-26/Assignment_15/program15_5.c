#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1, int iNo2)
{
    float fPer = 0.0f;

    fPer = ((float)iNo1/(float)iNo2) * 100;

    return (float)fPer;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter the Obtained Marks: ");
    scanf("%d",&iValue1);

    printf("Enter the Total Marks: ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("%f",fRet);

    return EXIT_SUCCESS;
}
