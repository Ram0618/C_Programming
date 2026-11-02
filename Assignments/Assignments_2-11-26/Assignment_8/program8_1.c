#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small\n");
    }
    else if(iNo > 50 && iNo <= 100)
    {
        printf("Medium\n");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
}


int main()
{
    int iValue = 0;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;

}