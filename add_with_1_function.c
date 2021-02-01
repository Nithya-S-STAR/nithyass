//Write a program to add two user input numbers using one function.
#include <stdio.h>
int sum( int a , int b) 
{
  return a+b ;
}
int main()
{
  int a,b,total;
  printf("Enter the two numbers");
  scanf("%d%d", &a , &b);
  total = sum(a,b);
  printf("sum of %d and %d is %d" , a,b,total);
}
  
         
  
  
