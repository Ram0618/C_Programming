#include<stdlib.h>
#include<stdio.h>

int CountCapital(char *str)
{
    int i = 0;
    int iCount = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
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

    iRet = CountCapital(arr);
    printf("The count of Capital letter is : %d" , iRet);

    return EXIT_SUCCESS;
}