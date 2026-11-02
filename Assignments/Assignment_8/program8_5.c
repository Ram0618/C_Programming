#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt > 0; iCnt--)
    {
        iMul = iNo * iCnt;
        printf("%d\t",iMul);
    }

    
}


int main()
{
    int iValue = 0;
   
    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    TableRev(iValue);
   

    return EXIT_SUCCESS;

}