#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    int i = 0;
    char arr[26];
    int iCnt = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            arr[iCnt] = str[i];
            iCnt++;
        }
      
        i++;
    }
    arr[iCnt] = '\0';
    printf("%s",arr);
}

int main()
{
    char arr[26];
    int result[26];

    printf("Enter the String: ");
    scanf("%[^\n]",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;

}