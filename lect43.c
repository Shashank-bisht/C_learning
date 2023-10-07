// null pointer
// null pointer is a pointer which has a value reserved for indicating that the pointer or reference does not refer to a valid object
// a null pointer is guarenteed to campare unequal to any pointer that points to a valid object.
// a null pointer cannot be dereferenced

// a null pointer is a pointer that points to null
// a check must be run by the c programmer to know whether a pointer is null before dereferencing it

// null macro is defined as ((void*0)) in header files of most of the c compier

// null pointer vs void pointer- null pointer is a value where as void pointer is a type
#include <stdio.h>
int main()
{
    int a = 34;
    int *ptr = &a;
    // int *ptr; //uninitalized pointer
    // int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", ptr);
    }
    else
    {
        printf("the pointer is a null pointer and cannot be dereferenced\n");
    }

    return 0;
}
