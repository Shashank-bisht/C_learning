// recursion in c
// recursion function call a copy of itself to work on a smaller problem
// this makes the life of programmer easy by dividing a given problem into easier problem
// a problem can be solved in two ways 1-recursion 2-iteration

// the case at which the function donot recur is called the base case
// the instance where the function keeps calling itself to perform a subtask is called the recursive case

// factorial using recursion  now 0! = 1 is a base case also 1!=1
// calculating factorial

#include <stdio.h>

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
int main()
{
    int nu;
    printf("Enter the number for factorial\n");
    scanf("%d", &nu);
    printf("The factorial of %d is %d", nu, factorial(nu));
    return 0;
}
