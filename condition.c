ques- condition statement in c
https://www.hackerrank.com/challenges/conditional-statements-in-c/problem 


#include<stdio.h>
#include<string.h>
int main()
{
 int n;
 scanf("%d",&n);
  char *a[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  if(n<=9)
  {
     printf("%s",a[n]);
  }

 else
 {
     printf("Greater than 9");
 }
 return 0;
}