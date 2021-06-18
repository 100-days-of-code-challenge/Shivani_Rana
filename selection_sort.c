SELECTION SORT
_____________________________________________________________________

int select(int arr[], int i)
{
    // code here such that selecionSort() sorts arr[]
     int a, j, min_idx;
  
    // One by one move boundary of unsorted subarray
    for (a = 0; a < i-1; a++)
    {
        // Find the minimum element in unsorted array
        min_idx = a;
        for (j = a+1; j < i; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
  
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[a]);
    }
}