#include <stdio.h>
void main()
{
    int n;
    printf("Enter the age to check the eligibility to vote.");
    scanf("%d",&n);
    if(n>=18)
    {
        printf("The person is eligible to vote");
    }
    else{
        printf("Not Eligible");
    }
}