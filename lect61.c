// to reverse the number 

int reverse(int num){
    int rev = 0,rem;
    while (num!=0)
    {
        rem = num%10; //last digit of num
        rev = rev*10+rem;
        num = num/10; // to remove last digit
    }
    return rev;
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num = 55234;
    int rev = reverse(num);
    printf("the reverse number is %d",rev);
    
    return 0;
}
