// pointers in c
// pointer is a variable which stores the address of another variable
// can be of type int , char, array,etc
// in c pointer is declared using *(asterisk symbol)
// & and * operators
// the address of operator & returns the address of a varible
// * is the dereference opertor used to get the value at a given address
// &shanky means shanky ka address
// * means andar kai andar ka maaal

// a pointer that is not assigned any value is called null pointer
// pointer reduce the code and improves the performance

//use of pointer
// dynamic memory allocation
//returns multiple values from a function


# include <stdio.h>

int main()
{
    int a = 33;
    int* ptr = &a; //pointer ptr kai andar a ka address aa jaiga
    printf("The address of pointer to a is %x\n",&ptr);//x is for hexdecimal
    printf("The address of a is %p\n",*ptr);//
    printf("The value of a is %d\n",*ptr);// getting value of a

    // int *ptr2;
    int *ptr2 = NULL;
    printf("The address of some garbage is %p\n",ptr2);
    return 0;
}
