hackerrank problem:- Array-DS
https://www.hackerrank.com/challenges/arrays-ds/problem
_______________________________________________________________

int* reverseArray(int a_count, int* a, int* result_count) {
    
    int i=0;
    int j=a_count-1;
    while(i<j)
    {
        int temp = a[i];
        
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    *result_count = a_count;
    return a;
}