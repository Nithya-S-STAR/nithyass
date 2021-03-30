//WAP to find the sum of n fractions.
#include<stdio.h>
struct fraction
{
    int n ;
    int d ;
};
typedef struct fraction fract;
void input( int max , fract a[max])
{
 
    printf(“Enter all the numerators and denominators  :\n”);
    for(int i=0;i<=max;i++)
    {
       scanf(“%d ,%d”,&a[i].n ,&a[i].d);

    }
}
int gcd ( int a , int b)
{
   if(a==0)
     return b;
   return(b%a , a);
 }
int findlcm(fract a[max] , int max)
{
   for(int i =1;i<max;i++)
   {
      k = 0;
      for(j=1;j<=max;j++)
      {
         if(i% a[j].d ==0)
         {
            k++;
         }
      if(k==max)
     {
        return i;
   }
}
}
fract compute(fract a[max] , int max)
{
    fract result;
   fract result.n = 0;
   fract result.d = findlcm(a,max);
   for(int i = 0; i<max;i++)
   {
      result.n = result.n + (a[i].n)*(result.d/a[i].d);
   }
int common_factor = gcd(result.n,result.d);
result.n = result.n/common_factor;
result.d = result.d/common_factor;
return result;
}
void display(fract a[max] , int max , result)
{
   for(int i =0;i<max;i++)
   {
      printf(“Sum of fractions is %d/%d\n”,result.n/result.d);
}
}
int main()
{
   int max ;
   printf(“Enter the maximum number of fractions”);
   scanf(“%d\n”, &max);
   fract a[max] , sum=0;
   input(max,a[max]);
   sum = compute(a , max);
   display(a,max,sum);
return 0;
}
