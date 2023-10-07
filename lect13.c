// multliplication table using c with function

#include <stdio.h>
void table(int d){
    for ( int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n",d,i,d*i);
    }
}

int main(int argc, char const *argv[])
{
    int c;
    printf("Enter the number of which you want table\n");
    scanf("%d",&c);
    table(c);
    return 0;
}
