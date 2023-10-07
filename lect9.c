// function in c 
// function are of two types 1(library function-printf given by complier)
// 2(user defined function - created by user)

#include <stdio.h>
// we can declare function at starting and can return at the end
int sum(int a, int b);
void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c\n",'*');
    }
    
}


int main()
{

    int a,b,c;
    a = 3;
    b = 6;
    c = sum(a,b);
    printf("The sum is %d\n",c);
    printstar(7);
    return 0;
}
int sum(int a, int b){
    return a+b;
}
