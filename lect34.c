// storage class in c
// a storage class defines scope , default initial value and lifetime of a variable
// storage class which are mostly used
// 1-automatic variable 2-external variable 3-static variable 4-register variable


// automatic varibale

// scope-local to the function body they are defined in
// default value - garbage value
//lifetime- till the end of the function block they are defined in
//a variable defined without any storage class specification is by default an automatic variable
//int shanky and auto int shanky are same

//external variable

//they are same as global variable
//scope-global to the program they are defined in
//default value - 0
//life time-throughout lifetime
//a global variable can be changed by any fucntion in the program

//static variable - already studied

//register variable

//scope-local to the function they are declared
//default value-garbage
//lifetime-they are available till the end of the function block,in which the variable is defined
//register variable requests the compiler to store the variable in the cpu register insted of storing in the memory to have fast access


//extern keyword 

#include <stdio.h>
int sum = 5555;
int myfunc(int x, int y){
//    int sum = x+y;
extern int sum;
   return sum;
}
int main()
{
    // int sum = 66;
    // int sum = myfunc(9,4);
    printf("The sum is %d\n",sum);
    return 0;
}
