#include <stdio.h>
#include <stdbool.h>

int main(){

    // AND logical operator (&&) - checks if two conditions are true

    float temp = 25;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){
        printf("The weather is good!");
    }
    else{
        printf("The weather is bad!");
    }

    return 0;
}