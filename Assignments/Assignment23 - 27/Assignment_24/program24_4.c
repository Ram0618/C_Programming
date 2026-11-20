#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int LastChar(char *str, char cValue)
{
    int i = strlen(str) - 1;
    int index = -1;

    while(i >= 0)
    {
        if(str[i] == cValue)
        {
            index = i;
            break;
        }
      
        i--;
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

    iRet = LastChar(arr,cValue);
    printf("The last index of character is: %d", iRet );
   
    
    return EXIT_SUCCESS;
}