https://www.hackerrank.com/challenges/insertionsort1/problem
___________________________________________________________________

#include <stdio.h>

void print(int ar_size, int* ar) {
    int i;
    for(i=0; i<ar_size; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/* Head ends here */
void insertionSort(int ar_size, int *  ar) {
    int j = ar_size-1;
    int v = ar[j];
    while(v < ar[j-1]) {
        ar[j] = ar[j-1];
        j--;
        print(ar_size, ar);
    }
    ar[j] = v;
    print(ar_size, ar);
}

/* Tail starts here */
int main() {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}