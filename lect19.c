// passing array as a function in c

// we pass array to a function when we need to pass a list of value to a given function
// we can pass the arrays to a function:
// 1- by declaring array as a parameter in the function
// 2- by declaring a pointer in the function to hold the base address of the array

#include <stdio.h>
int func1(int arrat[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d is %d\n", i, arrat[i]);
    }
    arrat[0] = 55; // if i will change here it will be reflected in main
}


// using pointer inside func2
int func2(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i)); // or ptr[i]
    }
    // ptr[0] = 77;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);

    func2(arr);
    return 0;
}
