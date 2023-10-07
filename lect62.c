#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    char string[44] = "abe nikal"; 
    // reading a file 

    // ptr = fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file has %s\n",string);


    // writing a file
    ptr = fopen("myfile.txt","w");
    fprintf(ptr,"%s",string);
    return 0;
}
