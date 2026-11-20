#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int i = 0;
    int iCount = 0;

    if(*str == '\0')
    {
        return -1;
    }

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
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
    scanf("%[^\n]", arr);

    iRet = CountSmall(arr);
    
    if(iRet != -1)
    {
    printf("%d",iRet);
    }

    return EXIT_SUCCESS;
}