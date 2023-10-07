// break and continue statements

#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 11; i++)
    {
        printf("%d\n", i);
        if (i == 4)
        {
            break;
            // continue;
        }
        printf("hello");
    }

    return 0;
}
