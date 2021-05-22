printing pATTERN

https://www.hackerrank.com/challenges/printing-pattern-2/problem


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int size = 2*n -1;
      int end = size-1;
      int arr[size][size];
      int start = 0;
      while(n != 0)
      {
          for(int i=start;i<=end;i++)
          {
              for(int j=start;j<=end;j++)
              {
                  if((i == start) || (i == end) ||
                     (j == start) || (j == end))
                  arr[i][j] = n;
              }
          }
          ++start;
          --end;
          --n;
      }
      
      for(int i=0;i<size;i++)
      {
          for(int j=0;j<size;j++)
          {
              printf("%d ",arr[i][j]);
          }
          printf("\n");
      }
    return 0;
}
