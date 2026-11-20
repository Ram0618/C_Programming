#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkChar(char *str, char cValue)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == cValue)
        {
            return TRUE;
        }
      
        i++;
    }
   return FALSE;
}

int main()
{
    char arr[26];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter the String: ");
    scanf("%[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    bRet = chkChar(arr,cValue);
    if(bRet){
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
    
    return EXIT_SUCCESS;
}