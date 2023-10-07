// array reversal in c

#include <stdio.h>

void arrayrev(int arr[])
{
    int temp;
    for (int i = 0; i < 6 / 2; i++)
    {
        // 6/2 and 7/2 will give an integer
        //  swaping first and last element
        temp = arr[i];
        arr[i] = arr[5 - i];
        arr[5 - i] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        printf("the value of element %d is %d\n", i, arr[i]);
    }

    arrayrev(arr);
    printf("After reversing the array\n");
    for (int i = 0; i < 6; i++)
    {
        printf("the value of element %d is %d\n", i, arr[i]);
    }
    return 0;
}