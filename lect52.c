// prime number checker

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    int isprime = 1;
    printf("Enter the number which you want to check prime or not\n");
    scanf("%d", &x);




    
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            isprime = 0;
        }
    }if (isprime)
    {
        printf("The number %d is prime\n",x);
    }else{
        printf("The number %d is not prime\n",x);

    }
    return 0;
}
