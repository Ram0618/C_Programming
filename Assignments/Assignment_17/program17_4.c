#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0;
   
    for(int i = 1; i <= iRow; i++)
    {
       
       int iNo = 1;
       int iNo2 = -1;

        for(int j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%d\t",iNo);
                iNo++;
            }
            else
            {
                printf("%d\t",iNo2);
                iNo2--;
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the row:");
    scanf("%d",&iValue1);

    printf("Enter the column:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;


}