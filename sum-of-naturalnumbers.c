#include <stdio.h>

int main() {
    int num, i,sum=0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    //printf("Factors of %d are:\n", num);

    for(i = 1; i <= num; i++) {
       sum=sum+i;
       
        
    }
    printf("Sum = %d", sum);

    return 0;
}