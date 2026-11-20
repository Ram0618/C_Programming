#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int i = 0;
    int iCntS = 0;
    int iCntC = 0;

  
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            iCntS++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            iCntC++;
        }
        i++;
    }

    return iCntS - iCntC;
}

int main()
{
    char arr[26];
    int iRet = 0;

    printf("Enter the String: ");
    scanf("%25[^\n]", arr);

    iRet = Difference(arr);
    
    
    printf("%d",iRet);
    

    return EXIT_SUCCESS;
}