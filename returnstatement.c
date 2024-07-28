#include <stdio.h>

// return statement returns a value back to a calling function.

/*when creating a function that contains a return statement, you should replace the "void" statement with 
  the data type of the value the fuction is going to return.

  That is why the main fuction is preceded with int. Because it returns a 0 if the function runs smoothly 
  and returns a 1 if there are any errors.
*/

double square(double n){

    double result = n*n;
    return result;

}

int main(){

    double x = square(3.14);
    printf("%lf", x);


    return 0;
}