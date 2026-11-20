#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCount =0;
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
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
    int iRet = 0;

    printf("Enter the String: ");
    scanf("%[^\n]",arr);

    iRet = CountWhite(arr);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}