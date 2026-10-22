#include<stdio.h>
#include<stdlib.h>

int Display()
{
    int i = 0;
   

    while(i <= 5)
    {
        printf("%d\n",i);
        i++;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}

