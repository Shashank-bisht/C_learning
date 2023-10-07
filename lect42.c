//void pointer is a pointer that has no data type associated with it
// a void pointer can be easily typecasted to any pointer type
// it is not possible to dereference void pointer
#include <stdio.h>
int main()
{
    int a=33;
    float b=5.5;
    void *ptr;
    ptr =&a; 
    printf("the value of a is %d\n",*((int*)ptr)); //*ptr will give error we cannot directly dereference we have to typecaste it
    ptr =&b;
    printf("the value of b is %f\n",*((float*)ptr));
    return 0;
}
