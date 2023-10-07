// star pattern solution


#include <stdio.h>

// void starpatter(int rows)   
// {
//     for (int i = 0; i < rows; i++)   // for number of rows
//     {
//         for (int j = 0; j <= i; j++)    // for number of stars
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
// }


void revstarpatter(int rows)
{
    for (int i = 0; i < rows; i++)  // for number of rows
    {
        for (int j = rows; j > i; j--) // for number of stars
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int rows;
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    // starpatter(rows);
    revstarpatter(rows);
    return 0;
}
