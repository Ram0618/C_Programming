#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    int i = 0;
    while(str[i] != '\0'){

        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;

       
    }
     printf("%s",str);
}

int main()
{
    char arr[26];
    

    printf("Enter the String: ");
    scanf("%[^'\n']",arr);

    strlwrx(arr);

    return EXIT_SUCCESS;
}