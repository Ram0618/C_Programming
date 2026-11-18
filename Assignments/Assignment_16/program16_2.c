#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    for(int i = 1; i <= iRow; i++)
    {
        ch1 = 'A';
        ch2 = 'a';
        for(int j = 1; j <= iColumn; j++){
            if(i % 2 == 0)
            {
                printf("%c\t",ch2);
                ch2++;
               

            }
            else
            {
                printf("%c\t",ch1);
                ch1++;
            }

        
    }
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