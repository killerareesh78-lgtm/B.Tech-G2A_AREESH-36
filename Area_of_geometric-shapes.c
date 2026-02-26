#include <stdio.h>

int main() {
    int choice;
    float area, base, height, side, length, width, radius;

    printf("\n--- Area Calculator ---\n");
    printf("1. Triangle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("4. Circle\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter base and height of triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;

        case 2:
            printf("Enter side of square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;

        case 3:
            printf("Enter length and width of rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 4:
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 5:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}