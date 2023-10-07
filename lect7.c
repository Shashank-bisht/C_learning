// loop in C

#include <stdio.h>

int main()
{
    // int i = 1
    // for (; i <= 10; i++)
    // {
    //     printf("%d\n",5*i);
    // }

    int num, index = 0;
    printf("Enter the number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index+1);
        index = index + 1;
    } while (index < num);


//    int i = 0;
//     while (i<44)
//     {
//         printf("%d\n",i);
//         i++;
//     }
    
    return 0;
}
