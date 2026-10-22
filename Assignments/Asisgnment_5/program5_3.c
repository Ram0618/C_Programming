//Calculate Student Grade

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if(fMarks > 100   && fMarks < 0){
        printf("marks are invalid");
        return;
    }

    if(fMarks >= 90)
    {
        printf("Grade A");
    }

    else if(fMarks >= 75 && fMarks < 90)
    {
        printf("grade B");
    }
    
    else if(fMarks >= 60 && fMarks < 75)
    {
        printf("grade C");
    }

    else if(fMarks >= 40 && fMarks < 60)
    {
        printf("grade D");
    }

    else if(fMarks < 40)
    {
        printf("Fail");
    }
}

int main()
{
    float fMarks = 0;

    printf("Enter the marks:");
    scanf("%d",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}