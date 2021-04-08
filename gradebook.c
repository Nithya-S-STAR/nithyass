//Write a c program using structure and arrays to generate grade book

#include<stdio.h>
struct grades
{
    char name[50];
     int n ;
     char course[50];
     int m;
     int k;
     int w[k];
     int score[k];
    };
typedef struct grades grade;
grade input_one_student()
{
    grade a;
    printf(“Enter the number of gradebooks to be processed:\n”);
    scanf(“%d”,& a.n);
    for(int i = 0 ; i < a.n ; i++)
    {
       printf(“Enter the %d course :\n “ , a.n);
       scanf(“%c\n” , &a.course[i]);
      printf(“Enter the number of students in course and number of scores recorded respectively :\n”);
       scanf(“%d\t%d\n”,&a.m, &a.k);
       printf(“Enter the weights of scores recorded:\n);
       for(int j= 0 ; j< a.k ; j++)
       {
           scanf(“%d”,&a.w[j]);
           printf(“\t”);
      }
      printf(“\n”);
      for(int h = 0 ; h<1; h++)
      {
   
           scanf(“%d” ,&a.name[h]);
           printf(“\t”);
           for(int g=0 ; g< a.k ; g++)
           {
               scanf(“%d\t”,&a.score[i]);
           }
          printf(“\n”);
     }
    printf(“/n”);
  }
return a;
}
grade input_n_student()
{
   grade s;
    printf(“Enter the number of gradebooks to be processed:\n”);
    scanf(“%d”,& s.n);
    for(int i = 0 ; i < s.n ; i++)
    {
       printf(“Enter the %d course :\n “ , s.n);
       scanf(“%c\n” , &s.course[i]);
      printf(“Enter the number of students in course and number of scores recorded respectively :\n”);
       scanf(“%d\t%d\n”,&s.m, &s.k);
       printf(“Enter the weights of scores recorded:\n);
       for(int j= 0 ; j< s.k ; j++)
       {
           scanf(“%d”,&s.w[j]);
           printf(“\t”);
      }
      printf(“\n”);
      for(int h = 0 ; h<s.m; h++)
      {
   
           scanf(“%d” ,&s.name[h]);
           printf(“\t”);
           for(int g=0 ; g< s.k ; g++)
           {
               scanf(“%d\t”,&s.score[i]);
           }
          printf(“\n”);
     }
    printf(“/n”);
  }
return s;
}
grade compute_grade_one_student( grade *a)
{
    grade w_avg = 0 , W=0;
    for(int i =0; i<a.k; i++)
    {
        W = W + a.w[i];
         w_avg = w_avg + a.score[i]*a.w[i];
     }
     grade normalised = w_avg/W;
      if(0<=w_avg <60)
      print(“F”);
      else if(60<=w_avg<70)
      print(“D”);
      else if(70<=w_avg<80)
      print(“c”);
      else if(80<=w_avg<90)
      print(“B”);
      else
       print(“A”);
}
grade compute_grade_n_student(grade *s)
{
   grade w_avg = 0 , W=0;
    for(int i =0; i<a.k; i++)
    {
        W = W + a.w[i];
         w_avg = w_avg + a.score[i]*a.w[i];
     }
     grade normalised = w_avg/W;
      if(0<=w_avg <60)
      print(“F”);
      else if(60<=w_avg<70)
      print(“D”);
      else if(70<=w_avg<80)
      print(“c”);
      else if(80<=w_avg<90)
      print(“B”);
      else
       print(“A”);
}

void output_one(grade*a,grade *compute_grade_one_student)
{
   for(i=0;i<=n;i++)
   {
       printf(“%ch”,a.course[i]);
       for(j=0;j<=m;j++)
       {
           printf(“%ch”,a.name[i]);
           printf(“%f”,w_avg);
        }
    }
}
void output_one(grade*s,grade *compute_grade_n_student)
{
   for(i=0;i<=n;i++)
   {
       printf(“%ch”,a.course[i]);
       for(j=0;j<=m;j++)
       {
           printf(“%ch”,a.name[i]);
           printf(“%f”,w_avg);
        }
    }
}
int main()
{
  compute_grade_one_student();
   compute_grade_n_student();
   output();
return 0;
}
