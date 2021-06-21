#include <stdio.h>
#include <string.h>
HackerRank problem 
https://www.hackerrank.com/challenges/1d-arrays-in-c/problem
______________________________________________________________

#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
        int a;
        scanf("%d",&a);
         int *arr = (int*)malloc(a * sizeof(int));
        for(int i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
        }   
        int sum =0;
        for(int j=0;j<a;j++)
        {
            sum = sum+arr[j];
        }
        printf("%d",sum);
        free(arr);
    return 0;
}
