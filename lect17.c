// pointer arithmetic

#include <stdio.h>

int main()
{
    // int a = 36;
    // int* ptr = &a;
    // printf("%d\n",ptr); 
    // printf("%x\n",ptr); // it will give location in hexadecimal
    // printf("%d",ptr+1); // because int take 4 byte in my architecture and char take 1 byte

    int arr[] = {1,2,3,4,5};
    int*arrptr = arr;
    // arrptr++;
    printf("Value of position 1 is %d\n",arr[0]);
    printf("the address of first element of array is %d\n",&arr[0]);
    // or
    printf("the address of first element of array is %d\n",arr);
    printf("the address of second element of array is %d\n",&arr[1]);
    // or
    printf("the address of second element of array is %d\n",arr + 1);

    printf("The value at the first element of the array is %d\n",*(&arr[0]));
    // or
    printf("The value at the first element of the array is %d\n",*(arr));
    printf("The value at the second element of the array is %d\n",*(arr+1));

    return 0;
}
