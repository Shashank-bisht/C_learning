//dangling pointer
// a pointer pointing to a free memory location or the location whose content has been deleted is called a dangling pointer.
// when memory is delocating the pointer keeps pointing to the free space

//dangling pointer can introduce nasty bugs in c program
// we can avoid issues caused by dangling pointersby initaizing pointer to null

// dangling pointer can be created in many ways

#include <stdio.h>
#include <stdlib.h>

int* functiondangling(){
    // here scope is local
    int a,b,sum;
    a=44;
    b=66;
    sum = a+b;
    return &sum;
}

int main()
{
    // case 1: de allocation of a memory block
    // int *ptr= (int*) malloc(7* sizeof(int));
    // ptr[0]=88;
    // ptr[1]=8;
    // ptr[2]=898;
    // ptr[3]=868;
    // ptr[4]=858;
    // free(ptr); // ptr is now a dangling pointer


    //case 2: function returning local variable address

    int*dangptr = functiondangling();// ptr is now a dangling pointer

    //case 3: if a varibale is out of scope
    // int * danglptr;
    // {
    //     int a= 55;
    //     danglptr = &a;
        //here variable a goes out of scope which means danglptr is pointing to a location which is freed and hence danglptr is now a dangling pointer
    // }
    return 0;
}
