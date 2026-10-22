//Check Voting Eligibility

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age");
        return;
    }

    if(iAge >= 18)
    {
        printf("Eligible to Vote");

    }
    else
    {
        printf("Not Eligible to vote");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your Age:");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}