//WAP to generate payroll
#include<stdio.h>
#include<string.h>
struct time_cards
{
    int min_worked;
    char name[100];
};
typedef struct time_cards time_card;
struct employee_record
{
    char emp_name[100];
     float hr_wage;
     int n_time_cards;
     float hrs_worked;
     float min_worked;
     float total_time;
     float gross_pay;
     time_card t[10];
};
typedef struct employee_record emp;
int input()
{
    int n;
    printf(“Enter the number of employees:\n”);
     scanf(“%d”,n);
     if(n>20)
          printf(“Invalid input\n”);
      else
          return n;
}
emp input_one()
{
    emp a;
    printf(“Enter employee’s name and hourly wage:\n”);
     scanf(“%100s%f”,&a.emp_name,&a.hr_wage);
     return a;
}
emp input_n(int n , emp a[n])
{
   for(int i = 0;i<n;i++)
   {
      a[i] = input_one();
    }
}

time_card input_one_timecard()
{
    time_card t;
    printf(“Enter name of employee and minutes worked:\n”);
    scanf(“%100s%d”,&t.name , &t.min_worked);
    return t;
}
time_card input_n_timecard(int n , emp a[n])
{
  printf(“Enter the number of time cards:\n”);
  scanf(“%d”,&emp->n_time_cards);
  for(int i=0; i<emp->n_time_cards;i++)
  {
      a->t[i] = input_one_timecard();
  }
}
void compute_one_timecard(time_card *t , employee *emp)
{
   if(strcmp(emp->emp_name,t->name)==0)
   {
      emp->hrs_worked = t->min_worked/60;
      emp->min_worked = t->min_worked%60;
      emp->total_time = emp->hrs_worked+(emp->min_worked/100);
      if(emp->total_time>40)
            emp->gross_pay = 1.5*emp->hr_wage*emp->total_time;
      else
            emp->gross_pay = 1*emp->hr_wage*emp->total_time;
  }
}
void compute_one_employee(employee *emp)
{
    for(int i  = 0 ; i<emp->n_time_cards;i++)
    {
        compute_one_timecard(&emp->t[i],emp);
    }
}
void compute_n_employee(int n , employee emp[n])
{
   for(int i = 0;i<n;i++)
    {
        compute_one_employee(&e[i]);
    }
 }
void output_one_employee(employee emp)
{
   printf(“\n%s:%.2f , $%.2f”, emp.emp_name , emp.hrs_worked,emp.gross_pay);
}
void output_n_employee(int n , employee emp[n])
{
    for(int =0; i<n; i++)
    {
        output_one_employee(emp[i]);
     }
}
int main()
{
    int n;
    n = input();
    employee emp[n];
    input_n_employee(n,emp);
    input_n_time_card(n, emp);
    compute_n_employee(n,emp);
    output_n_employee(n,emp);
     return 0;
}
