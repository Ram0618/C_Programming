#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void StrRevX(char *str)
{
    
    int i = strlen(str) - 1;
    int index = 0;
    char temp;
    
    while(index < i)
    {
        temp = str[i];
       str[i] = str[index];
       str[index] = temp;

       i--;
       index++;
    }

   
   
}

int main()
{
    char arr[26];
   

    printf("Enter the String: ");
    scanf("%[^\n]", arr);

    StrRevX(arr);

    printf("%s",arr);

    return EXIT_SUCCESS;
}