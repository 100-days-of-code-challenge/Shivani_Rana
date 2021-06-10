interviewbit ques
https://www.interviewbit.com/problems/minimum-lights-to-activate/
__________________________________________________________________

int Solution::solve(vector<int> &A, int B) {
    int n =A.size();
    int count =0;
     
   
   for(int i=0;i<n;i++){
       int flag =0;
      for(int j=i+B-1; j>= i-B+1;j--){
          if(A[j]==1){
              count++;
              flag=1;
              i= j+B;
              break;
          }
      }
      if(flag ==0) return -1;
       
   }
   return count;
}