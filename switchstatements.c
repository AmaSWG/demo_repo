#include <stdio.h>

int main(){

    /*switch - a more efficient alternative to using many "else if" statements.
               allows a value to be tested for equality against multiple cases.
               It is concidered bad practice to have multiple else if statements.
               So it is better to use a switch instead.
    */

    char grade;

    printf("Enter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay.\n");
            break;
        case 'D':
            printf("At least it's not an F.\n");
            break;
        case 'F':
            printf("YOU FAILED!\n");
            break;
        default:
            printf("Please enter only valid grades.");
        
    }

    return 0;
}