// union in c 
// union is a  user defined data type like structure
// the difference between structure and unions lies in the fact that in structure , each member has its own storage location whereas members of a union uses a single shared memory location.
// this single shared memory location is equal to the size of its largest data member.

// union cannot handle all members at once


#include <stdio.h>
#include <string.h>
union students
{
    int id;
    int marks;
    char fav_char;
    char name[22];
};
//here union is taking 2 or 4 bytes because int take 2 or 4 bytes and char take 1 byte
int main()
{
    union students s1;
    s1.id = 5;
    strcpy(s1.name,"shanky");
    s1.fav_char = 'd';
    s1.marks = 55; // last wle ko prference milege

    printf("The marks is %d\n",s1.marks);
    printf("the name is %s\n",s1.name);
    printf("The id is %d\n",s1.id);
    printf("The fav_char is %c\n",s1.fav_char);
    return 0;
}
