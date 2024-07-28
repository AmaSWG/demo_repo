#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C'; //single character (%c)
    char b[] = "Amaya"; //array of characters(a string) (%s)

    float c = 3.141592; //4 bytes(32 bits of precision) - 7 to 8 decimal points (%f)
    double d = 3.141592653589793; //8 bytes(64 bits of precision) - 15 to 16 decimal points (%lf)

    bool e = true; //i byte (true or false)(%d)
    bool f = false;

    /*Char can be used to store a whole integer within a certain limit.
      Depending on the format specifier it returns either an integer or an ASCII chracter
    */
    char g = 120; //1 byte(-128 to +127) (%d or %c)
    unsigned char h = 255; //1 byte(0 to +255) (%d or %c)

    short int i = 32767; //2 bytes(-32678 to _32767) (%d)
    unsigned short int j = 65535; //2 bytes(0 to 65535) (%d)

    //you can put the data type as short and unsigned short by themselves as well.

    int k = 2147483647; //4 bytes(-2147483647 to +2147483647) (%d)
    unsigned int l = 4294967295; //4 bytes(0 to +4294967295) (%u)

    long long int m = 9223372035854775807; //8 bytes (-9 quintillion to +9 qyintillion) (%lld)
    unsigned long long int n = 18446744073709551615u; //8 bytes (0 to +18 quintillion) (%llu)
     
    /* If we go beyond these ranges, it will cause an overflow and the values will be reset 
    to the minimum value*/

    printf("%c\n", a); //single character
    printf("%s\n", b); // array of characters
    printf("%f\n", c); //float
    printf("%lf\n", d); //double
    printf("%d\n", e); //bool
    printf("%d\n", f); //bool
    printf("%d\n", g); //char as numeric value
    printf("%c\n", g); //char as ascii character
    printf("%d\n", h); //unsigned char as numeric value
    printf("%d\n", i); //short
    printf("%d\n", j); //unsigned short
    printf("%d\n", k); //int
    printf("%u\n", l); //unsigned int
    printf("%lld\n", m); //long long int
    printf("%llu\n", n); //unsigned long long int


    return 0;
}