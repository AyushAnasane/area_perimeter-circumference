#include <stdio.h>

int main()
{
    int choice;
    float radius, length, width, base, height, side1, side2, side3;
    float area, perimeter_or_circumference;

    const float PI = 3.141;

    printf("Select a shape to calculate its Area and Perimeter/Circumference\n");
    printf("1. Circles\n");
    printf("2. Triangle\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1-3)\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter the radius of the circle: ");
        scanf("%f", &radius);

        area = PI * radius * radius;
        perimeter_or_circumference = 2 * PI * radius;

        printf("Area: %.2f\n", area);
        printf("Circumference: %.2f\n", perimeter_or_circumference);
        break;

    case 2:
        printf("\nEnter the base and height of the triangle for Area: ");
        scanf("%f %f", &base, &height);

        area = 0.5 * base * height;

        printf("Enter the lengths of the three sides for Perimeter: ");
        scanf("%f %f %f", &side1, &side2, &side3);

        perimeter_or_circumference = side1 + side2 + side3;

        printf("Area: %.2f\n", area);
        printf("Perimeter: %.2f\n", perimeter_or_circumference);
        break;

    case 3:
        printf("\nEnter the length and width of the rectangle: ");
        scanf("%f %f", &length, &width);

        area = length * width;
        perimeter_or_circumference = 2 * (length + width);

        printf("Area: %.2f\n", area);
        printf("Perimeter: %.2f\n", perimeter_or_circumference);
        break;

    default:
        printf("\nInvalid Choice! Please enter a number between 1 and 3.\n");
        break;
    }

    return 0;
}