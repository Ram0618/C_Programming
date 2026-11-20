#include<stdlib.h>
#include<stdio.h>


int DisplaySchedule(char ch)
{
    int iTime  = 0;
    if(ch == 'A')
    {
        iTime = 7.0;
    }

    else if(ch == 'B')
    {
        iTime = 8.30;
    }

    else if(ch == 'C')
    {
        iTime = 9.20;
    }

    else if(ch == 'D')
    {
        iTime = 10.20;
    }
    else
    {
        return -1;
    }
    

    return iTime;
}
int main()
{
    char cValue = '\0';
    float fRet = 0.0f;

    printf("Enter your Division: ");
    scanf("%c", &cValue);

    fRet = DisplaySchedule(cValue);

    if(fRet != -1)
    {
    printf("Your exam at %.2f AM",fRet);
    }
    else
    {
        printf("Invalid Input");
    }
    return EXIT_SUCCESS;
}