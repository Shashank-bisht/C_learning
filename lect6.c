// switch in c

#include <stdio.h>

int main()
{
    // int a = 4;
    // switch (a)
    // {
    // case 1:
    //     printf("one is here\n");
    // break;
    // case 4:
    //     printf("four is here\n");
    // default:
    // printf("nothing is here");
    // break;
    // }

    int marks;
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Enter your marks\n");
    scanf("%d", &marks);
    switch (age)
    {
    case 18:
        printf("hello shanky\n");

        switch (marks)
        {
        case 50:
            printf("you are passed");
            break;
        case 90:
            printf("you are topper");

        default:
        printf("chup");
            break;
        }

    default:
        break;
    }
    return 0;
}
