#include <stdio.h>
#include <math.h>

int main(){

    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");5
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C: %lf ", C);
    

    return 0;
}