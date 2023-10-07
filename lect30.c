// scope is a region of the program where  a defined variable can exist and beyond which it cannot be accessed

// global variable is create outside of main
// if local and global variable has the same name, the local variable will take preference

// static variable
// static variable are variable which have a property of preserving their value even when they go out of scope
// static variable always take constant
// static variable remains in memory throughout the span of the program
#include <stdio.h>
int b = 44;//this is global variable
int func1(int b1){
    static int myvar = 0;
    printf("The value of myvar is %d\n",myvar);
    myvar++;
    printf("the value of b inside func1 is %d\n",b);
    // printf("the address of b in func1 is %d\n",&b);
    // return b1*10;
}
int main()
{
    int b = 33;
    printf("the address of b in main is %d\n",&b);
    int val = func1(b);
     val = func1(b);
    int *ptr = &val;
    // when we call the function the value get copied
    printf("The value of func1 is %d",val);
    return 0;
}
