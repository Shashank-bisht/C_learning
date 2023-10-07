// sum of n natural numbers

#include <stdio.h>

int main()
{
    int num, sum=0;
    printf("Enter the last natural number till where you want the sum\n");
    scanf("%d",&num);
    for ( int i = 1; i <= num; i++)
    {
        sum+=i;
    }
    printf("sum of first %d natural number is %d",num,sum);
    return 0;
}
//optimal way is using formula sum = n(n+1)/2