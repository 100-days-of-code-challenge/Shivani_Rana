https://www.interviewbit.com/old/problems/first-missing-integer/

int Solution::firstMissingPositive(vector<int> &A) {
    
     sort(A.begin(),A.end());
    int n = A.size();
    int j=1;
    for(int i =0;i<n;i++){
        if(A[i]>0){
                if(A[i]!=j){break;}
                j++;
            }
        }
    return j;

}
