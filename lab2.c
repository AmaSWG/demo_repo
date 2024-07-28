#include <stdio.h>

int main(){

    float h1;
    float h2;
    float h3;
    float average;
    float missing_height;

    printf("Enter height1: ");
    scanf("%d", &h1);

    printf("Enter height2: ");
    scanf("%d", &h2);

    printf("Enter height3: ");
    scanf("%d", &h3);

    printf("Enter average: ");
    scanf("%d", &average);

    missing_height = average-(h1+h2+h3);


    return 0;
}