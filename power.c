#include <stdio.h>

int main() {
    int base, exponent, i;
    long long power = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent (positive integer): ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("This program does not handle negative exponents.\n");
    } else {
        for (i = 1; i <= exponent; i++) {
            power = power * base;
        }

        printf("%d raised to the power %d = %lld\n", base, exponent, power);
    }

    return 0;
}