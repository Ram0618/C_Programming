#include<stdlib.h>
#include<stdio.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    int i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
        str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U' )
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
    BOOL bRet = FALSE;

    printf("Enter the String: ");
    scanf("%25[^\n]", arr);

    bRet = ChkVowel(arr);

    if(bRet)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return EXIT_SUCCESS;
}