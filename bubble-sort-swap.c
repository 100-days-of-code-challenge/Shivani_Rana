ques- bubblesortSwap
https://www.hackerrank.com/challenges/ctci-bubble-sort/problem
____________________________________________________________________

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void countSwaps(int a_count, int* a) {
    
    // BUBBLE SORT
    int count = 0;


    for(int i=0;i<a_count;i++)
    {
        for(int j=0;j<a_count-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
                count++;
            }
        }
    }
    
    printf("Array is sorted in %d swaps.\n",count);
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d",a[a_count-1]);
    
}

