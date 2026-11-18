#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
   

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMul = 2 * iCnt;
        printf("%d\t",iMul);
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;

}