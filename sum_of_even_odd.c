#include <stdio.h>

int main() {
    int N, i;
    int sumEven = 0, sumOdd = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }

    printf("Sum of even numbers up to %d = %d\n", N, sumEven);
    printf("Sum of odd numbers up to %d = %d\n", N, sumOdd);

    return 0;
}