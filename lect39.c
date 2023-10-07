// C Pre-processor
// compiler converts textual form of a c program into an executable
// there are four phases for a c program to be executable
//1-preprocessing  2-compilation  3-assembly  4-linking

//preprocessing- removal of comments,expansion of macros and include files
//compilation - assembly level instruction are generated 
//assembly - assembly level instruction are converted to machine language
//linking - links the function implimentation

// C preprocessor comes under action before the actual compilation process
//C preprocessor is not a part of the c compiler
//all preprocessor commands start with hash symbol(#)


// #include <stdio.h> this is a preprocessor command which is used before compiling 


//the #include directive causes the preprocessor to fetch the contents of some other file to be included in the present file

//most commonly the #included files have a ".h" extension ,indicating that they are header files.



// the #define directive is used to "define" preprocessor "variables" or constant
// #define directive can be used for debugging


#include <stdio.h>
#include "lect40.c"
#define Pi 3.14
#define square(r) r*r //this is macros which is a kind of function but faster than a function because they are preprocessed
int main()
{
    float var = Pi;
    // int var = 0;
    // printf("this is me %d\n",var);
    printf("The value of PI is %.2f \n",var);
    printf("The area of this square is %d ",square(4));
    //we will not get error because we donot have main function in lect40.c
    //after we changed main to main1 then we will not get an error
    return 0;
}
