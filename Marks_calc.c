#include <stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,sum; double percent;
    printf("Enter the Marks of Physics\n");
    scanf(" %d",&s1);
    printf("Enter the Marks of Maths\n");
    scanf(" %d",&s2);
    printf("Enter the Marks of PPS\n");
    scanf(" %d",&s3);
    printf("Enter the Marks of Chemistry\n");
    scanf(" %d",&s4);
    printf("Enter the Marks of Biology\n");
    scanf(" %d",&s5);
    sum=s1+s2+s3+s4+s5;
    printf("The sum of the 5 Subject is = %d \n",sum);
    percent=sum/5.0;
    printf("Percentage = %.2lf",percent);
    return 0;

}