#include<stdio.h>
#include<stdlib.h>

void struprx(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("%s",str);
}

int main()
{
    char arr[26];
    printf("Enter the string : ");
    scanf("%[^'\n']", arr);

    struprx(arr);
    return EXIT_SUCCESS;
}