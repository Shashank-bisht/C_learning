// Travel agency
#include <stdio.h>

struct driver
{
    char name[34];
    char dlno[44];
    char route[33];
    int kms;
};

int main()
{
    struct driver d1,d2,d3;
    printf("Enter the details of the driver no.1\n");
    printf("Enter the name of first drivers\n");
    scanf("%s",&d1.name);
    printf("Enter the dlno. of first drivers\n");
    scanf("%s",&d1.dlno);
    printf("Enter the route of first drivers\n");
    scanf("%s",&d1.route);
    printf("Enter the kms of first drivers\n");
    scanf("%d",&d1.kms);


    printf("Enter the details of the driver no.2\n");
    printf("Enter the name of second drivers\n");
    scanf("%s",&d2.name);
    printf("Enter the dlno. of second drivers\n");
    scanf("%s",&d2.dlno);
    printf("Enter the route of second drivers\n");
    scanf("%s",&d2.route);
    printf("Enter the kms of second drivers\n");
    scanf("%d",&d2.kms);

    printf("Enter the details of the driver no.3\n");
    printf("Enter the name of third drivers\n");
    scanf("%s",&d3.name);
    printf("Enter the dlno. of third drivers\n");
    scanf("%s",&d3.dlno);
    printf("Enter the route of third drivers\n");
    scanf("%s",&d3.route);
    printf("Enter the kms of third drivers\n");
    scanf("%d",&d3.kms);


    printf("Printing information of these drivers\n");
    printf("for Driver no.1\nName is %s\n",d1.name);
    printf("Dl number is %s\n",d1.dlno);
    printf("route is %s\n",d1.route);
    printf("kms is %d\n",d1.kms);

    printf("for Driver no.1\nName is %s\n",d2.name);
    printf("Dl number is %s\n",d2.dlno);
    printf("route is %s\n",d2.route);
    printf("kms is %d\n",d2.kms);

    printf("for Driver no.1\nName is %s\n",d3.name);
    printf("Dl number is %s\n",d3.dlno);
    printf("route is %s\n",d3.route);
    printf("kms is %d\n",d3.kms);
    return 0;
}


// try it using for loop

