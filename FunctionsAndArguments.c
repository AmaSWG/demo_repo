#include <stdio.h>

void birthday(char n[], int a){ //these are called parameters. they should be preceded by their data type
    printf("Happy birthday %s!\n", n);
    printf("You are %d years old!\n", a);
}

int main(){

    char name[] = "Amaya";
    int age = 21;

    birthday(name, age); /*these are called arguments. they are passed to another function that is outside
                           the main function*/


    return 0;
}