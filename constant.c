#include <stdio.h>

int main(){
    // constant - a fixed value that cannot be altered by the program during its execution
    /*This is so that someone else cannot change the value of an important variable. 
      It is convention to use all capitals to name a constant.
    */

    const float PI = 3.14159;

    //Now if someone tries to change the value of PI later in the program there will be an error

    printf("%f\n", PI);
    return 0;
}