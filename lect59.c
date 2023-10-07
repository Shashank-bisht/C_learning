/*pattern
 0000000
  111111
   22222
    3333
     444
      55
       6*/

#include <stdio.h>
// where i is row and j is column
int main(int argc, char const *argv[])
{
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j>=i) //main logic
            {
               printf("%d",i); 
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
