//WAP to compute area of rectangle
#include<stdio.h>
#include<math.h>
struct points
{
   float x;
   float y;
};
typedef struct points point;
struct rectangles
{
   float length;
   float breadth;
   float area;
};
typedef struct rectangles rectangle;
int max_no_of_instances()
{
   int max;
   printf(“Enter the number of rectangles:\n”);
   scanf(“%d”,&max);
   return max;
}
void input( point p[3])
{
   printf(“Enter the coordinates of points:\n”);
   for(int i = 0 ; i<3; i++)
   {
       scanf(“%d %d” ,&p[i].x.&p[i].y);
   }
}
void input_rectangle(int n , rectangle r[n])
{
   point p[3];
   for(int i=0;i<n;i++)
  {
     printf(“\nEnter the coordinates of rectangle %d”,i+1);
     r[i] = input(p);
}
}
void display(point p[3])
{
   for(int i =0; i<3; i++)
   {
      printf(“(%.1f)(%.1f)\t”,p[i].x,p[i].y);
    }
}
void display_rectangle(int n , rectangle r[n])
{
   for(int i=0;i<n;i++)
   {
      printf(“\nThe coordinates for rectangle %d”,i+1);
      display(r[i]);
    }
}
void compute_area( int n , rectangle r[n] )
{
    rectangle r[3];
    float area;
     for(int i =0;i<3;i++)
     {
        r[i].length = sqrt(pow(((p[1].x)-(p[0].x)),2)+(pow(((p[1].y)-(p[0].y)),2));
        r[i].breadth = sqrt(pow(((p[2].x)-(p[1].x)),2)+(pow(((p[2].y-(p[1].y)),2));
        r[i].area = r[i].length*r[i].breadth;
       }
} 
void output(rectangle *r , point p[3])
{
    printf(“\nArea of rectangle with vertices (%.1f,%.1f)(%.1f,.%1f)(%.1f,.%1f) is %.1f”, p[0].x,p[0].y,p[1].x,p[1].y,p[2].x,p[2].y);
}
void output_n_values(int n , rectangle r[n])
{
    for(int i=0; i<n;i++)
     {
         output(&r[i]);
     }
}
int main()
{
max = max_no_of_instances();
rectangle r[max] ;
input_rectangle(max,r);
display_rectangle(max,r);
compute_area(max,r);
output_n_values(max,r);
return 0;
}
