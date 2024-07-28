#include <stdio.h>

int main(){

    int age;

    printf("How old are you?");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are signed up!");
    }
    else if(age < 0){
        printf("You aren't born yet!");
    }
    else if(age == 0){
        printf("You can't sign up. You were just born!");
    }
    else{
        printf("You are too youn to sign up!");
    }

    return 0;
}