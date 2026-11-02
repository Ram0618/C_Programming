#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int Conv = 0;
    
    Conv = iNo * 1000; 

    return Conv;


}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the distance: \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("The Distance in meter is : %d", iRet);

    return EXIT_SUCCESS;
}