Q7- PLUS-MINUS(HACKERRANK)


void plusMinus(int arr_count, int* arr) {
    
    float pos=0;
    float neg=0; 
    float zeroes=0;
    for(int i =0;i<arr_count;i++)
    {
        if(arr[i]<0)
        {
            neg++;
        }
        else if(arr[i]==0)
        {
            zeroes
            ++;
        }
        else if(arr[i]>0)
        {
            pos++;
        }
        
    }
    
   
    printf("%6f\n",pos/arr_count);
     printf("%6f\n",neg/arr_count);
      printf("%6f",zeroes/arr_count);


}
