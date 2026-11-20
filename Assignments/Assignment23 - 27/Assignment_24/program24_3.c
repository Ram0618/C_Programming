#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char cValue)
{
    int i = 0;
    int index = 0;

    while(str[i] != '\0')
    {
        if(str[i] == cValue)
        {
            index = i;
        }
      
        i++;
    }
   return index;
}

int main()
{
    char arr[26];
    char cValue;
    int iRet = 0;

    printf("Enter the String: ");
    scanf("%[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);
    printf("The index of character is: %d", iRet );
   
    
    return EXIT_SUCCESS;
}