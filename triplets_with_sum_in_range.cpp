gfg
Triplets with sum given range
https://practice.geeksforgeeks.org/problems/triplets-with-sum-with-given-range/1#
----------------------------------------------------------------------------------------
class Solution {
  public:
  int lessthan(int Arr[],int N,int R){
       sort(Arr,Arr+N);
      int count =0,j,k;
      int s =0;
      for(int i =0;i<N-2;i++){
          j = i+1;
          k = N-1;
          while(j!=k){
              s = Arr[i]+Arr[j]+Arr[k];
              if(s > R)
              k--;
              
              else{
                  
                  count = count+(k-j);
                  j++;
               
                  
              }
              
          }
      }
      return count;
  }
    int countTriplets(int Arr[], int N, int L, int R) {
        // code here
    
        int ans;
        ans = lessthan(Arr,N,R)- lessthan(Arr,N,L-1);
        return ans;
    }
};