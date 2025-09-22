#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is VALID.\n");

        if (a == b && b == c) {
            printf(" Equilateral triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles triangle\n");
        }
        else if ((a*a == b*b + c*c) ||   (b*b == a*a + c*c) || (c*c == a*a + b*b)) {
            printf("Right-angled triangle\n");
        }
        else {
            printf("Scalene triangle\n");
        }
    } else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}
