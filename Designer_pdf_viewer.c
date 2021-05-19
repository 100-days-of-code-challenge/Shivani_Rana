#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
ques- Designer PDF Viewer
https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
_________________________________________________________________________

#include <limits.h>
#include <stdbool.h>

int main(){
    int n = 26;
    int *h = malloc(sizeof(int) * n);
    for(int h_i = 0; h_i < n; h_i++){
       scanf("%d",&h[h_i]);
    }
    char* word = (char *)malloc(512000 * sizeof(char));
    scanf("%s",word);
    
    int len = (int) strlen(word);
    int maxh = 0;
    //printf("%i", len);
    for (int c = 0; c < len; c++){
          if(h[word[c]-97] > maxh){
              maxh = h[word[c]-97];
          }
    }
    printf("%i\n", maxh*len);
    return 0;
}