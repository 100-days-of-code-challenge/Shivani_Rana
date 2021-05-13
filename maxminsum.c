Q8- MAX-MIN SUM

void miniMaxSum(int arr_count, int* arr) {
    int sum = 0;
     int min = arr[0];
      int max = arr[0];
    for(int i=1;i<arr_count;i++)
   {
       if(arr[i]>max)
       {
           max = arr[i];
       }
       
   }
    for(int i=1;i<arr_count;i++)
   {
       if(arr[i]<min)
       {
           min = arr[i];
       }
       
   }
   for(int i=0;i<arr_count;i++)
   {
       sum += arr[i];
   }
   int sum1 = sum-max;
   int sum2 = sum-min;
    printf("%d %d",sum1,sum2);

}
