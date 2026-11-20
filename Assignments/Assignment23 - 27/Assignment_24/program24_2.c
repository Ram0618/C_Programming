#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char cValue)
{
    int i = 0;
    int iCount = 0;

    while(str[i] != '\0')
    {
        if(str[i] == cValue)
        {
            iCount++;
        }
      
        i++;
    }
   return iCount;
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

    iRet = CountChar(arr,cValue);
    printf("The frequeny of character is: %d", iRet );
   
    
    return EXIT_SUCCESS;
}