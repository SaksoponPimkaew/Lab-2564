#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main() {
    double side1, side2, side3, TriangleArea, tside;
    scanf_s("%lf %lf %lf", &side1, &side2, &side3);
    if (side1 == side2 && side2 == side3) {
        TriangleArea = (sqrt(3) / 4) * (pow(side1, 2));
        printf("This is equilateral triangle and area is %.4lf", TriangleArea);
    }
    else if (side1 * side2 * side3 >0) {
        tside = (side1 + side2 + side3) / 2;
        TriangleArea = sqrt(tside * (tside - side1) * (tside - side2) * (tside - side3));
        printf("Triangle and area is %.4lf", TriangleArea);
    }
    else printf("Error");
    return 0;
}