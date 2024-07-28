#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (C) or (F)? ");
    scanf("%c", &unit);
    
    unit = toupper(unit); //capitalizes the input

    if(unit == 'C'){
        printf("Enter the temperature in (C): ");
        scanf("%f", &temp);
        temp = (temp*9/5) + 32;
        printf("Temperature in (F) is %.1f.", temp);
    }
    else if(unit == 'F'){
        printf("Enter the temperature in (F): ");
        scanf("%f", &temp);
        temp = (temp - 32)*5/9;
        printf("Temperature in (C) is %.1f.", temp);
    }
    else{
        printf("\n%c is not a valid unit of measurement!", unit);
    }
    return 0;
}