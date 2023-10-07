// factorial of a number

// iterative approach
int factiter(int n){
    int val = 1;
    for (int i = n; i > 1; i--)
    {
        val *=i;
    }
    return val;
}

// recursive approach
int factrecr(int n){
    if (n==0 || n==1)
    {
        return 1;
    }else{
        return n*factiter(n-1);
    }
    
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of number for factorial calculation\n");
    scanf("%d",&n);
    // int fact = factiter(n);
    int fact = factiter(n);
    printf("The value of factorial is %d\n",fact);
    return 0;
}
