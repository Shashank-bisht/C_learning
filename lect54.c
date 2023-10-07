/*

*
**
***
****
*****
******

*/



#include <stdio.h>
int main(int argc, char const *argv[])
{
    int line;
    printf("Enter the line till you want star pattern\n");
    scanf("%d", &line);
    for (int i = 1; i <= line; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
