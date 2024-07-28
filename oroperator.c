#include <stdio.h>
#include <stdbool.h>

int main(){

    //OR logical operator (||) - checks if at least one of two conditions are true.

    float temp = 25;

    if(temp <= 0 || temp >= 30){
        printf("The weather is bad!");
    }
    else{
        printf("The weather is good!");
    }


    return 0;
}