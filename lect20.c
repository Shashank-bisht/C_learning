// call by reference in function

#include <stdio.h>

void changeval(int* address){
    *address = 474; //a ki value ko change kar dega
}
int main()
{
    int a = 55, b=44;
    printf("The value of a now is %d\n",a);
    changeval(&a);//reference dai dia hai upar
    printf("The value of a now is %d\n",a);
    return 0;
}
