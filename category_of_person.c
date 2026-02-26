#include <stdio.h>
void main()
{
    int n;
    printf("Enter the age of a person to be checked \n");
    scanf("%d",&n);
    if(n>=0 && n<=12)
    {
        printf("The person is child.");
    }
    else if(n>=13 && n<=17){
        printf("The person is teenager. ");
    }
    else if(n>=18 && n<=60)
    {
        printf("The person is Adult. ");
    }
    else if(n>60 )
    {
        printf("The person is Senior Citizen.");
    }
}