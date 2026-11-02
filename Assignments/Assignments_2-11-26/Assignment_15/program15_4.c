#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 1;

    iMul = iNo1 * iNo2 * iNo3;

    return iMul;
   
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue1);

    printf("Enter the Number: ");
    scanf("%d",&iValue2);

    printf("Enter the Number: ");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1,iValue2, iValue3);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}
