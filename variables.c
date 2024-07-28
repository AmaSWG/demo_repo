#include <stdio.h>

int main(){
    /* Variables - allocated space in memory to store values.
                   we refer variable name to acceses the stored value.
                   the variable now behaves like the value it contains.
                   but we need to declare what type of data we are storing
    */

    int x; //declaration
    x = 5; //intialization

    int y = 123; //declaration + intialization

    char name[] = "Amaya";
    int age = 21;
    float gpa = 3.75;
    char grade = 'B';

    printf("Hello %s!\n", name);
    printf("You are %d years old.\n", age);
    printf("Your average grade is %c.\n", grade);
    printf("Your gpa is %f.\n", gpa);


    return 0;
}