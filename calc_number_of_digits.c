#include<stdio.h>
void main()
{
    int n,rev=0,r,c=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    printf("Number of digits= %d",c);
}
