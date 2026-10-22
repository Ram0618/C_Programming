//Identify Character Type

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >=  'a' && cValue <= 'z')
    {
        printf("It is Lowercase");
    }

    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("It is UpperCase");
    }

    else if(cValue >= '0' && cValue <= '9'  )
    {
        printf("It is a digit");
    }

    else
    {
        printf("It is a special Character");
    }


}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}