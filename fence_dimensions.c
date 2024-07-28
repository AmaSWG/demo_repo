#include <stdio.h>
/*
    width = 3/4 length

    perimeter = 2( length + width )
              = 2(7/4 length)
              = 7/2*length

    length = 2/7*perimeter
*/
int main(){

    float width, length, perimeter;

    printf("Enter the perimeter of the fence: ");
    scanf("%f", &perimeter);

    length = perimeter*2/7;
    width = length*3/4;

    printf("The length is %.2f and the width is %.2f.", length, width);


    return 0;
}
