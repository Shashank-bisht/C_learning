// format specifiers and escape sequences
// %d is for int and %f is for float %c for character %l long integer 
#include <stdio.h>

// creating constants using defined preprocessor
// #define n "shanky"

int main()
{
    // const char n = "shanky";
    int a = 4;
    float b = 4.4;
    printf("the integer is %i and floating is %.2f\n",a,b);
    printf(" \a");
    // printf("%c",n);
    return 0;
}
