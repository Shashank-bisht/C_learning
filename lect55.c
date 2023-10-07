/*     
     
     *      
    ***     
   *****    
  *******   
 *********
***********

*/


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int line;
    printf("Enter the line till you want star pattern\n");
    scanf("%d", &line);
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < 2*line; j++)
        {
            if (j>=line-1-i&&j<=line-1+i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
