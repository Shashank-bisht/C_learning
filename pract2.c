#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int b = 3;
    int* ptrb = &b;
    int a = 4;
    int* ptra = &a;

    int x ;
    int y ;
    x = *ptra;
    b = x;
    
    y = *ptrb;
    a = y;
    printf("the value of b is %d\n",b);
    printf("the value of a is %d",a);
    return 0;
}
