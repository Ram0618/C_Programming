//Check Admission Eligibility

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks , int iAge)
{
    if(iAge < 0 || fMarks > 100 || fMarks < 0)
    {
        printf("Invalid output");
        return;
    }

    if(iAge >= 17 && fMarks >= 60)
    {
        printf("Eligible for Admission");

    }

    else
    {
        printf("Not eligible");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d",&fMarks,&iAge);

    CheckAdmission(fMarks, iAge );

    return EXIT_SUCCESS;
}