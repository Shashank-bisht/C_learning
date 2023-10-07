// to count number of digits in integers without changing to arr or str

#include <stdio.h>

int main()
{
    int n, counter = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("the digit in number is only one");
    }
    else
    {
        while (n != 0)
        {
            n = n / 10; //because int/int is always int in c 
            counter++;
        }
        printf("the digits in number is %d", counter);
    }

    return 0;
}
