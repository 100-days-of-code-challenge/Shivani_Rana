ques- Finding the Median
https://www.hackerrank.com/challenges/find-the-median/problem
__________________________________________________________________

int findMedian(int n, int* arr) {
     int i, key, j;
    for(int i=1;i<n;i++)
     
       
    {
        
        key = arr[i];
        j= i-1;
        while(j>=0 && arr[j]>key)
        {
            
            arr[j+1]=arr[j];
            j--;
            
        }
        arr[j+1]= key;
    }
    
    for(int a=0;a<n;a++)
    {
        printf("%d",arr[i]);
    }
    
    
    int mid = n/2 + 1;
    
    return arr[mid];

}