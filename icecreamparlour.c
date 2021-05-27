ques- icecream-parlour
https://www.hackerrank.com/challenges/icecream-parlor/problem
___________________________________________________________________

int* icecreamParlor(int m, int arr_count, int* arr, int* result_count) {
    int *a = malloc(2 *sizeof(int));
   
    for(int i =0;i<=arr_count-1;i++)
    {
        if(arr[i]<m)
        {
            int n = m-arr[i];
            for(int j=i+1;j<arr_count;j++)
            if(arr[j]==n)
            {
            a[0]=i+1;
            a[1]=j+1;
        }
        }
    }
    *result_count = 2;
   // printf("%d %d",a[0],a[1]);
return a;
}