#include <stdio.h>

int main(){

    //Apparently just calculating is too much work

    //As if typing all this bs isn't

    const double PI = 3.14159;
    double radius;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    double circumference = 2*PI*radius;
    double area = PI*radius*radius;

    printf("\nCircumference: %lf", circumference);
    printf("\nArea: %lf", area);

    return 0;
}