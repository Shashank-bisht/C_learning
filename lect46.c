//wild pointer
// uninitialized pointers are known as wild pointers
//these pointers point to some arbitary location in memory and may cause a program to crash or behave badly
//dereferencing wild pointers can cause nasty bugs
//it is suggested to always initialize unused pointers to null

// int a=3;
// int *ptr;// wild pointer
// ptr = &a //ptr no longer wild

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 555;
    int *ptr = &a; //this is a wild pointer
    // *ptr = 77;// this is not a good thing to do
    // ptr = &a;//ptr is no longer wild
    printf("the value of a is %d",*ptr);
    return 0;
}
