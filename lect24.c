// typedef = > used for giving nickname to words
// typedef <previous_name> <alias_name>
#include <stdio.h>
// using typedef in structure
typedef struct student
{
    int id;
    int marks;

} st;

int main()
{
    typedef int integer;
    integer d = 55; //using typedef i changed int to integer
    printf("the value of d is %d\n",d);

st s1,s2;
s1.id = 1;
s2.id = 2;
printf("Value of s1 id is %d\n",s1.id);
printf("Value of s2 id is %d",s2.id);

    // int* a,b;   //int ka pointer a ban jaiga and int b ban jaiga without pointer
    // typedef int* intpointer; // isme dono ka pointer ban jaiga
    // intpointer a,b;
    // int c = 97;
    // a = &c;
    // b = &c;
    return 0;
}
