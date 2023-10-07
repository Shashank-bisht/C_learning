// goto statement- should be used very less

#include <stdio.h>

int main()
{
    label:
    printf("We are inside lable\n")   ;
    goto end; // yha sai sidha end mai chala gya
    printf("hello world");
    end:
    printf("we are at the end");
    return 0;
}
