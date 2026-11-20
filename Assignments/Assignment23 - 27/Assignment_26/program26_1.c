#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
   printf("%-10s %-12s %-10s %-10s\n",
    "Decimal","Character","HEXA","Octal");
    printf("---------------------------------------------------------------------------\n");
    for(int i = 0; i <= 255; i++)
    {
       
        printf("%-10d %-12c %-10X %-10o\n",i,i,i,i);
       
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}