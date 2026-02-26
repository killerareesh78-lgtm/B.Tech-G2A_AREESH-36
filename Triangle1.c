#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity using Triangle Inequality Theorem
    if (a + b > c && a + c > b && b + c > a) {
        printf("The sides form a triangle.\n");

        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        }
        else {
            printf("It is a Scalene triangle.\n");
        }
    }
    else {
        printf("The sides do NOT form a triangle.\n");
    }

    return 0;
}