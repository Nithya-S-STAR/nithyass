//WAP to find the sum of n fractions.
#include<stdio.h>
struct fraction
{
     float n , d;
};
typedef struct fraction fract;
fract input()
{
    fract f;
    printf("Enter the numerator:\n");
    scanf("%f",&f.n);
    printf("Enter the denominator:\n");
    scanf("%f",&f.d);
    return f;
}
float compute_add(fract f1 , fract f2)
{
    float sum;
    sum =(((f1.n*f2.d)+(f2.n*f1.d))/(f1.d*f2.d));
    return sum;
}
void display(fract f1 , fract f2 , float sum)
{
    printf("The addition of %f/%f and %f/%f is %f",f1.n,f1.d,f2.n,f2.d,sum);
}
int main()
{
    fract f1,f2;
    float sum;
    f1 = input();
    f2 = input();
    sum = compute_add(f1,f2);
    display(f1,f2,sum);
    return 0;
}
