#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
   printf("Decimal : %d\n", ch);
   printf("Hexamdecimal : %X\n", ch);
   printf("Octal : %o\n",ch);
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the Character: ");
    scanf("%c",&cValue);
    
    Display(cValue);

    return EXIT_SUCCESS;
}