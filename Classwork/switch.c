#include <stdio.h>
#include <math.h>
#include <stdlib.h>  // For exit()

int main(){
    int choice;
    float a, b, c, d, x1, x2, x;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0) {
        printf("Cannot divide by zero\n");
        exit(0);  // Exiting if a is zero
    }

    d = b * b - 4 * a * c;  // Calculate discriminant

    // Determine which case to handle
    if (d > 0) {
        choice = 1;  // Two real roots
    } else if (d == 0) {
        choice = 2;  // One real root
    } else {
        choice = 3;  // Complex roots
    }

    // Use `switch` to handle the different cases based on the value of `choice`
    switch (choice) {
        case 1:
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("Real and distinct roots:\n");
            printf("x1 = %f, x2 = %f\n", x1, x2);
            break;

        case 2:
            x = -b / (2 * a);
            printf("Real and equal roots:\n");
            printf("x = %f\n", x);
            break;

        case 3:
            printf("Complex roots\n");
            float realPart = -b / (2 * a);
            float imagPart = sqrt(-d) / (2 * a);
            printf("x1 = %f + %fi\n", realPart, imagPart);
            printf("x2 = %f - %fi\n", realPart, imagPart);
            break;

        default:
            printf("Something went wrong\n");
            break;
    }

    return 0;
}
