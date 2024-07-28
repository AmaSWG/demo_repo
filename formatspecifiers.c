#include <stdio.h>

int main(){
    //format specifier % - defines and formats a type of data to be displayed

    // %c - character
    // %s - string (array of characters)
    // %f - float
    // %lf - double
    // %d - integer


    //%.f - decimal precision
    //%1 - minimum field width
    //%- - left align

    /*These go in the order
        1.left align (without a sign - right aligned)
        2.minimum field width
        3.decimal precision
    */

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;
    float item4 = 50.50;

    printf("Item 1 : %.2f\n", item1); // decimal precision
    printf("Item 2 : %15f\n", item2); // minimum field width(right aligned)
    printf("Item 3 : %-f\n", item3); // left aligned
    printf("Item 4 : %-15.2f\n", item4);



    return 0;
}