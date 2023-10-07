// Dynamic memory allocation function

// 1 malloc
// malloc() stands for memory allocation
// it reverse a block of memory with the given amount of bytes
// the return value is a void pointer to the allocated space
// if the space is insufficient allocation of memory fails and it return a null pointer
// all the value at allocated memory is initialized to garbage value
// syntax  ptr=(ptr-type*) malloc(size_in_bytes)

// 2 calloc() stands for contiguous allocation
// it reserves n blocks of memory with the given amount of bytes
// the return value is a void pointer to the allocated space
// if the space is insufficient allocation of memory fails and it return a null pointer
// all the value at allocated memory is initialized to 0
// syntax ptr=(ptr-type*) calloc(n, size_in_bytes) where n is n number of blocks

// 3 realloc() stands for reallocation
// if the dinamically allocated memory is insufficient we can change the size of previously allocated memory using realloc() function
// syntax ptr= (ptr-type*) realloc(ptr, new_size_in_bytes)  ptr is old pointer

// 4 free() used to free the allocated memory
// if the dynamically allocated memory is not required anymore, we can free it using free function
// this will free the memory being used by the program in the heap
// syntax free(ptr)

#include <stdio.h>
#include <stdlib.h> // all allocation function are here

int main()
{
    // use of malloc
    //  int*ptr;
    //  int i;
    //  ptr = (int*) malloc(2*sizeof(int));
    //  for (int i = 0; i < 10; i++)
    //  {
    //      printf("Enter the value no %d of this array\n",i);
    //      scanf("%d",&ptr[i]);
    //  }
    //  for (int i = 0; i < 10; i++)
    //  {
    //      printf("the value of %d of this array is %d\n",i,ptr[i]);
    //  }

    // use of calloc
    int *ptr;
    int n;
    int i;

    printf("Enter the size of the array\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the value of %d of this array is %d\n", i, ptr[i]);
    }

    // use of realloc

printf("Enter the size of new array\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the new value of %d of this array is %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}

