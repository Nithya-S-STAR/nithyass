//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input()
{
    float a;
    printf("Enter the coordinates of point 1 and point 2 :\n");
    scanf("%f",&a);
    return a ;
}
float distance(float x1 , float y1 , float x2 , float y2)
{
    float dis;
    dis = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dis;
}
void display(float x1 , float y1 , float x2 , float y2 , float dis )
{
   printf("The distance between %f,%f and %f,%f is %f\n",x1,y1,x2,y2,dis);
}
float main()
{
     float x1 , y1 , x2 , y2 , dis;
     x1 = input();
     y1 = input();
     x2 = input();
     y2 = input();
     dis = distance(x1,y1,x2,y2);
     display(x1,y1,x2,y2,dis);
}
