// Arrays

// array is a collection of data items of same type
// items are stored at continuous memory location
// In c there is no limit on the number of dimension in an array
// code that use arrays is sometimes more organized and readable
// Each elements of an array is of same size

#include <stdio.h>

int main()
{
    // int marks[3];
    // marks[0] = 55;
    // marks[1] = 35;
    // marks[2] = 55;
    // or
    // int marks[3] = {1,2,3};
    // printf("marks of student 1 is %d\n",marks[0]);
    // printf("marks of student 2 is %d",marks[1]);


    // 2d array
    int marks[2][3] = {{1,2,3},{1,2,3}};
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        printf("%d\t",marks[i][j]);
       }
       printf("\n");
    }
    
// disadvantage of array

// wastage of memory since array are fixed in size
// if there is enough space in the memory but not in continuous form you will not be able to initialize your array
// it is not possible to increase the size of the array once you have declared the array

    return 0;
}
