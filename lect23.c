// structure in c
// structures are user defined data types in c
//they are very similar to array but they can store data of any type, which is more useful


#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_game[55];
};

int main()
{
    struct student harry, ravi, shubham; //this is local variable
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 33;
    harry.marks = 55;
    ravi.marks = 77;
    shubham.marks = 88;
    strcpy(harry.fav_game,"coc");
    printf("Harry got %d marks\n",harry.marks);
    printf("%s",harry.fav_game);
    return 0;
}
