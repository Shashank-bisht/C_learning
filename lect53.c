#include <stdio.h>
int main(int argc, char const *argv[])
{
    // to check prime number or not
    int x;
    int count = 0;
    printf("Enter the number which you want to check prime or not\n");
    scanf("%d", &x);
    for (int i = 2; i < x-1; i++)
    {
        if (x%i==0)
        {
            count++;
        }
    }if (count==0)
    {
        printf("It is a prime number!!!");
    }else{
        printf("It is not a prime number!!!");
    }    
    return 0;
}
