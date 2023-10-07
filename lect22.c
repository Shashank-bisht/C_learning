// string function

#include <stdio.h>

int main()
{
    char n1[] = "shanky ";
    char n2[] = "bisht";
    char n3[99];
    printf("The strcmp for n1 and n2 is %d\n",strcmp(n1,n2)); //compare if same gives 0
    puts(strcat(n1,n2)); //to join two string and store that in n1 and n2 will remain same
    // printf("%s\n",n1);
    // printf("%s\n",n2);
    printf("The length of n1 is %d\n", strlen(n1));
    printf("The length of n2 is %d\n", strlen(n2));
    printf("The reversed string n1 is %s\n", strrev(n1)); // to get reverse
    strcpy(n3, strcat(n1, n2)); // n3 mai n1 and n2 copy kar dia
    puts(n3); 
    return 0;
}
