//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
int input_maxsize()
{
     int a;
     printf("Enter the maximum number of numbers in an array:\n");
     scanf("%d",&a);
     return a;
}
void input_array(int n , int a[n] )
{
     for(int i=0;i<n;i++)
{
        printf("Enter the element no %d of the array\n",i);
        scanf("%d",&a[i]);
    }
}

int calculate_sum(int n, int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++) 
{
        sum += a[i];
    }
    return sum;
}

int display(int n, int a[n], int sum)
{
    int i;
    printf("The sum of ");
    for(i=0;i<n-1;i++)
 {
        printf("%d+",a[i]);
    }
    printf("%d=%d",a[i],sum);
}

int main()
{
    int n,sum;
    n = input_maxsize();
    int a[n];
    input_array(n,a);
    sum =  calculate_sum(n,a);
    display(n,a,sum);
}
