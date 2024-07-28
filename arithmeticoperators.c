#include <stdio.h>

int main(){
    /*Arithmetic operators

        addition : +
        substraction : -
        multiplication : *
        division : /
        modulus : %  (returns the remaining value after a division)
        increment : ++ (increases value by 1)
        decrement : -- (decreases value by 1)
    */

    
    int x = 5;
    int y = 2;

    int add = x + y;
    int sub = x - y;
    int multi = x * y;
    int div = x / y;

    /*This will return 2 as the answer as we are storing the answer in an integer
      so it will truncate the decimal portion.
      To solve this;
      (1) we need to store the answer as a float
      (2) we need to either change the denominator into a float or convert it to a float prior to division
    */

    float div1 = x / y;
    float div2 = x / (float) y;

    int mod = x % y;

    x++;
    y--;


    printf("%d\n", add); 
    printf("%d\n", sub);
    printf("%d\n", multi);
    printf("%d\n", div);
    printf("%f\n", div1);
    printf("%f\n", div2);   
    printf("%d\n", mod); 
    printf("%d\n", x);
    printf("%d\n", y);  


    /*Augmented assignment operators:
      used to replace a statement where an operator takes a varible as one of its arguments and then assigns 
      the results back to that same variable
      ex: x= x + 1 ----> x += 1
    */

    int z = 10;

    //z += 2;
    //z -= 3;
    //z *=5;
    //z /= 2;
    //z %= 2;

    printf("%d\n", z);

    return 0;


    
}


