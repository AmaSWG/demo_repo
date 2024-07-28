#include <stdio.h>
#include <stdbool.h>

int main(){

    // AND logical operator (&&) - checks if two conditions are true

    float temp = 25;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){

	//this block gets executed only if both conditions are true
        printf("The weather is good!");
    }
    else{
	
	//this block gets executed if one or both conditions are false
        printf("The weather is bad!");
    }

    return 0;
}