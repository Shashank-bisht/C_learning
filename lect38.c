#include <stdio.h>

//fibonachi - 0,1,1,2,3,5,8


int fibo(int num)
{
    if (num == 1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }
    else
    {
        return fibo(num - 1) + fibo(num - 2);
    }
}
    int iter(int num){
        int a = 0;
        int b = 1;

        for (int i = 0; i < num-1; i++)
        {
            b = a+b;
            a = b-a;
        }
        return a;
    }
    

    int main()
    {
        int inp;
        printf("Enter the index till where you want fibo\n");
        scanf("%d", &inp);
        printf("the fibonachii of index using iteration is %d\n",iter(inp));
        printf("the fibonachii of index using fibonachi is %d\n",fibo(inp));
        return 0;
    }
