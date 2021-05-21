ques- Viral Advertising
https://www.hackerrank.com/challenges/strange-advertising/problem
______________________________________________________________________


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,t1=0,t2=0,sum=0,m=5;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        t1 = m/2;
        m = t1*3;
        sum += t1;
    }
    
    printf("%d",sum);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}