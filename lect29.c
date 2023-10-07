#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, i = 0;
    char *ptr;
    while (i<3)
    {
        printf("Enter the number of characters in your Employee id\n");
        scanf("%d",&chars);
        i+=1;
    }

    return 0;
}
