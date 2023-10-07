#include <stdio.h>
#include <string.h>
void parser(char array[]){
int n = strlen(array);
for(int i=4;i<n-6;i++){
    printf("%c",array[i]);
}
}
int main()
{
    char string[] = "<h1>hello this is shanky </h1>";
    int n = strlen(string);
    parser(string);
    return 0;
}
