// area of circle
// radius between two points

#include <stdio.h>
#include <stdlib.h>


float distance(int x1 , int y1 ,int x2 ,int y2){
float dis;
int a = (y2-y1)*(y2-y1) +(x2-x1)*(x2-x1);
return sqrt(a);
}

float area(int x1 , int y1 ,int x2 ,int y2 ,float(*distance)(int x1 , int y1 ,int x2 ,int y2)){

return distance(x1,y1,x2,y2);
}
int main()
{
    int x1,x2,y1,y2;
    float dist;
    printf("Enter the value of x1\n");
    scanf("%d",&x1);
    printf("Enter the value of x2\n");
    scanf("%d",&x2);
    printf("Enter the value of y1\n");
    scanf("%d",&y1);
    printf("Enter the value of y1\n");
    scanf("%d",&y2);
    dist = area(x1,x2,y1,y2,distance);
    printf("The distance of radius between these point is %.2f\n",dist);
    printf("The area of the circle with this radius is %.2f",3.14*dist*dist);
    return 0;
}
