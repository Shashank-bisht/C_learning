// conversion program

#include <stdio.h>

int main()
{
    int inp;
    int first;
    int second;
    printf("Enter 1 for changing km to m and 2 for changing m to km and q for quit\n");
    scanf("%d", &inp);
    printf("Enter unit value\n");
    scanf("%d", &first);
    if(inp == 1){
        printf("%d km is equal to %d m",first,first*1000);
    }else if(inp == 2){
        printf("%d m is equal to %.2f km",first,(float)first/1000);
    }else if(inp == "q"){
        printf("Quitting...");
    }

    return 0;
}
