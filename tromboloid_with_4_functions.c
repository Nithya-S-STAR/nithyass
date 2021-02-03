//WAP to find the volume of a tromboloid using 4 functions
#include <stdio.h>
float input()
{
    float a ;
    printf("Enter the dimension");
    scanf("%f",&a);
    return a;
  }
float volume (float h , float d , float b)
{
     float vol1;
     vol1 = ((h*d*b)+(d/b))/3 ;
     return vol1;
}
void display(float vol1)
{
     printf("The volume of tromboloid is %2f",vol1);
}
float main()
{
    float h , d , b , vol1;
    h = input();
    d = input();
    b = input();
    vol1 = volume(h,d,b);
    display(vol1);
}
