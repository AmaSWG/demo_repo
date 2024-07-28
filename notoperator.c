#include <stdio.h>
#include <stdbool.h>

int main(){

    // NOT logical operator (!) -reverses the state of a condition

    bool sunny = true;

    if(!sunny){
        printf("It's cloudy outside.");
    }
    else{
        printf("It's sunny outside.");
    }

    return 0;
}