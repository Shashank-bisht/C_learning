#include <stdio.h>

int main()
{
    int num,pw,val=1;
    // or we can use long long int val = 1; %lld
    printf("Enter the number \n");
    scanf("%d",&num);
    printf("Enter the power\n");
    scanf("%d",&pw);
    for (int i = 1; i <= pw; i++)
    {
        val = val*num;
    }
    printf("the result is %d",val);
    
    return 0;
}
