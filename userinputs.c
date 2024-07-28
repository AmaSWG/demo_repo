#include <stdio.h>
#include <string.h>

int main(){

    char fname[25];
    int age;

    printf("\nwhat is your full name?");
    fgets(fname, 25, stdin);
    fname[strlen(fname)-1] = '\0'; //gets rid of the new line that comes at the end of the fgets function
    
    printf("\nHow old are you?");
    scanf("%d", &age);

  
    /*scaf function cannot read white spaces. It can only read upto white spaces.
      If you want to get an input that contains white spaces, you should use the fgets function.
      When using the fgets function, it automatically contains a new line at the end.
      To get rid of that new line you have to do some string formatting which will be further discussed later.
    */

    printf("\nHello %s, how are you?", fname);
    printf("\nYou are %d years old.", age); 

    return 0;
}