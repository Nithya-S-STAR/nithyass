//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>
struct point
{
     float x;
     float y;
};
typedef struct point Point;
Point input()
{
     Point p;
     printf("Enter the abscissa:\n");
     scanf("%f",&p.x);
     printf("Enter the ordinate:\n");
     scanf("%f",&p.y);
     return p;
}
float distance(Point p1 , Point p2)
{
     float dis;
     dis = sqrt(pow((p1.x-p2.x),2)+pow((p1.y -p2.y),2))
     return dis;
}
void output(Point p1, Point p2 , float dis)
{
     printf("The distance between %f,%f and %f,%f is %f",p1.x, p1.y,p2.x,p2.y,dis);
}
float main()
{
     float dis;
     Point p1,p2;
     p1 = input();
     p2 = input();
     dis = distance(p1,p2);
     output(p1,p2,dis);
}
