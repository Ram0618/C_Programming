//Accept number from user and check whether number is even or odd

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0){
        return TRUE;
    }

    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number:");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);
    if(bRet == TRUE){
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

    return EXIT_SUCCESS;
}