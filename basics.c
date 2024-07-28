#include <stdio.h>

int main(){

    // This is a one line comment
    printf("I like pizza.\n");
    printf("It's really good.\n");

    /*This is a multi line comment.
    You can put as more than one line inbetween these two signs 
    */

    /* Escape sequences :- a character consisting of a backslash(\) followed by a letter 
                          or a combination of digits.
                          they specify actions within a line or string of text.
                          \n - new line
                          \t - tab
   */

    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n"); 
    /*If you want to print characters like \, '' amd "" use a baclslash before them as an escape character*/
    printf("\"I like Pizza\" - Abraham Lincoln probably");

    return 0;
}