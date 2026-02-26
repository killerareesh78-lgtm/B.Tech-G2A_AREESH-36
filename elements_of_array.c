#include<stdio.h>
void main()
{
    int a[100],i,n;
    printf("Enter the size <=100\n");
    scanf("%d",&n);
    printf("Enter the Array Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Array Elements Are:\n");
     for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}