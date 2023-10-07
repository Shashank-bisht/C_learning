// some predefined macros

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("File name is %s\n",__FILE__);
    printf("Today's date is %s\n",__DATE__);
    printf("Time Now is %s\n",__TIME__);
    printf("line no. is %d\n",__LINE__);
    return 0;
}
