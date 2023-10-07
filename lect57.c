/*
    *
   **
  ***
 ****
*****

*/

// where i is row and j is column

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= n - 1) //main logic
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
         }
        printf("\n");
    }

    return 0;
}
