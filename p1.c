Hackerrank Problem

____________________________________________________________________________________________________________



#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int distance = 1001;
    scanf("%d",&n);
    int *A = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&A[i]);
    }
    
    
    for(int i = 1; i < n; i++){
       for(int j=i-1;j>=0;j--)
       {
           if(A[i]==A[j])
           {
               if(i-j < distance)
                   distance = i-j;
               break;
           }
       }
    }
    
    if(distance == 1001)
        distance = -1;
    
    printf("%d\n",distance);
    return 0;
}