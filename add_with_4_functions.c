//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
int input()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    return x ;
}
int sum(int a , int b)
{
    int total ;
    total = a+b;
    return total;
}
void output(int a , int b , int total)
{
    printf("Sum of %d and %d is %d " , a,b,total);
}
int main()
{
int x , y , z;
x = input();
y = input();
z = sum(x,y);
output(x,y,z);
return 0;
}

