#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;
    char ch = '\0';
   

    for(int i = 1, ch = 'A'; i <= iRow; i++)
    {
       
        for(int j = 1; j <= iColumn; j++)
        {
            printf("%c\t",ch);
        }
        ch++;
     printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows:");
    scanf("%d",&iValue1);

    printf("Enter the number of columns:");
    scanf("%d",&iValue2);


    Pattern(iValue1, iValue2);


    return EXIT_SUCCESS;
}