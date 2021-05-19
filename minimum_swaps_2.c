Ques - MINIMUM SWAPS 2 
 
https://www.hackerrank.com/challenges/minimum-swaps-2/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays


int minimumSwaps(int arr_count, int* arr) {
     int swap=0;
        for(int i=0;i<arr_count;i++){
            if(i+1!=arr[i]){
                int t=i;
                while(arr[t]!=i+1){
                    t++;  
                }
                int temp=arr[t];
                arr[t]=arr[i];
                arr[i]=temp;
                swap++;
            }
        }
        return swap;


}
