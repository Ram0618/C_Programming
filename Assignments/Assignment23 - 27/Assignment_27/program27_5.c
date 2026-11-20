#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Reverse(char *str)
{
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while(i < j)
    {
       temp = str[i];
       str[i] = str[j];
       str[j] = temp;

       i++;
       j--;
    }
    printf("Revrese String: %s", str );
}

int main()
{
    char arr[26];
    int iRet = 0;

    printf("Enter the String: ");
    scanf("%25[^\n]", arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}