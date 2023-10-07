#include <stdio.h>

// function with zero argument and one return value
int takenumber(){
    int i;
    printf("Enter a number\n");
    scanf("%d",&i);
    return i;
}

// function with no argument and no return value
void giveage(){
    printf("My age is 19");
}

int main()
{
    int c;
    c = takenumber();
    printf("The number entered is %d\n",c);


    // printf("what is your age\n");
    giveage();
    return 0;
}
