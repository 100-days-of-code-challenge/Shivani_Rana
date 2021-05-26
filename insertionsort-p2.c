https://www.hackerrank.com/challenges/insertionsort2/problem
________________________________________________________________

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insertionSort2(int n, int arr_count, int* arr) {
    
    
     int i, key, j;
    for(int i=1;i<n;i++)
     {
        
        key = arr[i];
        j= i-1;
        while(j>=0 && arr[j]>key)
        {
            
            arr[j+1]=arr[j];
            j--;
            // printArray(arr,n);
           
        }
    
        arr[j+1]= key;
        printArray(arr,n);
    }
     
    
}

