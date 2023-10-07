// stdio.h is a file to add in our program and main is kind of function
// int is a return value
// main function return a int value

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number\n");
    // scanf is used to take input &a= is address of a where value will be stored
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    printf("The sum is %d\n", a + b);
    return 0; //
}