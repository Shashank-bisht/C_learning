// string in c

// string is not a datatype in string
// string : array of character terminated by null character
// we express strings using an array of characters  terminated by a null character


// creating character array
// char name[] = "shanky" //automatically end mai null character aa jaiga
// char name[] = {'s','h','a','n','k','y','\0'}
// string kai end mai null character hona chiye

#include <stdio.h>

void printstr(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}
int main()
{
    // char str[] = {'s','h','a','n','k','y','\0'};
    char str[] = "shanky";
    
    // to take string as an innput from the user
    // char str[55];
    // gets(str); // use gets function
    // displaying using print 
    printf("using this %s\n",str);
    // displaying using puts
    // printf("using putts\n");
    puts(str);
    // printstr(str);
    return 0;
}
