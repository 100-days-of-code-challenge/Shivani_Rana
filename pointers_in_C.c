ques- pointers in C
https://www.hackerrank.com/challenges/pointer-in-c/problem
____________________________________________________________

#include <stdio.h>

void update(int *a,int *b) {
   *a=*a+*b;
    *b=abs(*a-(2**b)); 
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
